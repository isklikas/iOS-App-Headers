/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:28 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FetchOperationService : NSObject {
}
+(void)receivedRemoteNotificationWithOpRevision:(long long)arg1 fetchLevel:(unsigned)arg2 fetchCompletionHandler:(id)arg3;
+(void)receivedRemoteNotificationWithOpRevision:(long long)arg1;
+(void)setLastOpRevision:(long long)arg1;
+(void)_processOperations:(id)arg1 inContext:(id)arg2;
+(void)lastOpRevisionWithCompletionBlock:(id)arg1;
+(void)start;
+(void)shutDown;
+(id)instance;
@end