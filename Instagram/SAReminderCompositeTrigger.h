/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:43 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAReminderCompositeTrigger : SAReminderTrigger {
}
@property (nonatomic,retain) SAReminderDateTimeTrigger* dateTimeTrigger; 
@property (nonatomic,retain) SAReminderLocationTrigger* locationTrigger; 
+(id)compositeTrigger;
+(id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDateTimeTrigger:(id)arg1;
-(void)setLocationTrigger:(id)arg1;
@end