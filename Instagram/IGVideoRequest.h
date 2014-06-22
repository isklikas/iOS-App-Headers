/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:16 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGVideoRequest : NSObject {
	IGRequest* _request; 
	NSMutableArray* _listeners; 
	NSError* _error; 
	NSURL* _url; 
	IGPartialData* _data; 
	id<IGVideoRequestDelegate> _delegate; 
}
@property (nonatomic,retain) NSURL* url; 				//@synthesize url=_url - In the implementation block
@property (nonatomic,retain) IGPartialData* data; 				//@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRequestDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)downloadAll;
-(void)addRangedDataListener:(id)arg1;
-(void)removeRangedDataListener:(id)arg1;
-(id)initWithURL:(id)arg1 partialData:(id)arg2;
-(void)dataBecomeAvailable;
-(void)endWithError:(id)arg1;
-(void)loadData;
-(id)videoResponseHeaderForRange:(struct _NSRange)arg1;
-(struct _NSRange)readRangeForListener:(id)arg1;
-(id)videoResponseHeaderForRange:(struct _NSRange)arg1 totalLength:(long long)arg2;
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5;
-(void)setDelegate:(id)arg1;
-(void)setData:(id)arg1;
-(void)cancel;
-(id)request;
-(void)setUrl:(id)arg1;
-(void).cxx_destruct;
@end