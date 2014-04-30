/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:20 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPSessionDelegate.h>
#import <SPTOfflineModeState.h>

@interface SessionController : NSObject <SPSessionDelegate, SPTOfflineModeState> {
	SPSession* _session; 
	struct Core* _core; 
	BOOL _didJustAskUserForTimeline; 
	BOOL _isOnline; 
	BOOL _isOffline; 
	BOOL _isLoggedIn; 
	BOOL _incognitoMode; 
	SyncProgressController* _progress; 
	SPSocialManager* _social; 
	InboxController* _inbox; 
	AdController* _adController; 
	SPTOfflineManager* _offlineManager; 
	PlayController* _playController; 
	SPApHermesController* _hermes; 
	NSString* _currentAP; 
	SPRadioManager* _radioManager; 
	SPTSessionPlayerHolder* _playerHolder; 
	int _currentLoginMode; 
	SPPlaylistContainer* _treeContainer; 
}
@property (nonatomic,copy) BOOL connectedToWiFi; 
@property (nonatomic,copy) BOOL connectedTo3G; 
@property (nonatomic,copy) BOOL canSync; 
@property (nonatomic,copy) double incognitoModeTimeout; 
@property (nonatomic,copy) NSString* currentUserName; 
@property (nonatomic,copy) SPCurrentUser* currentUser; 
@property (nonatomic,copy) SPUser* user; 
@property (getter=isOffline,nonatomic,copy) BOOL offline; 
@property (assign,nonatomic) BOOL isOnline; 				//@synthesize isOnline=_isOnline - In the implementation block
@property (assign,nonatomic) BOOL isOffline; 				//@synthesize isOffline=_isOffline - In the implementation block
@property (assign,nonatomic) BOOL isLoggedIn; 				//@synthesize isLoggedIn=_isLoggedIn - In the implementation block
@property (nonatomic,retain) NSString* currentAP; 				//@synthesize currentAP=_currentAP - In the implementation block
@property (nonatomic,retain) SPApHermesController* hermes; 				//@synthesize hermes=_hermes - In the implementation block
@property (nonatomic,retain) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
@property (nonatomic,copy) SyncProgressController* progress; 				//@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SPSocialManager* social; 				//@synthesize social=_social - In the implementation block
@property (nonatomic,retain) SPRadioManager* radioManager; 				//@synthesize radioManager=_radioManager - In the implementation block
@property (nonatomic,retain) InboxController* inbox; 				//@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,retain) AdController* adController; 				//@synthesize adController=_adController - In the implementation block
@property (nonatomic,retain) SPTOfflineManager* offlineManager; 				//@synthesize offlineManager=_offlineManager - In the implementation block
@property (nonatomic,copy) NSArray* usersInCache; 
@property (nonatomic,copy) BOOL accountTypeIsFacebook; 
@property (nonatomic,copy) SPTSessionPlayerHolder* playerHolder; 				//@synthesize playerHolder=_playerHolder - In the implementation block
@property (assign,nonatomic) BOOL didJustAskUserForTimeline; 				//@synthesize didJustAskUserForTimeline=_didJustAskUserForTimeline - In the implementation block
@property (assign,nonatomic) int currentLoginMode; 				//@synthesize currentLoginMode=_currentLoginMode - In the implementation block
@property (assign,nonatomic) BOOL incognitoMode; 				//@synthesize incognitoMode=_incognitoMode - In the implementation block
@property (nonatomic,retain) SPPlaylistContainer* treeContainer; 				//@synthesize treeContainer=_treeContainer - In the implementation block
+(id)localizedDescriptionForApError:(int)arg1;
+(id)coreVersionString;
+(id)versionString;
-(id)starred;
-(id)trackForLink:(id)arg1;
-(int)streamingRules;
-(BOOL)playContextShuffled:(id)arg1;
-(BOOL)playRow:(int)arg1 fromContext:(id)arg2;
-(BOOL)streamingIsDMCARestricted;
-(void)setInbox:(id)arg1;
-(void)sessionLoginModeChanged;
-(void)forceOffline:(BOOL)arg1;
-(void)setHermes:(id)arg1;
-(void)setPlayController:(id)arg1;
-(void)setSocial:(id)arg1;
-(void)setAdController:(id)arg1;
-(void)setOfflineManager:(id)arg1;
-(void)setTreeContainer:(id)arg1;
-(void)setIsOnline:(BOOL)arg1;
-(void)setIsLoggedIn:(BOOL)arg1;
-(void)setCurrentAP:(id)arg1;
-(void)setForceOfflineRules:(BOOL)arg1;
-(void)forceReconnect;
-(id)starredForUser:(id)arg1;
-(id)localFiles;
-(BOOL)offlineModeEnabled;
-(void)sessionSocialError:(id)arg1;
-(void)connectToAp;
-(void)tryToDisableOfflineMode;
-(id)allPlaylists;
-(id)localTracksMatching:(id)arg1;
-(id)offlineSyncedTracksMatching:(id)arg1;
-(void)addToStarred:(id)arg1;
-(void)removeFromStarred:(id)arg1;
-(void)applyStarringChangesImmediately;
-(id)publishedPlaylistsForUser:(id)arg1;
-(id)playlistForLink:(id)arg1 withAutolink:(BOOL)arg2;
-(id)userWithUsername:(id)arg1;
-(void)reportTrackUrlClicked;
-(void)setDidJustAskUserForTimeline:(BOOL)arg1;
-(void)setRadioManager:(id)arg1;
-(void)setCurrentLoginMode:(int)arg1;
-(void)setIncognitoMode:(BOOL)arg1;
-(void)session:(id)arg1 messageToUser:(id)arg2 messageId:(int)arg3 type:(int)arg4;
-(void)session:(id)arg1 autoUpdateWithURL:(id)arg2;
-(void)session:(id)arg1 incognitoModeChangedByTimeout:(BOOL)arg2;
-(void)session:(id)arg1 playlistError:(id)arg2;
-(void)session:(id)arg1 tokenLostError:(id)arg2;
-(void)session:(id)arg1 offlineSyncError:(id)arg2;
-(void)session:(id)arg1 temporaryConnectionError:(id)arg2;
-(void)sessionProductStatedUpdated:(id)arg1;
-(void)session:(id)arg1 changedLoginMode:(BOOL)arg2;
-(void)session:(id)arg1 socialChange:(int)arg2 description:(id)arg3;
-(void)session:(id)arg1 socialError:(id)arg2;
-(void)session:(id)arg1 playTrack:(id)arg2 trackIndex:(int)arg3 paused:(BOOL)arg4 contextUri:(id)arg5 origin:(id)arg6 startAt:(int)arg7;
-(void)session:(id)arg1 playTrackCommand:(id)arg2;
-(void)session:(id)arg1 playCappingUpdated:(id)arg2;
-(void)session:(id)arg1 audioStreamerError:(id)arg2;
-(BOOL)contextHasSyncedTracks:(id)arg1;
-(id)offlineModeStateObservers;
-(void)offlineModeObserverModeWasUpdated;
-(void)addOfflineModeObserver:(id)arg1;
-(void)removeOfflineModeObserver:(id)arg1;
-(id)session;
-(id)initWithSession:(id)arg1;
-(void)dealloc;
-(void)invalidate;
-(int)connectionType;
-(void)setIsOffline:(BOOL)arg1;
-(void)flushCaches;
-(void).cxx_destruct;
@end