/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:37 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface TFNetworkManager : NSObject {
	NSFileManager* _fm; 
	NSOperationQueue* _networkQueue; 
	BOOL _paused; 
	int _pauseCounter; 
	unsigned _backgroundTaskID; 
	TFReachability* _reach; 
	BOOL _pausedForReachability; 
}
+(id)sharedManager;
-(void)addNetworkOperation:(id)arg1;
-(void)sendFile:(id)arg1 toURL:(id)arg2 withPriority:(int)arg3;
-(void)sendFile:(id)arg1 toURL:(id)arg2;
-(void)_startBackgroundTaskIfAppropriateAsyncSafe;
-(void)_handleReachabilityStatus:(int)arg1;
-(id)_createFileOperationForFile:(id)arg1 url:(id)arg2;
-(void)_startBackgroundTaskIfAppropriate;
-(BOOL)_isResponseASuccess:(id)arg1;
-(BOOL)_shouldPauseAndRetryFailedFileSend:(id)arg1 response:(id)arg2 error:(id)arg3;
-(void)_pauseQueueForABit;
-(void)_setPaused:(BOOL)arg1;
-(void)_endBackgroundTaskIfAppropriateAsyncSafe;
-(void)_startBackgroundTask;
-(void)_endBackgroundTaskIfAppropriate;
-(void)_endBackgroundTask;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void).cxx_destruct;
@end