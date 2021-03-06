/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:23 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLMovieURLLoader : NSObject {
	BOOL _isLoading; 
	NSString* _messageID; 
	id _completion; 
	NSURL* _downloadURL; 
}
@property (nonatomic,retain) NSString* messageID; 				//@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSURL* downloadURL; 				//@synthesize downloadURL=_downloadURL - In the implementation block
@property (assign,nonatomic) BOOL isLoading; 				//@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id completion; 				//@synthesize completion=_completion - In the implementation block
-(void)setDownloadURL:(id)arg1;
-(void)queryAssetIsExistsAtURL:(id)arg1 resultBlock:(id)arg2 errorBlock:(id)arg3;
-(void)loadMovieAtURL:(id)arg1 withMessageID:(id)arg2 knownDownloadURL:(id)arg3 completion:(id)arg4;
-(void)loadMovieAtURL:(id)arg1 withOBSParameters:(id)arg2 completion:(id)arg3;
-(void)findAssetForURL:(id)arg1 resultBlock:(id)arg2 failureBlock:(id)arg3;
-(void)finishLoadingMovieWithURL:(id)arg1;
-(void)validateAndLoadMovieWithOBSParameters:(id)arg1;
-(void)loadMovieWithOBSParameters:(id)arg1;
-(void)informLoadingFailure:(id)arg1;
-(void)__dettached__update_expired:(id)arg1;
-(void)setCompletion:(id)arg1;
-(void)setIsLoading:(BOOL)arg1;
-(void)setMessageID:(id)arg1;
-(void).cxx_destruct;
@end