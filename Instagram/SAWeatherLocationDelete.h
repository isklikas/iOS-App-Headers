/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:34 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAWeatherLocationDelete : SADomainCommand {
}
@property (nonatomic,retain) SAWeatherLocation* weatherLocation; 
+(id)locationDelete;
+(id)locationDeleteWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setWeatherLocation:(id)arg1;
@end