/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:55 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSArray* linkedAnswers; 
@property (nonatomic,copy) NSString* title; 
+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1;
-(id)encodedClassName;
-(void)setLinkedAnswers:(id)arg1;
@end