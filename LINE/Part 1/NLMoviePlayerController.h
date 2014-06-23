/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:53 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLMoviePlayerController : NLViewController {
	BOOL autoplayIfReady; 
	BOOL canceled; 
	BOOL _didEnterBackground; 
	BOOL _viewDidAppear; 
	BOOL _isHiddenShareButton; 
	BOOL _isPlaying; 
	MPMoviePlayerController* _movieController; 
	UIButton* _playButton; 
	UIView* _dimView; 
	NLMovieURLLoader* _movieURLLoader; 
	UIActivityIndicatorView* _spinner; 
	UIImageView* _bottomBarView; 
	UIButton* _saveButton; 
	UIButton* _shareButton; 
	NLObjectStorageOperation* _downloadOperation; 
	TalkMessageObject* _messageObject; 
	NSMutableSet* moviePlayerObservers; 
	NSMutableSet* observers; 
	UIActivityIndicatorView* _activityIndicator; 
	NLSafeUnretainedObject* _weakSelf; 
	NSString* _audioCategoryBackup; 
}
@property (nonatomic,retain) MPMoviePlayerController* movieController; 				//@synthesize movieController=_movieController - In the implementation block
@property (nonatomic,retain) NLMovieURLLoader* movieURLLoader; 				//@synthesize movieURLLoader=_movieURLLoader - In the implementation block
@property (nonatomic,retain) UIButton* playButton; 				//@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UIView* dimView; 				//@synthesize dimView=_dimView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* spinner; 				//@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIImageView* bottomBarView; 				//@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (nonatomic,retain) UIButton* saveButton; 				//@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton* shareButton; 				//@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* activityIndicator; 				//@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NLObjectStorageOperation* downloadOperation; 				//@synthesize downloadOperation=_downloadOperation - In the implementation block
@property (nonatomic,retain) TalkMessageObject* messageObject; 				//@synthesize messageObject=_messageObject - In the implementation block
@property (assign,nonatomic) BOOL autoplayIfReady; 
@property (assign,nonatomic) BOOL didEnterBackground; 				//@synthesize didEnterBackground=_didEnterBackground - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear; 				//@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (assign,nonatomic) BOOL canceled; 
@property (nonatomic,retain) NSMutableSet* moviePlayerObservers; 
@property (nonatomic,retain) NSMutableSet* observers; 
@property (nonatomic,retain) NLSafeUnretainedObject* weakSelf; 				//@synthesize weakSelf=_weakSelf - In the implementation block
@property (nonatomic,retain) NSString* audioCategoryBackup; 				//@synthesize audioCategoryBackup=_audioCategoryBackup - In the implementation block
@property (assign,nonatomic) BOOL isHiddenShareButton; 				//@synthesize isHiddenShareButton=_isHiddenShareButton - In the implementation block
@property (assign,nonatomic) BOOL isPlaying; 				//@synthesize isPlaying=_isPlaying - In the implementation block
-(void)setMessageObject:(id)arg1;
-(void)loadAndPlayMovieAtURLOfTalkMessage:(id)arg1;
-(void)setWeakSelf:(id)arg1;
-(void)addObservers;
-(void)removeObservers;
-(void)loadAndPlayMovieWithOBSParameters:(id)arg1;
-(void)beforeClose;
-(void)showMenuBar;
-(void)setAutoplayIfReady:(BOOL)arg1;
-(void)setIsHiddenShareButton:(BOOL)arg1;
-(void)showSaveButton:(BOOL)arg1;
-(void)setDownloadOperation:(id)arg1;
-(void)saveDownloadedFileToAlbum:(id)arg1;
-(void)showSharingViewController:(id)arg1;
-(void)prepareForSharingVideoWithFinishBlock:(id)arg1;
-(void)activateAudioSessionForMoviePlay;
-(void)removeMovieNotificationObservers;
-(void)playMediaAtURL:(id)arg1;
-(BOOL)isCallingByVOIP;
-(void)setDidEnterBackground:(BOOL)arg1;
-(void)playButtonPressed:(id)arg1;
-(void)share:(id)arg1;
-(void)setMovieController:(id)arg1;
-(void)addMovieNotificationObservers;
-(void)deactivateAudioSessionForMoviePlay;
-(void)setAudioCategoryBackup:(id)arg1;
-(void)abortDownloading;
-(void)setMovieURLLoader:(id)arg1;
-(void)setSaveButton:(id)arg1;
-(void)setShareButton:(id)arg1;
-(void)setMoviePlayerObservers:(id)arg1;
-(void)updateSaveButton;
-(void)setViewDidAppear:(BOOL)arg1;
-(void)setPlayButton:(id)arg1;
-(void)close:(id)arg1;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)setDimView:(id)arg1;
-(void)stop;
-(void)save:(id)arg1;
-(void)setActivityIndicator:(id)arg1;
-(void)setObservers:(id)arg1;
-(void)setBottomBarView:(id)arg1;
-(void)showSpinner;
-(void)setSpinner:(id)arg1;
-(void)setCanceled:(BOOL)arg1;
-(void).cxx_destruct;
-(void)setIsPlaying:(BOOL)arg1;
@end