/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:41 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAEncyclopediaEntitySuggestedEntity : AceObject <SAAceSerializable> {
}
@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString* name; 
+(id)suggestedEntity;
+(id)suggestedEntityWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setName:(id)arg1;
-(void)setCommand:(id)arg1;
-(id)encodedClassName;
@end