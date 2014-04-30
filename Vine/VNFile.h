/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:46 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <AmazonServiceRequestDelegate.h>

@interface VNFile : NSObject <AmazonServiceRequestDelegate> {
	id _progressBlock; 
	id _successBlock; 
	id _errorBlock; 
	AmazonS3Client* _s3Client; 
	S3PutObjectRequest* _request; 
	AFHTTPRequestOperation* _afOperation; 
	BOOL _useS3; 
	BOOL _isUploading; 
	NSString* _filePath; 
	NSString* _fileType; 
	NSString* _bucketName; 
	NSString* _keyName; 
	NSDate* _requestTimestamp; 
	NSDate* _responseTimestamp; 
}
@property (nonatomic,copy) NSString* filePath; 				//@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSString* fileType; 				//@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,copy) NSString* bucketName; 				//@synthesize bucketName=_bucketName - In the implementation block
@property (nonatomic,copy) NSString* keyName; 				//@synthesize keyName=_keyName - In the implementation block
@property (nonatomic,retain) NSDate* requestTimestamp; 				//@synthesize requestTimestamp=_requestTimestamp - In the implementation block
@property (nonatomic,retain) NSDate* responseTimestamp; 				//@synthesize responseTimestamp=_responseTimestamp - In the implementation block
@property (assign,nonatomic) BOOL isUploading; 				//@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,copy) id progressBlock; 				//@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id successBlock; 				//@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id errorBlock; 				//@synthesize errorBlock=_errorBlock - In the implementation block
-(id)initWithFileAtPath:(id)arg1 bucket:(id)arg2 name:(id)arg3;
-(void)uploadFileWithPrivacy:(BOOL)arg1 progress:(id)arg2 success:(id)arg3 error:(id)arg4;
-(void)setRequestTimestamp:(id)arg1;
-(void)setResponseTimestamp:(id)arg1;
-(void)setBucketName:(id)arg1;
-(void)setKeyName:(id)arg1;
-(void)setIsUploading:(BOOL)arg1;
-(void)request:(id)arg1 didCompleteWithResponse:(id)arg2;
-(void)request:(id)arg1 didSendData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(void)request:(id)arg1 didFailWithServiceException:(id)arg2;
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)cancel;
-(id)metrics;
-(void)setFileType:(id)arg1;
-(void)setFilePath:(id)arg1;
-(void).cxx_destruct;
@end