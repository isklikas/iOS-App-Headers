/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:21 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSString* trend; 
@property (nonatomic,copy) NSString* value; 
+(id)barometricPressure;
+(id)barometricPressureWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setValue:(id)arg1;
-(id)encodedClassName;
-(void)setTrend:(id)arg1;
@end