/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:02 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineMessage : NSObject {
	NSString* __from; 
	NSString* __to; 
	int __toType; 
	NSString* __ID; 
	long long __createdTime; 
	long long __deliveredTime; 
	NSString* __text; 
	LineLocation* __location; 
	BOOL __hasContent; 
	int __contentType; 
	NSDictionary* __contentMetadata; 
	NSData* __contentPreview; 
	NSString* __sessionId; 
	NSArray* __chunks; 
	struct {
		unsigned int toType:1;
		unsigned int createdTime:1;
		unsigned int deliveredTime:1;
		unsigned int hasContent:1;
		unsigned int contentType:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* from; 				//@synthesize _from=__from - In the implementation block
@property (nonatomic,retain) NSString* to; 				//@synthesize _to=__to - In the implementation block
@property (assign,nonatomic) int toType; 				//@synthesize _toType=__toType - In the implementation block
@property (nonatomic,retain) NSString* ID; 				//@synthesize _ID=__ID - In the implementation block
@property (assign,nonatomic) long long createdTime; 				//@synthesize _createdTime=__createdTime - In the implementation block
@property (assign,nonatomic) long long deliveredTime; 				//@synthesize _deliveredTime=__deliveredTime - In the implementation block
@property (nonatomic,retain) NSString* text; 				//@synthesize _text=__text - In the implementation block
@property (nonatomic,retain) LineLocation* location; 				//@synthesize _location=__location - In the implementation block
@property (assign,nonatomic) BOOL hasContent; 				//@synthesize _hasContent=__hasContent - In the implementation block
@property (assign,nonatomic) int contentType; 				//@synthesize _contentType=__contentType - In the implementation block
@property (nonatomic,retain) NSDictionary* contentMetadata; 				//@synthesize _contentMetadata=__contentMetadata - In the implementation block
@property (nonatomic,retain) NSData* contentPreview; 				//@synthesize _contentPreview=__contentPreview - In the implementation block
@property (nonatomic,retain) NSString* sessionId; 				//@synthesize _sessionId=__sessionId - In the implementation block
@property (nonatomic,retain) NSArray* chunks; 				//@synthesize _chunks=__chunks - In the implementation block
-(void)setToType:(int)arg1;
-(void)read:(id)arg1;
-(void)setCreatedTime:(long long)arg1;
-(void)setContentMetadata:(id)arg1;
-(void)setContentPreview:(id)arg1;
-(void)setDeliveredTime:(long long)arg1;
-(void)setHasContent:(BOOL)arg1;
-(void)setChunks:(id)arg1;
-(void)setText:(id)arg1;
-(void)setID:(id)arg1;
-(void)setContentType:(int)arg1;
-(void)setFrom:(id)arg1;
-(void)setTo:(id)arg1;
-(void)setSessionId:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
-(void)setLocation:(id)arg1;
@end