/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSDate, NSString, UIImage;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {
    NSDate *_expirationDate;
    UIImage *_picture;
    NSString *_serverCacheTag;
    BOOL _updating;
}

@property(readonly) BOOL expired;
@property(retain) UIImage * picture;
@property(copy) NSString * serverCacheTag;
@property BOOL updating;

- (void).cxx_destruct;
- (id)description;
- (void)expire;
- (BOOL)expired;
- (id)picture;
- (id)serverCacheTag;
- (void)setPicture:(id)arg1;
- (void)setServerCacheTag:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (BOOL)updating;

@end