/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:48 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ImageMapReloadView : UIView {
	id<ImageMapReloadViewDelegate> delegate; 
	float _preferredHeight; 
}
@property (assign,nonatomic) id<ImageMapReloadViewDelegate> delegate; 
@property (assign,nonatomic) float preferredHeight; 				//@synthesize preferredHeight=_preferredHeight - In the implementation block
-(void)onTap:(id)arg1;
-(void)setPreferredHeight:(float)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
@end