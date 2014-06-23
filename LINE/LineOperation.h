/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:03 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineOperation : NSObject {
	long long __revision; 
	long long __createdTime; 
	int __type; 
	int __reqSeq; 
	NSString* __checksum; 
	int __status; 
	NSString* __param1; 
	NSString* __param2; 
	NSString* __param3; 
	LineMessage* __message; 
	struct {
		unsigned int revision:1;
		unsigned int createdTime:1;
		unsigned int type:1;
		unsigned int reqSeq:1;
		unsigned int status:1;
	} __isSet; 
}
@property (assign,nonatomic) long long revision; 				//@synthesize _revision=__revision - In the implementation block
@property (assign,nonatomic) long long createdTime; 				//@synthesize _createdTime=__createdTime - In the implementation block
@property (assign,nonatomic) int type; 				//@synthesize _type=__type - In the implementation block
@property (assign,nonatomic) int reqSeq; 				//@synthesize _reqSeq=__reqSeq - In the implementation block
@property (nonatomic,retain) NSString* checksum; 				//@synthesize _checksum=__checksum - In the implementation block
@property (assign,nonatomic) int status; 				//@synthesize _status=__status - In the implementation block
@property (nonatomic,retain) NSString* param1; 				//@synthesize _param1=__param1 - In the implementation block
@property (nonatomic,retain) NSString* param2; 				//@synthesize _param2=__param2 - In the implementation block
@property (nonatomic,retain) NSString* param3; 				//@synthesize _param3=__param3 - In the implementation block
@property (nonatomic,retain) LineMessage* message; 				//@synthesize _message=__message - In the implementation block
-(void)read:(id)arg1;
-(void)setCreatedTime:(long long)arg1;
-(void)setReqSeq:(int)arg1;
-(void)setRevision:(long long)arg1;
-(void)setParam1:(id)arg1;
-(void)setParam2:(id)arg1;
-(void)setParam3:(id)arg1;
-(void)setChecksum:(id)arg1;
-(void)setType:(int)arg1;
-(void)setMessage:(id)arg1;
-(void)setStatus:(int)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end