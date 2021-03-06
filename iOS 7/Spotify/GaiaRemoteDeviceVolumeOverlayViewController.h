/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:51 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GaiaRemoteDeviceVolumeOverlayViewController : UIViewController {
	UILabel* _deviceNameLabel; 
	UIImageView* _volumeSymbolImageView; 
	UIProgressView* _volumeLevelView; 
	NSTimer* _hideTimer; 
}
@property (assign,nonatomic) float value; 
@property (nonatomic,copy) NSString* label; 
@property (nonatomic,retain) UILabel* deviceNameLabel; 				//@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView* volumeSymbolImageView; 				//@synthesize volumeSymbolImageView=_volumeSymbolImageView - In the implementation block
@property (nonatomic,retain) UIProgressView* volumeLevelView; 				//@synthesize volumeLevelView=_volumeLevelView - In the implementation block
@property (nonatomic,retain) NSTimer* hideTimer; 				//@synthesize hideTimer=_hideTimer - In the implementation block
+(id)keyPathsForValuesAffectingValue;
+(id)keyPathsForValuesAffectingLabel;
-(CGRect)frameForLabel:(id)arg1;
-(void)setDeviceNameLabel:(id)arg1;
-(void)setVolumeSymbolImageView:(id)arg1;
-(void)setVolumeLevelView:(id)arg1;
-(void)alignWithDeviceOrientation:(BOOL)arg1;
-(void)setHideTimer:(id)arg1;
-(void)hideTimerDidPop:(id)arg1;
-(void)destroySubviews;
-(void)showForDefaultDuration;
-(void)createSubviews;
-(void)deviceOrientationDidChange:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setValue:(float)arg1;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)loadView;
-(void)setLabel:(id)arg1;
-(void).cxx_destruct;
-(void)hide:(BOOL)arg1;
@end