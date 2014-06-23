/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:41 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NJPurchaseURLConnectionOperation : NSOperation {
	NSThread* mThread; 
	NSTimer* mTimer; 
	NSURLConnection* mConnection; 
	NSURLRequest* mRequest; 
	NSURLResponse* mResponse; 
	NSError* mError; 
	int mTotalBytesRead; 
	int mTotalBytesExpectedToRead; 
	double mTimeoutInterval; 
	int mRetryCount; 
	int mRetryIndex; 
	int mState; 
	NJPurchaseBackgroundTask* mBackgroundTask; 
	BOOL mAutoRetryAfterWakeup; 
	BOOL mUsesTempFile; 
	struct {
		id data;
		 NSMutableData;
		 file;
		id path;
		 NSString;
		id handle;
		) NSFileHandle;
	} mResult; 
}
@property (assign,nonatomic) BOOL autoRetryAfterWakeup; 
@property (assign,nonatomic) double timeoutInterval; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL usesTempFile; 
@property (nonatomic,copy) NSURLRequest* request; 
@property (nonatomic,copy) NSURLResponse* response; 
@property (nonatomic,retain) NSError* error; 
@property (nonatomic,copy) NSData* data; 
@property (nonatomic,copy) NSString* filePath; 
-(void)didReceiveResponse;
-(void)didFail;
-(void)setAutoRetryAfterWakeup:(BOOL)arg1;
-(void)setRetryCount:(int)arg1;
-(void)didReceiveBodyData:(int)arg1 totalBytesRead:(int)arg2 totalBytesExpectedToRead:(int)arg3;
-(BOOL)shouldRetryWithAttempt:(int)arg1;
-(void)finishConnectionWithError:(id)arg1;
-(void)willRetryWithAttempt:(int)arg1;
-(void)cancelConnection;
-(id)willCacheResponse:(id)arg1;
-(void)didSendBodyData:(int)arg1 totalBytesWritten:(int)arg2 totalBytesExpectedToWrite:(int)arg3;
-(id)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
-(id)needNewBodyStream:(id)arg1;
-(void)suspendConnection;
-(void)resumeConnection;
-(void)keepRunningInBackground;
-(void)setUsesTempFile:(BOOL)arg1;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;
-(void)didFinishLoading;
-(void)setTimeoutInterval:(double)arg1;
-(void)setError:(id)arg1;
-(void)setRequest:(id)arg1;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)applicationWillEnterForeground:(id)arg1;
-(void)timerFired:(id)arg1;
-(void)cancel;
-(void)main;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(void)resetTimer;
@end