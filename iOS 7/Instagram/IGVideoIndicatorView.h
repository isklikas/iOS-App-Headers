/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:39 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGVideoIndicatorView : UIView {
	UIView* _glyphView; 
	IGSimpleButton* _playGlyph; 
	IGSimpleButton* _pauseGlyph; 
	IGSimpleButton* _errorGlyph; 
	IGSimpleButton* _audioGlyph; 
	IGVideoGlyphView* _cameraGlyph; 
	IGVideoGlyphView* _progressView; 
	BOOL _hideGlyph; 
	id<IGVideoIndicatorViewDelegate> _delegate; 
	int _indicatorState; 
	float _progress; 
}
@property (assign,nonatomic,__weak) id<IGVideoIndicatorViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int indicatorState; 				//@synthesize indicatorState=_indicatorState - In the implementation block
@property (assign,nonatomic) float progress; 				//@synthesize progress=_progress - In the implementation block
-(void)setIndicatorState:(int)arg1;
-(void)showGlyph:(BOOL)arg1 animated:(BOOL)arg2 duration:(float)arg3 delay:(float)arg4 completion:(id)arg5;
-(void)audioTapped;
-(id)initWithFrame:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(void)setProgress:(float)arg1;
-(void).cxx_destruct;
@end