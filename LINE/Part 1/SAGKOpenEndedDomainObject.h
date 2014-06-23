/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:23 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAGKOpenEndedDomainObject : SAGKDomainObject {
}
@property (nonatomic,retain) SAGKDirectAnswer* directAnswer; 
@property (nonatomic,copy) NSArray* image; 
@property (nonatomic,copy) NSArray* linkedAnswerGroups; 
@property (nonatomic,copy) NSArray* structuredAnswers; 
+(id)openEndedDomainObject;
+(id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setImage:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setDirectAnswer:(id)arg1;
-(void)setLinkedAnswerGroups:(id)arg1;
-(void)setStructuredAnswers:(id)arg1;
@end