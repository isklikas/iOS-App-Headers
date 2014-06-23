/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:14 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBPostSingleImageView : MBPostImageView {
	UIView* mParentView; 
	MBPhoto* mPhoto; 
	MBURLImageButton* mImageButton; 
	BOOL mCornerRadius; 
}
+(float)heightWithType:(int)arg1 activity:(id)arg2 width:(float)arg3;
+(struct UIEdgeInsets)marginWithType:(int)arg1 activity:(id)arg2;
+(id)postImageViewWithType:(int)arg1;
-(void)drawCellData;
-(void)setCellData:(id)arg1;
-(BOOL)existImage;
-(CGSize)sizeFromContainer:(CGSize)arg1 margin:(CGPoint)arg2;
-(void)layoutFromContainer:(CGSize)arg1 margin:(CGPoint)arg2;
-(id)imageWithIndex:(int)arg1;
-(void)setVisiblePhotoIndex:(int)arg1;
-(id)movieURL;
-(void)setImageRadius;
-(CGSize)movieSize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 type:(int)arg2;
-(void).cxx_destruct;
-(struct UIEdgeInsets)margin;
@end