/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditOverlayBadge : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _insets;
    UILabel *_label;
    NSString *_text;
}

@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)label;
- (void)setText:(id)arg1;
- (id)text;

@end
