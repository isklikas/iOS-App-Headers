/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:46 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAReminderSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSArray* results; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setResults:(id)arg1;
-(id)encodedClassName;
@end