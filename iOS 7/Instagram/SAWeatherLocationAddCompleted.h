/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:33 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSString* error; 
@property (nonatomic,copy) NSURL* weatherLocationId; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+(id)locationAddCompletedWithError:(id)arg1;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg1;
-(id)groupIdentifier;
-(void)setError:(id)arg1;
-(id)encodedClassName;
-(id)initWithWeatherLocationId:(id)arg1;
-(void)setWeatherLocationId:(id)arg1;
-(id)initWithError:(id)arg1;
@end