/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:11 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineUpdateBuddyProfileResult : NSObject {
	NSString* __requestId; 
	int __state; 
	int __eventNo; 
	long long __receiverCount; 
	long long __successCount; 
	long long __failCount; 
	long long __cancelCount; 
	long long __unregisterCount; 
	long long __timestamp; 
	NSString* __message; 
	struct {
		unsigned int state:1;
		unsigned int eventNo:1;
		unsigned int receiverCount:1;
		unsigned int successCount:1;
		unsigned int failCount:1;
		unsigned int cancelCount:1;
		unsigned int unregisterCount:1;
		unsigned int timestamp:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* requestId; 				//@synthesize _requestId=__requestId - In the implementation block
@property (assign,nonatomic) int state; 				//@synthesize _state=__state - In the implementation block
@property (assign,nonatomic) int eventNo; 				//@synthesize _eventNo=__eventNo - In the implementation block
@property (assign,nonatomic) long long receiverCount; 				//@synthesize _receiverCount=__receiverCount - In the implementation block
@property (assign,nonatomic) long long successCount; 				//@synthesize _successCount=__successCount - In the implementation block
@property (assign,nonatomic) long long failCount; 				//@synthesize _failCount=__failCount - In the implementation block
@property (assign,nonatomic) long long cancelCount; 				//@synthesize _cancelCount=__cancelCount - In the implementation block
@property (assign,nonatomic) long long unregisterCount; 				//@synthesize _unregisterCount=__unregisterCount - In the implementation block
@property (assign,nonatomic) long long timestamp; 				//@synthesize _timestamp=__timestamp - In the implementation block
@property (nonatomic,retain) NSString* message; 				//@synthesize _message=__message - In the implementation block
-(void)read:(id)arg1;
-(void)setEventNo:(int)arg1;
-(void)setReceiverCount:(long long)arg1;
-(void)setSuccessCount:(long long)arg1;
-(void)setFailCount:(long long)arg1;
-(void)setCancelCount:(long long)arg1;
-(void)setUnregisterCount:(long long)arg1;
-(void)setTimestamp:(long long)arg1;
-(void)setState:(int)arg1;
-(void)setMessage:(id)arg1;
-(void)setRequestId:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end