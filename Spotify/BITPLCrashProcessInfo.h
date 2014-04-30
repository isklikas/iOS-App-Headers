/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:54 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashProcessInfo : NSObject {
	int _processID; 
	NSString* _processName; 
	int _parentProcessID; 
	struct timeval _startTime; 
	BOOL _traced; 
}
@property (nonatomic,copy) int processID; 				//@synthesize processID=_processID - In the implementation block
@property (nonatomic,copy) NSString* processName; 				//@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) int parentProcessID; 				//@synthesize parentProcessID=_parentProcessID - In the implementation block
@property (nonatomic,copy) struct timeval startTime; 				//@synthesize startTime=_startTime - In the implementation block
@property (getter=isTraced,nonatomic,copy) BOOL traced; 				//@synthesize traced=_traced - In the implementation block
+(id)currentProcessInfo;
-(id)initWithProcessID:(int)arg1;
-(void)dealloc;
@end