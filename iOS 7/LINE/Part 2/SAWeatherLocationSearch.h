/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:20 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAWeatherLocationSearch : SADomainCommand {
}
@property (nonatomic,copy) NSURL* identifier; 
@property (nonatomic,copy) NSString* locationId; 
+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setIdentifier:(id)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLocationId:(id)arg1;
@end