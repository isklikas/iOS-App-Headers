/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:17 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBURLImage : NSObject {
	MBURLImageOperation* mOperation; 
	NSURL* mURL; 
	NSString* mScope; 
	UIImage* mImage; 
	NSError* mError; 
	NSMutableSet* mObservers; 
	id mCompletionBlock; 
	BOOL mKeepConnection; 
	BOOL mResumeEnabled; 
	BOOL mIsShouldReload; 
	int mImageSrcType; 
	int mRetryCount; 
	int mRetryIndex; 
}
@property (nonatomic,copy) NSURL* URL; 
@property (nonatomic,copy) NSString* scope; 
@property (nonatomic,copy) UIImage* image; 
@property (nonatomic,copy) NSError* error; 
@property (nonatomic,copy) NSString* path; 
@property (assign,nonatomic) BOOL resumeEnabled; 
@property (assign,nonatomic) BOOL isShouldReload; 
@property (assign,nonatomic) int imageSrcType; 
+(id)imageWithURL:(id)arg1 scope:(id)arg2 retry:(int)arg3 resume:(BOOL)arg4 completion:(id)arg5;
+(void)resetShouldReloadForProfileImages;
+(id)cachedUIImageForURL:(id)arg1;
+(void)scheduleTimer;
+(id)imageWithURL:(id)arg1 scope:(id)arg2 retry:(int)arg3 completion:(id)arg4;
+(id)imageWithURL:(id)arg1;
+(id)imageWithURL:(id)arg1 postprocessor:(SEL)arg2;
+(id)imageWithURLPreLoadCacheOnMainThread:(id)arg1 scope:(id)arg2 retry:(int)arg3 resume:(BOOL)arg4 completion:(id)arg5;
+(void)setRetryInterval:(double)arg1;
+(id)imageInfoForURL:(id)arg1;
+(void)setTimeoutInterval:(double)arg1;
+(void)initialize;
+(void)timerFired:(id)arg1;
-(void)retryIfNotLoaded;
-(void)setImageSrcType:(int)arg1;
-(void)clearURLImageScope;
-(void)didFinishLoadingData:(id)arg1 error:(id)arg2;
-(id)cacheScopeWithScope:(id)arg1;
-(id)pathForURL:(id)arg1 scope:(id)arg2;
-(void)deleteResumeDownloadedTmpFileWithUrl:(id)arg1 scope:(id)arg2;
-(void)setData:(id)arg1 forURL:(id)arg2 scope:(id)arg3;
-(id)imageForURL:(id)arg1 scope:(id)arg2;
-(void)setResumeEnabled:(BOOL)arg1;
-(void)loadFromURLConnection;
-(void)setRetryCount:(int)arg1;
-(void)setURLPreLoadCacheOnMainThread:(id)arg1;
-(void)registerTimerHandler;
-(void)unregisterTimerHandler;
-(void)callbackObservers;
-(void)setIsShouldReload:(BOOL)arg1;
-(void)keepConnection;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reload;
-(void)removeObserver:(id)arg1;
-(void)timerFired:(id)arg1;
-(void)setURL:(id)arg1;
-(BOOL)shouldCache;
-(void)setCompletionBlock:(id)arg1;
-(void)addObserver:(id)arg1;
-(BOOL)shouldReload;
-(void).cxx_destruct;
-(void)setScope:(id)arg1;
@end