/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTask : NSObject {
	NSMutableArray* _callbacks; 
	NSMutableArray* _errbacks; 
	NSMutableArray* _finallys; 
	NSMutableArray* _childTasks; 
	BOOL _isCompleted; 
	BOOL _isCancelled; 
	id _completedValue; 
	NSError* _completedError; 
	SPTaskCompletionSource* _source; 
}
@property (getter=isCancelled,@dynamic,copy) BOOL cancelled; 
@property (getter=isCancelled) BOOL cancelled; 				//@synthesize isCancelled=_isCancelled - In the implementation block
+(id)delay:(double)arg1 completeValue:(id)arg2;
+(id)awaitAll:(id)arg1;
+(id)delay:(double)arg1;
+(id)completedTask:(id)arg1;
+(id)failedTask:(id)arg1;
+(id)performWork:(id)arg1 onQueue:(struct dispatch_queue_s*)arg2;
+(id)fetchWork:(id)arg1 onQueue:(struct dispatch_queue_s*)arg2;
-(void)completeWithValue:(id)arg1;
-(id)chain:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)addFinallyCallback:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)addCallback:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)addFinally:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)addErrback:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)addCallback:(id)arg1;
-(id)addErrorCallback:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)initFromSource:(id)arg1;
-(id)addErrorCallback:(id)arg1;
-(id)addFinallyCallback:(id)arg1;
-(id)then:(id)arg1 on:(struct dispatch_queue_s*)arg2;
-(id)chain;
-(void)setCancelled:(BOOL)arg1;
-(void)failWithError:(id)arg1;
-(void).cxx_destruct;
@end