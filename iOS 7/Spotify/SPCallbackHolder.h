/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:34 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPCallbackHolder : NSObject {
	struct dispatch_queue_s* _callbackQueue; 
	id _callback; 
}
@property (assign,nonatomic) struct dispatch_queue_s* callbackQueue; 				//@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback; 				//@synthesize callback=_callback - In the implementation block
-(id)initWithCallback:(id)arg1 onQueue:(struct dispatch_queue_s*)arg2;
-(void)setCallback:(id)arg1;
-(void)dealloc;
-(void)setCallbackQueue:(struct dispatch_queue_s*)arg1;
-(void).cxx_destruct;
@end