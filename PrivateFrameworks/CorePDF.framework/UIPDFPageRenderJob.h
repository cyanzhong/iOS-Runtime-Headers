/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIImage, UIPDFPageRenderOperation, UIPDFPage;

@interface UIPDFPageRenderJob : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    SEL _callback;
    UIImage *_image;
    int _lock;
    UIPDFPageRenderOperation *_operation;
    UIPDFPage *_page;
    unsigned int _pageIndex;
    BOOL _sendPending;
    } _size;
    id _target;
    id _userData;
    unsigned int pageIndex;
}

@property(retain,readonly) UIImage * image;
@property UIPDFPageRenderOperation * operation;
@property(readonly) unsigned int pageIndex;

- (void)cancel;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 queuePriority:(int)arg3;
- (id)operation;
- (unsigned int)pageIndex;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)setOperation:(id)arg1;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;

@end