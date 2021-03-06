/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:13 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTrackAnimation : SPAnimation {
	SPAsyncImageView* _imageView; 
	NSURL* _trackImageLink; 
	UIView* _parentView; 
	int _curveType; 
	CGRect _startRect; 
	CGRect _endRect; 
}
@property (nonatomic,retain) NSURL* trackImageLink; 				//@synthesize trackImageLink=_trackImageLink - In the implementation block
@property (nonatomic,retain) UIView* parentView; 				//@synthesize parentView=_parentView - In the implementation block
@property (assign,nonatomic) int curveType; 				//@synthesize curveType=_curveType - In the implementation block
@property (assign,nonatomic) CGRect startRect; 				//@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect; 				//@synthesize endRect=_endRect - In the implementation block
-(void)setCurveType:(int)arg1;
-(CGRect)squareRect:(CGRect)arg1;
-(void)setTrackImageLink:(id)arg1;
-(void)setParentView:(id)arg1;
-(void)setStartRect:(CGRect)arg1;
-(void)setEndRect:(CGRect)arg1;
-(void)startAnimation;
-(void)run;
-(void).cxx_destruct;
@end