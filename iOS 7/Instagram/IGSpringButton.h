/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:06 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGSpringButton : UIControl {
	UIView* _contentView; 
	UIImageView* _springContentView; 
	UIImageView* _accessoryImageView; 
	UIImageView* _iconImageView; 
	UILabel* _titleLabel; 
	float _minimumWidth; 
	float _maximumWidth; 
	int _displayType; 
	float _currentScale; 
	IGDynamics1D* _spring; 
}
@property (nonatomic,retain) UIView* contentView; 				//@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImageView* springContentView; 				//@synthesize springContentView=_springContentView - In the implementation block
@property (nonatomic,retain) UIImageView* accessoryImageView; 				//@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,retain) UIImageView* iconImageView; 				//@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) float minimumWidth; 				//@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) float maximumWidth; 				//@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic) int displayType; 				//@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) float currentScale; 				//@synthesize currentScale=_currentScale - In the implementation block
@property (assign,nonatomic,__weak) IGDynamics1D* spring; 				//@synthesize spring=_spring - In the implementation block
-(void)setSpring:(id)arg1;
-(void)scaleUp:(BOOL)arg1 withVelocity:(BOOL)arg2;
-(BOOL)shouldShowTitle;
-(void)setSpringContentView:(id)arg1;
-(void)setAccessoryImageView:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void)setContentView:(id)arg1;
-(void)setMinimumWidth:(float)arg1;
-(void)setMaximumWidth:(float)arg1;
-(void)cancelTrackingWithEvent:(id)arg1;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setDisplayType:(int)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setIconImageView:(id)arg1;
-(void).cxx_destruct;
-(void)setCurrentScale:(float)arg1;
@end