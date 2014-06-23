/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:50 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NLObjectStorageQueueOperation.h>

@interface NLObjectStorageService : NSObject <NLObjectStorageQueueOperation> {
	NLObjectStorageOpQueue* _queue; 
}
@property (nonatomic,copy) NLObjectStorageOpQueue* queue; 				//@synthesize queue=_queue - In the implementation block
+(id)objectURLWithObjectID:(id)arg1 spaceID:(id)arg2 serviceCode:(id)arg3 quality:(id)arg4;
+(id)thumbURLWithObjectID:(id)arg1 spaceID:(id)arg2 serviceCode:(id)arg3 quality:(id)arg4 size:(id)arg5;
+(id)allocWithZone:(NSZone*)arg1;
+(id)sharedService;
-(id)operationWithObjectID:(id)arg1;
-(BOOL)cancelOperationWithUploadProgressDelegate:(id)arg1;
-(id)scheduledOperationWithParameters:(id)arg1;
-(id)obsAccessToken;
-(void)scheduledOperationForWarmup;
-(void)requestDidCancelOperation:(id)arg1;
-(void)requestDidFinishOperation:(id)arg1;
-(void)rescheduleOperation:(id)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(id)operations;
-(unsigned)operationCount;
-(void)enumerateOperationsUsingBlock:(id)arg1;
-(void).cxx_destruct;
-(void)cancelOperation:(id)arg1;
@end