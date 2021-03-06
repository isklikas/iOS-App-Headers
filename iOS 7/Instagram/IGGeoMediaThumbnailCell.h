/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:42 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGGeoMediaThumbnailCell : IGMediaThumbnailCell {
	BOOL _enabled; 
	BOOL _checked; 
	UIView* _overlayView; 
	UIImageView* _checkmarkView; 
}
@property (assign,nonatomic) BOOL enabled; 				//@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL checked; 				//@synthesize checked=_checked - In the implementation block
@property (nonatomic,retain) UIView* overlayView; 				//@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImageView* checkmarkView; 				//@synthesize checkmarkView=_checkmarkView - In the implementation block
-(void)setCheckmarkView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setChecked:(BOOL)arg1;
-(void)setEnabled:(BOOL)arg1;
-(void)setOverlayView:(id)arg1;
-(void).cxx_destruct;
@end