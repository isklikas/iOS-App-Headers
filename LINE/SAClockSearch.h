/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:30 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAClockSearch : SADomainCommand {
}
@property (nonatomic,copy) NSNumber* alCityId; 
@property (nonatomic,copy) NSString* countryCode; 
@property (nonatomic,copy) NSURL* identifier; 
@property (nonatomic,copy) NSString* unlocalizedCityName; 
@property (nonatomic,copy) NSString* unlocalizedCountryName; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2;
+(id)search;
-(id)groupIdentifier;
-(void)setIdentifier:(id)arg1;
-(void)setCountryCode:(id)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAlCityId:(id)arg1;
-(void)setUnlocalizedCityName:(id)arg1;
-(void)setUnlocalizedCountryName:(id)arg1;
@end