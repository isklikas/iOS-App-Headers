/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:22 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3AbortMultipartUploadRequest : S3Request {
	NSString* uploadId; 
}
@property (nonatomic,retain) NSString* uploadId; 
-(id)configureURLRequest;
-(void)setUploadId:(id)arg1;
-(id)initWithMultipartUpload:(id)arg1;
-(void)dealloc;
@end