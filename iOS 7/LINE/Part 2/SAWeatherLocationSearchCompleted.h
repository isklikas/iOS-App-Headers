/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:19 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSArray* weatherLocations; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)locationSearchCompleted;
+(id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+(id)locationSearchCompletedWithWeatherLocations:(id)arg1;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)initWithWeatherLocations:(id)arg1;
-(void)setWeatherLocations:(id)arg1;
@end