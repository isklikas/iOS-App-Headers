/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <LCAPIParser.h>

@interface LCNotificationParser : NSObject <LCAPIParser> {
	NSMutableArray* mNotices; 
	BOOL mIsAll; 
	BOOL mIsDataOnly; 
}
-(void)excludeOldNotificationsWithType:(int)arg1 notifications:(id)arg2;
-(void)excludeOldNotificationsWithType:(int)arg1;
-(id)convertNoticeJsonToNoticeInfo:(id)arg1;
-(void)saveRecentParametersWithNotificationRequest:(id)arg1;
-(id)mergeIntoNewNotifications:(id)arg1 localNotices:(id)arg2;
-(void)excludeOldUpdateNotificationsWithSavedNotifications:(id)arg1;
-(void)excludeMaintenanceNotifications;
-(void)excludeOldBannerNotifications;
-(void)excludeNonImmediatelyNotification;
-(void)excludeStartupNotification;
-(void)sortWithNotifications:(id)arg1;
-(id)parseWithDictionary:(id)arg1;
-(id)initWithIsAll:(BOOL)arg1 isDataOnly:(BOOL)arg2;
-(void)dealloc;
@end