/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:29 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SATimerObject : SADomainObject {
}
@property (nonatomic,copy) NSString* state; 
@property (nonatomic,copy) NSNumber* timerValue; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setState:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setTimerValue:(id)arg1;
@end