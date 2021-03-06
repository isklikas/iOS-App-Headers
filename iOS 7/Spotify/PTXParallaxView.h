/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:43 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <_UISettingsKeyObserver.h>
#import <PTXParallaxObserver.h>

@interface PTXParallaxView : UIView <_UISettingsKeyObserver, PTXParallaxObserver> {
	PTXParallaxController* _parallaxController; 
	PTXParallaxSettings* _settings; 
	float _viewAlpha; 
	PTXMotionWindow* _slideWindowX; 
	PTXMotionWindow* _slideWindowY; 
	PTXMotionWindow* _tiltWindowX; 
	PTXMotionWindow* _tiltWindowY; 
	BOOL _stopped; 
	BOOL _resizesView; 
	UIView* _view; 
}
@property (nonatomic,retain) UIView* view; 				//@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL resizesView; 				//@synthesize resizesView=_resizesView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setView:(id)arg1;
-(void)start;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2;
-(void)stop;
-(void)_updateSettings;
-(struct CATransform3D)_tiltTransform:(CGPoint)arg1;
-(struct CATransform3D)_slideTransform:(CGPoint)arg1;
-(void)_clearOffset;
-(void)handleParallaxOffset:(CGPoint)arg1 lockStatus:(int)arg2 strength:(float)arg3;
-(void)clearParallaxOffset;
-(id)initWithView:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3;
-(void)setViewAlpha:(float)arg1;
-(void)setResizesView:(BOOL)arg1;
-(void).cxx_destruct;
@end