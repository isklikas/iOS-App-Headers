/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineUnregisterBuddyResult : NSObject {
	NSString* __requestId; 
	int __state; 
	int __eventNo; 
	NSString* __message; 
	long long __timestamp; 
	long long __subscriberCountToRemove; 
	long long __subscriberCountRemoved; 
	struct {
		unsigned int state:1;
		unsigned int eventNo:1;
		unsigned int timestamp:1;
		unsigned int subscriberCountToRemove:1;
		unsigned int subscriberCountRemoved:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* requestId; 				//@synthesize _requestId=__requestId - In the implementation block
@property (assign,nonatomic) int state; 				//@synthesize _state=__state - In the implementation block
@property (assign,nonatomic) int eventNo; 				//@synthesize _eventNo=__eventNo - In the implementation block
@property (nonatomic,retain) NSString* message; 				//@synthesize _message=__message - In the implementation block
@property (assign,nonatomic) long long timestamp; 				//@synthesize _timestamp=__timestamp - In the implementation block
@property (assign,nonatomic) long long subscriberCountToRemove; 				//@synthesize _subscriberCountToRemove=__subscriberCountToRemove - In the implementation block
@property (assign,nonatomic) long long subscriberCountRemoved; 				//@synthesize _subscriberCountRemoved=__subscriberCountRemoved - In the implementation block
-(void)read:(id)arg1;
-(void)setEventNo:(int)arg1;
-(void)setSubscriberCountToRemove:(long long)arg1;
-(void)setSubscriberCountRemoved:(long long)arg1;
-(void)setTimestamp:(long long)arg1;
-(void)setState:(int)arg1;
-(void)setMessage:(id)arg1;
-(void)setRequestId:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end