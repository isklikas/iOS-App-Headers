/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:47 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBRecentActivitySentinel : NSObject {
	NSMutableArray* _recentEventsRingBuffer; 
	NSSet* _eventWhiteList; 
	NSSet* _eventBlackList; 
	int _bufferSize; 
	BOOL _persistToDisk; 
	NSString* _filename; 
}
-(id)recentActivitiesFilename;
-(id)initWithEventWhiteList:(id)arg1 bufferSize:(int)arg2 persistToDisk:(BOOL)arg3 filename:(id)arg4;
-(id)initWithEventBlackList:(id)arg1 bufferSize:(int)arg2 persistToDisk:(BOOL)arg3 filename:(id)arg4;
-(id)recentActivities;
-(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3;
-(void).cxx_destruct;
@end