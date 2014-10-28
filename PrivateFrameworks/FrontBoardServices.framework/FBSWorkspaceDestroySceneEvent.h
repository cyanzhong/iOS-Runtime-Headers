/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSSceneTransitionContext;

@interface FBSWorkspaceDestroySceneEvent : FBSWorkspaceSceneEvent {
    FBSSceneTransitionContext *_transitionContext;
}

@property(retain) FBSSceneTransitionContext * transitionContext;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;

@end