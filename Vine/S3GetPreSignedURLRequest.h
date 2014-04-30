/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:03 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3GetPreSignedURLRequest : S3Request {
	NSDate* expires; 
	NSString* protocol; 
	NSString* httpVerb; 
	NSString* accessKey; 
	NSString* versionId; 
	S3ResponseHeaderOverrides* responseHeaderOverrides; 
}
@property (nonatomic,retain) NSDate* expires; 
@property (nonatomic,retain) NSString* protocol; 
@property (nonatomic,retain) NSString* httpVerb; 
@property (nonatomic,retain) NSString* accessKey; 
@property (nonatomic,retain) NSString* versionId; 
@property (nonatomic,retain) S3ResponseHeaderOverrides* responseHeaderOverrides; 
@property (nonatomic,copy) NSString* queryString; 
-(id)configureURLRequest;
-(void)setVersionId:(id)arg1;
-(void)setResponseHeaderOverrides:(id)arg1;
-(void)setHttpVerb:(id)arg1;
-(void)setExpires:(id)arg1;
-(id)validate;
-(void)setProtocol:(id)arg1;
-(void)dealloc;
-(void)setAccessKey:(id)arg1;
@end