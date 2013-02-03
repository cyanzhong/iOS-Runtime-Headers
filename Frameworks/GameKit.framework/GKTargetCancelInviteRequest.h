/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSData, NSString;

@interface GKTargetCancelInviteRequest : GKDataRequest {
    NSString *_playerID;
    NSData *_pushToken;
    NSData *_sessionToken;
}

@property(retain) NSString * playerID;
@property(retain) NSData * pushToken;
@property(retain) NSData * sessionToken;

- (void)dealloc;
- (id)key;
- (id)playerID;
- (id)pushToken;
- (id)request;
- (id)sessionToken;
- (void)setPlayerID:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSessionToken:(id)arg1;

@end