/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:59 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPProgressView : UIView {
	BOOL _animate; 
	float progress; 
	UIView* fgContainer; 
	UIView* fg; 
}
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL animate; 				//@synthesize animate=_animate - In the implementation block
@property (nonatomic,retain) UIView* fgContainer; 
@property (nonatomic,retain) UIView* fg; 
-(void)commonSetup;
-(void)animateIt;
-(void)setFgContainer:(id)arg1;
-(void)setFg:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(id)initWithCoder:(id)arg1;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1;
-(void)setProgress:(float)arg1;
-(void).cxx_destruct;
-(void)setAnimate:(BOOL)arg1;
@end