/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:31 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLProgressBar : UIView {
	UIImageView* _bgImageView; 
	UIImageView* _barImageView; 
	UIImage* _bgImage; 
	UIImage* _barImage; 
	float _progress; 
	CGPoint _barImageOffset; 
}
@property (nonatomic,retain) UIImage* bgImage; 				//@synthesize bgImage=_bgImage - In the implementation block
@property (nonatomic,retain) UIImage* barImage; 				//@synthesize barImage=_barImage - In the implementation block
@property (assign,nonatomic) CGPoint barImageOffset; 				//@synthesize barImageOffset=_barImageOffset - In the implementation block
@property (assign,nonatomic) float progress; 				//@synthesize progress=_progress - In the implementation block
-(void)setBgImage:(id)arg1;
-(void)setBarImage:(id)arg1;
-(void)setBarImageOffset:(CGPoint)arg1;
-(void)applyProgress;
-(id)initWithFrame:(CGRect)arg1 bgImage:(id)arg2 barImage:(id)arg3;
-(void)setProgress:(float)arg1;
-(void).cxx_destruct;
@end