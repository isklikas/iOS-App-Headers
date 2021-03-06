/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:57 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3CopyObjectRequest : S3AbstractPutRequest {
	NSString* sourceKey; 
	NSString* sourceBucket; 
	NSString* metadataDirective; 
	NSString* ifMatch; 
	NSString* ifNoneMatch; 
	NSDate* ifModifiedSince; 
	NSDate* ifUnmodifiedSince; 
	NSString* redirectLocation; 
}
@property (nonatomic,retain) NSString* sourceKey; 
@property (nonatomic,retain) NSString* sourceBucket; 
@property (nonatomic,retain) NSString* metadataDirective; 
@property (nonatomic,retain) NSString* ifMatch; 
@property (nonatomic,retain) NSString* ifNoneMatch; 
@property (nonatomic,retain) NSDate* ifModifiedSince; 
@property (nonatomic,retain) NSDate* ifUnmodifiedSince; 
@property (nonatomic,retain) NSString* redirectLocation; 
-(id)configureURLRequest;
-(void)setSourceKey:(id)arg1;
-(void)setSourceBucket:(id)arg1;
-(id)initWithSourceKey:(id)arg1 sourceBucket:(id)arg2 destinationKey:(id)arg3 destinationBucket:(id)arg4;
-(void)setMetadataDirective:(id)arg1;
-(void)setIfModifiedSince:(id)arg1;
-(void)setIfUnmodifiedSince:(id)arg1;
-(void)setIfMatch:(id)arg1;
-(void)setIfNoneMatch:(id)arg1;
-(void)setRedirectLocation:(id)arg1;
-(void)dealloc;
-(id)init;
@end