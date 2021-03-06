/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStorePageViewController : SUViewController <ISURLOperationDelegate, SKUITabBarItemRootViewController, SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate> {
    SUViewController *_activeChildViewController;
    int _activeSectionIndex;
    struct __CFSet { } *_allowedInterfaceOrientations;
    SSAuthenticationContext *_authContext;
    _UIBackdropView *_backdropView;
    BOOL _canMoveToOverlay;
    <SUStorePageViewControllerDelegate> *_delegate;
    double _expirationTime;
    BOOL _externalRequest;
    BOOL _lastLoadDidFail;
    SUStorePageProtocol *_lastValidProtocol;
    id /* block */ _loadBlock;
    BOOL _loadingForSectionChange;
    BOOL _loadsWhenHidden;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    BOOL _needsAuthentication;
    int _pageType;
    SUViewController *_pendingChildViewController;
    ISURLRequestPerformance *_performanceMetrics;
    BOOL _reloadOnAppear;
    BOOL _reloadsWhenCacheExpired;
    NSString *_scriptUserInfo;
    SUSearchFieldController *_searchFieldController;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
    BOOL _shouldAdjustContentOffsets;
    SSMutableURLRequestProperties *_urlRequestProperties;
    BOOL _useWebViewFastPath;
}

@property (nonatomic, copy) SSURLRequestProperties *URLRequestProperties;
@property (getter=_isCacheExpired, nonatomic, readonly) BOOL _cacheExpired;
@property (getter=_reloadsWhenCacheExpired, setter=_setReloadsWhenCacheExpired:, nonatomic) BOOL _reloadsWhenCacheExpired;
@property (nonatomic, readonly) SUViewController *activeChildViewController;
@property (nonatomic, retain) SSAuthenticationContext *authenticationContext;
@property (nonatomic, readonly) BOOL canBeResolved;
@property (nonatomic) BOOL canMoveToOverlay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUStorePageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property (getter=isExternalRequest, nonatomic) BOOL externalRequest;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL loadsWhenHidden;
@property (nonatomic) BOOL needsAuthentication;
@property (nonatomic, copy) NSString *scriptUserInfo;
@property (nonatomic, readonly) SUSearchFieldController *searchFieldController;
@property (nonatomic, readonly) SUPageSectionGroup *sectionGroup;
@property (nonatomic, readonly) SUSegmentedControl *sectionSegmentedControl;
@property (readonly) Class superclass;

- (id)URLRequest;
- (id)URLRequestProperties;
- (id)_activeChildViewController;
- (id)_activePageSection;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_dismissNavigationMenuViewController;
- (void)_displaySegmentedControl:(id)arg1;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (double)_expirationTime;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishHandlingFailure;
- (void)_finishSuccessfulLoad;
- (void)_finishWebViewLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForActiveViewController;
- (void)_handleFailureWithError:(id)arg1;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (BOOL)_isCacheExpired;
- (BOOL)_isInTransientViewController;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_navigationButtonAction:(id)arg1;
- (void)_navigationMenuButtonAction:(id)arg1;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(int)arg2 withButtonItem:(id)arg3;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (void)_performActionForProtocolButton:(id)arg1;
- (void)_reloadBackgroundViewProperties;
- (void)_reloadContentInsets;
- (void)_reloadForAppearance:(BOOL)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_reloadNavigationBar;
- (void)_reloadNavigationButtons;
- (void)_reloadNavigationMenus;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionButtons;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(BOOL)arg2;
- (BOOL)_reloadsWhenCacheExpired;
- (void)_renderStorePage:(id)arg1 withType:(int)arg2 viewController:(id)arg3 block:(id /* block */)arg4;
- (void)_repositionForChildViewController:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (BOOL)_sectionIsNetworkConstrained;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(BOOL)arg2;
- (void)_setHeaderView:(id)arg1;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setReloadsWhenCacheExpired:(BOOL)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_setSegmentedControl:(id)arg1;
- (BOOL)_shouldDisplayControlsInNavigationBar;
- (BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (BOOL)_shouldFetchAutomatically;
- (BOOL)_shouldReloadForAppearance;
- (void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_tearDownNavigationMenu;
- (void)_verifyStorePageProtocol:(id)arg1;
- (id)activeChildViewController;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)authenticationContext;
- (BOOL)canBeResolved;
- (BOOL)canMoveToOverlay;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (id)copyScriptViewController;
- (void)dealloc;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (double)defaultPNGExpirationTime;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)displayedURL;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)enqueueFetchOperation;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)handleFailureWithError:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)hidePreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)iTunesStoreUI_searchFieldController;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (id)init;
- (id)initWithTabBarItem:(id)arg1;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (BOOL)isExternalRequest;
- (BOOL)isLoaded;
- (BOOL)isShowingPreviewOverlay;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)loadView;
- (BOOL)loadsWhenHidden;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (id)navigationItemForScriptInterface;
- (BOOL)needsAuthentication;
- (id)newFetchOperation;
- (id)newPlaceholderViewController;
- (id)newRotationController;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(int)arg2 animated:(BOOL)arg3;
- (void)reload;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 ofType:(int)arg2 forURL:(id)arg3;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)scriptUserInfo;
- (id)searchFieldController;
- (id)sectionGroup;
- (id)sectionSegmentedControl;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCanMoveToOverlay:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setExternalRequest:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setLoadsWhenHidden:(BOOL)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setScriptUserInfo:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShouldAdjustContentOffsets:(BOOL)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setURLRequestProperties:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)shouldAdjustContentOffsets;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)showExternalURL:(id)arg1;
- (void)showPlaceholderViewController;
- (BOOL)showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)urlBagKey;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)viewIsReady;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
