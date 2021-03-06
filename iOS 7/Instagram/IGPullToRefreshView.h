/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:29 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGPullToRefreshView : UIView {
	BOOL _isSpinning; 
	BOOL _hasEverPullBeyondRefreshThreshold; 
	BOOL _isRecordingStatistics; 
	float _startingContentOffsetY; 
	id<IGPullRefreshControlDelegate> _delegate; 
	UIView* _spinnerView; 
	UILabel* _statusLabel; 
	int _state; 
	CALayer* _gradientLayer; 
	float _previousProgress; 
	float _startingProgressWhenLogged; 
	float _angleSpeed; 
	double _startingProgressTimeStamp; 
}
@property (assign,nonatomic) float startingContentOffsetY; 				//@synthesize startingContentOffsetY=_startingContentOffsetY - In the implementation block
@property (assign,nonatomic,__weak) id<IGPullRefreshControlDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView* spinnerView; 				//@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UILabel* statusLabel; 				//@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) int state; 				//@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isSpinning; 				//@synthesize isSpinning=_isSpinning - In the implementation block
@property (assign,nonatomic) BOOL hasEverPullBeyondRefreshThreshold; 				//@synthesize hasEverPullBeyondRefreshThreshold=_hasEverPullBeyondRefreshThreshold - In the implementation block
@property (nonatomic,retain) CALayer* gradientLayer; 				//@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) float previousProgress; 				//@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) float startingProgressWhenLogged; 				//@synthesize startingProgressWhenLogged=_startingProgressWhenLogged - In the implementation block
@property (assign,nonatomic) double startingProgressTimeStamp; 				//@synthesize startingProgressTimeStamp=_startingProgressTimeStamp - In the implementation block
@property (assign,nonatomic) float angleSpeed; 				//@synthesize angleSpeed=_angleSpeed - In the implementation block
@property (assign,nonatomic) BOOL isRecordingStatistics; 				//@synthesize isRecordingStatistics=_isRecordingStatistics - In the implementation block
-(void)ensureHiddenIfNotSpinning;
-(void)setStartingContentOffsetY:(float)arg1;
-(void)stopSpinning;
-(void)updateWithPullingOffset:(float)arg1;
-(void)startSpinningAndTriggerNetworkFetchIfPulledPastThreshold;
-(id)progressPathWithProgress:(float)arg1;
-(void)setIsSpinning:(BOOL)arg1;
-(void)setupInitialAnimationState;
-(id)circularSpinningAnimation;
-(id)gradientSpinningAnimation;
-(void)setupFinishedAnimationState;
-(id)suggestedCircleSpinAnimationDestinationAngle;
-(double)suggestedCircleSpinAnimationDuration;
-(float)numberOfDiscreteUnits;
-(BOOL)isShowingOnlyFirstSpinnerBar:(float)arg1;
-(BOOL)isShowingNineClockSpinnerBars:(float)arg1;
-(void)setIsRecordingStatistics:(BOOL)arg1;
-(void)setStartingProgressWhenLogged:(float)arg1;
-(void)setStartingProgressTimeStamp:(double)arg1;
-(BOOL)isShowingAllSpinnerBars:(float)arg1;
-(void)setAngleSpeed:(float)arg1;
-(float)discreteProgress:(float)arg1;
-(void)setPreviousProgress:(float)arg1;
-(void)updateSpinnerWithPullOffset:(float)arg1;
-(void)setHasEverPullBeyondRefreshThreshold:(BOOL)arg1;
-(void)setSpinnerView:(id)arg1;
-(void)setGradientLayer:(id)arg1;
-(void)setStatusLabel:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setState:(int)arg1;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
-(void)stopAnimation;
-(void)startAnimation;
-(void).cxx_destruct;
@end