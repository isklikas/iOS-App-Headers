/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:27 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAClockObject : SADomainObject {
}
@property (nonatomic,copy) NSNumber* alCityId; 
@property (nonatomic,copy) NSString* cityName; 
@property (nonatomic,copy) NSString* countryCode; 
@property (nonatomic,copy) NSString* countryName; 
@property (nonatomic,copy) NSString* timezoneId; 
@property (nonatomic,copy) NSString* unlocalizedCityName; 
@property (nonatomic,copy) NSString* unlocalizedCountryName; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2;
-(void)setCountryName:(id)arg1;
-(void)setCityName:(id)arg1;
-(id)groupIdentifier;
-(void)setCountryCode:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setTimezoneId:(id)arg1;
-(void)setAlCityId:(id)arg1;
-(void)setUnlocalizedCityName:(id)arg1;
-(void)setUnlocalizedCountryName:(id)arg1;
@end