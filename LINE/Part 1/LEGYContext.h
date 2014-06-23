/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LEGYContext : NSObject {
	NSObject<OS_dispatch_queue>* _queue; 
	NSThread* _thread; 
	id _showNetworkActivityIndicatorBlock; 
	id _hideNetworkActivityIndicatorBlock; 
	unsigned _transactionCount; 
	NSMutableArray* _transactionEndObservers; 
	LEGYReachability* _reachability; 
	LEGYConfig* _config; 
	LEGYUserBehaviorLogger* _userBehaviorLog; 
}
@property (getter=isInContext,nonatomic,copy) BOOL inContext; 
@property (nonatomic,copy) LEGYConfig* config; 
@property (nonatomic,copy) LEGYUserBehaviorLogger* userBehaviorLog; 
@property (nonatomic,copy) id showNetworkActivityIndicatorBlock; 				//@synthesize showNetworkActivityIndicatorBlock=_showNetworkActivityIndicatorBlock - In the implementation block
@property (nonatomic,copy) id hideNetworkActivityIndicatorBlock; 				//@synthesize hideNetworkActivityIndicatorBlock=_hideNetworkActivityIndicatorBlock - In the implementation block
@property (nonatomic,copy) LEGYReachability* reachability; 				//@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,copy) unsigned availableNetworkInterfaces; 
-(id)initWithConfigPath:(id)arg1;
-(void)setShowNetworkActivityIndicatorBlock:(id)arg1;
-(void)setHideNetworkActivityIndicatorBlock:(id)arg1;
-(void)startTransaction;
-(void)scheduleReadStream:(struct __CFReadStream*)arg1 writeStream:(struct __CFWriteStream*)arg2;
-(void)unscheduleReadStream:(struct __CFReadStream*)arg1 writeStream:(struct __CFWriteStream*)arg2;
-(void)addOneTimeEndTransactionObserver:(id)arg1;
-(id)initWithThread:(id)arg1 configPath:(id)arg2;
-(void)cancelTimer:(id)arg1;
-(id)scheduledTimerWithTimeInterval:(double)arg1 block:(id)arg2;
-(void)rescheduleTimer:(id)arg1 toFireInTimeIntervalSinceNow:(double)arg2;
-(void)performAfterDelay:(double)arg1 block:(id)arg2;
-(void)_timerFired:(id)arg1;
-(void)endTransaction;
-(void)dealloc;
-(id)init;
-(void)performBlockAndWait:(id)arg1;
-(void)performBlock:(id)arg1;
-(BOOL)isInTransaction;
-(void).cxx_destruct;
@end