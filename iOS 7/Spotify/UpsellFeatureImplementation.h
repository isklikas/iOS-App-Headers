/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:42 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <TrialControllerDelegate.h>
#import <PlaybackErrorControllerDelegate.h>
#import <ShuffleControllerObserver.h>
#import <SPFeature.h>

@interface UpsellFeatureImplementation : NSObject <TrialControllerDelegate, PlaybackErrorControllerDelegate, ShuffleControllerObserver, SPFeature> {
	BOOL _upsellFeatureEnabled; 
	BOOL _shuffleIntroFlowEnabled; 
	BOOL _trialStartedPromoEnabled; 
	BOOL _trialEndedPromoEnabled; 
	BOOL _reminderPromoEnabled; 
	BOOL _hasPlayedContextTrack; 
	id<BaseFeature> _baseUI; 
	id<PlaybackFeature> _playbackFeature; 
	id<ShuffleFeature> _shuffleFeature; 
	id<LegacyFeature> _legacyFeature; 
	id<RadioFeature> _radioFeature; 
	id<Player> _player; 
	id<ShuffleManager> _shuffleManager; 
	UpsellLocalNotificationController* _localNotificationController; 
	DeferredTrialController* _deferredTrialController; 
	SPKVObservation* _trackChangedObservation; 
	int _playedTracksRequirement; 
	SPTrack* _lastPlayedTrack; 
	id<ShuffleControllerObjC> _shuffleController; 
	id<UpsellPopupManager> _upsellPopupManager; 
	UpsellPlaybackErrorManager* _upsellPlaybackErrorManager; 
	UpsellLogController* _logController; 
}
@property (assign,getter=isUpsellFeatureEnabled,nonatomic) BOOL upsellFeatureEnabled; 				//@synthesize upsellFeatureEnabled=_upsellFeatureEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<BaseFeature> baseUI; 				//@synthesize baseUI=_baseUI - In the implementation block
@property (assign,nonatomic,__weak) id<PlaybackFeature> playbackFeature; 				//@synthesize playbackFeature=_playbackFeature - In the implementation block
@property (assign,nonatomic,__weak) id<ShuffleFeature> shuffleFeature; 				//@synthesize shuffleFeature=_shuffleFeature - In the implementation block
@property (assign,nonatomic,__weak) id<LegacyFeature> legacyFeature; 				//@synthesize legacyFeature=_legacyFeature - In the implementation block
@property (assign,nonatomic,__weak) id<RadioFeature> radioFeature; 				//@synthesize radioFeature=_radioFeature - In the implementation block
@property (nonatomic,retain) id<Player> player; 				//@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<ShuffleManager> shuffleManager; 				//@synthesize shuffleManager=_shuffleManager - In the implementation block
@property (nonatomic,retain) UpsellLocalNotificationController* localNotificationController; 				//@synthesize localNotificationController=_localNotificationController - In the implementation block
@property (nonatomic,retain) DeferredTrialController* deferredTrialController; 				//@synthesize deferredTrialController=_deferredTrialController - In the implementation block
@property (nonatomic,retain) SPKVObservation* trackChangedObservation; 				//@synthesize trackChangedObservation=_trackChangedObservation - In the implementation block
@property (assign,getter=isShuffleIntroFlowEnabled,nonatomic) BOOL shuffleIntroFlowEnabled; 				//@synthesize shuffleIntroFlowEnabled=_shuffleIntroFlowEnabled - In the implementation block
@property (assign,getter=isTrialStartedPromoEnabled,nonatomic) BOOL trialStartedPromoEnabled; 				//@synthesize trialStartedPromoEnabled=_trialStartedPromoEnabled - In the implementation block
@property (assign,getter=isTrialEndedPromoEnabled,nonatomic) BOOL trialEndedPromoEnabled; 				//@synthesize trialEndedPromoEnabled=_trialEndedPromoEnabled - In the implementation block
@property (assign,getter=isReminderPromoEnabled,nonatomic) BOOL reminderPromoEnabled; 				//@synthesize reminderPromoEnabled=_reminderPromoEnabled - In the implementation block
@property (assign,nonatomic) int playedTracksRequirement; 				//@synthesize playedTracksRequirement=_playedTracksRequirement - In the implementation block
@property (nonatomic,retain) SPTrack* lastPlayedTrack; 				//@synthesize lastPlayedTrack=_lastPlayedTrack - In the implementation block
@property (assign,nonatomic,__weak) id<ShuffleControllerObjC> shuffleController; 				//@synthesize shuffleController=_shuffleController - In the implementation block
@property (nonatomic,retain) id<UpsellPopupManager> upsellPopupManager; 				//@synthesize upsellPopupManager=_upsellPopupManager - In the implementation block
@property (nonatomic,retain) UpsellPlaybackErrorManager* upsellPlaybackErrorManager; 				//@synthesize upsellPlaybackErrorManager=_upsellPlaybackErrorManager - In the implementation block
@property (nonatomic,retain) UpsellLogController* logController; 				//@synthesize logController=_logController - In the implementation block
@property (assign,nonatomic) BOOL hasPlayedContextTrack; 				//@synthesize hasPlayedContextTrack=_hasPlayedContextTrack - In the implementation block
+(id)featureIdentifier;
+(id)featureDependencies;
-(void)dealloc;
-(BOOL)playbackErrorDelegateShowUpsell:(int)arg1 withTrack:(id)arg2;
-(BOOL)trialControllerShouldShowTrialStarted:(id)arg1;
-(BOOL)trialControllerShouldShowTrialEnded:(id)arg1;
-(void)setShuffleManager:(id)arg1;
-(void)setUpsellPopupManager:(id)arg1;
-(void)configureWithFeatures:(id)arg1;
-(void)setRadioFeature:(id)arg1;
-(id)provideUpsellPopupManager;
-(void)setLegacyFeature:(id)arg1;
-(void)setShuffleController:(id)arg1;
-(void)setBaseUI:(id)arg1;
-(void)setPlaybackFeature:(id)arg1;
-(void)setShuffleFeature:(id)arg1;
-(void)loadUpsellTheme;
-(void)loadUserPolicySettings;
-(void)loadControllers;
-(void)setReminderPromoEnabled:(BOOL)arg1;
-(void)setPlayedTracksRequirement:(int)arg1;
-(void)setShuffleIntroFlowEnabled:(BOOL)arg1;
-(void)setTrialStartedPromoEnabled:(BOOL)arg1;
-(void)setTrialEndedPromoEnabled:(BOOL)arg1;
-(void)setLocalNotificationController:(id)arg1;
-(void)setLogController:(id)arg1;
-(id)provideDeferredTrialController;
-(void)setDeferredTrialController:(id)arg1;
-(void)setUpsellPlaybackErrorManager:(id)arg1;
-(void)playControllerTrackChanged:(id)arg1;
-(void)setTrackChangedObservation:(id)arg1;
-(void)setLastPlayedTrack:(id)arg1;
-(BOOL)trialStartedRequirement;
-(void)presentTrialStartedPromotion;
-(BOOL)trialEndedRequirement;
-(void)presentTrialEndedPromotion;
-(BOOL)playedEnoughTracksRequirement;
-(void)presentReminderPromotion;
-(void)_presentTrialStartedPromotion:(BOOL)arg1;
-(void)_presentTrialEndedPromotion:(BOOL)arg1;
-(void)_presentReminderPromotion:(BOOL)arg1;
-(void)shuffleControllerPlayingRecommendationChanged;
-(void)setHasPlayedContextTrack:(BOOL)arg1;
-(id)provideProductStateMonitorController;
-(void)shuffleControllerDidFailWithError:(id)arg1;
-(void)shuffleController:(id)arg1 willPlayContext:(id)arg2;
-(void)presentUpsellPopupWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 viewEventURI:(id)arg4;
-(void)setUpsellFeatureEnabled:(BOOL)arg1;
-(id)settingForKey:(id)arg1;
-(void)setSetting:(id)arg1 forKey:(id)arg2;
-(void)unload;
-(void)load;
-(void).cxx_destruct;
-(void)setPlayer:(id)arg1;
@end