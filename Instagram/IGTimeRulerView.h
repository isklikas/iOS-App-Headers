/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:37 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGTimeRulerView : UIView {
	float _pixelsPerSecond; 
	float _totalTime; 
}
@property (assign,nonatomic) float pixelsPerSecond; 				//@synthesize pixelsPerSecond=_pixelsPerSecond - In the implementation block
@property (assign,nonatomic) float totalTime; 				//@synthesize totalTime=_totalTime - In the implementation block
-(void)setPixelsPerSecond:(float)arg1;
-(id)durationStringForNumber:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setTotalTime:(float)arg1;
@end