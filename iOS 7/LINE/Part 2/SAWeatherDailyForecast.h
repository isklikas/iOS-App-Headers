/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAWeatherDailyForecast : SAWeatherForecast {
}
@property (nonatomic,copy) NSNumber* highTemperature; 
@property (nonatomic,copy) NSNumber* lowTemperature; 
+(id)dailyForecast;
+(id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setHighTemperature:(id)arg1;
-(void)setLowTemperature:(id)arg1;
@end