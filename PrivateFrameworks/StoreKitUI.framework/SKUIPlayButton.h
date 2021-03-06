/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPlayButton : SKUIPlayButtonControl {
    long long _itemIdentifier;
    NSString *_mediaURLString;
    NSString *_playItemIdentifier;
    BOOL _radio;
    BOOL _showOnDemand;
    BOOL _showStop;
    BOOL _useLargeButton;
}

@property (nonatomic) long long itemIdentifier;
@property (nonatomic, copy) NSString *mediaURLString;
@property (nonatomic, copy) NSString *playItemIdentifier;
@property (getter=isRadio, nonatomic) BOOL radio;
@property (nonatomic) BOOL showOnDemand;
@property (nonatomic) BOOL useLargeButton;

+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_updateEnabledState;
- (float)buttonCornerRadius;
- (struct CGSize { float x1; float x2; })buttonSize;
- (id)cancelImage;
- (id)defaultBackgroundColor;
- (BOOL)isRadio;
- (long long)itemIdentifier;
- (void)layoutSubviews;
- (id)mediaURLString;
- (id)outerBorderColor;
- (id)playImage;
- (void)playIndicatorDidChange:(BOOL)arg1;
- (id)playItemIdentifier;
- (void)refresh;
- (void)reloadWithItemStatus:(id)arg1 animated:(BOOL)arg2;
- (void)setBackgroundType:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setMediaURLString:(id)arg1;
- (void)setPlayItemIdentifier:(id)arg1;
- (void)setRadio:(BOOL)arg1;
- (void)setShowOnDemand:(BOOL)arg1;
- (void)setUseLargeButton:(BOOL)arg1;
- (BOOL)showOnDemand;
- (BOOL)showOuterBorder;
- (void)tintColorDidChange;
- (BOOL)useLargeButton;

@end
