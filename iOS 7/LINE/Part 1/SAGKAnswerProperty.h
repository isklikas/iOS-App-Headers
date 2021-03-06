/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:37 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAGKAnswerProperty : AceObject <SAAceSerializable> {
}
@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,retain) SAUIDecoratedText* decoratedValue; 
@property (nonatomic,retain) SAUIDecoratedText* decoratedValueAnnotation; 
@property (nonatomic,copy) NSString* name; 
@property (nonatomic,retain) SAUIAppPunchOut* punchOut; 
@property (nonatomic,copy) NSNumber* selected; 
@property (nonatomic,copy) NSString* value; 
@property (nonatomic,copy) NSString* valueAnnotation; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setValue:(id)arg1;
-(void)setName:(id)arg1;
-(void)setSelected:(id)arg1;
-(void)setCommand:(id)arg1;
-(id)encodedClassName;
-(void)setPunchOut:(id)arg1;
-(void)setValueAnnotation:(id)arg1;
-(void)setDecoratedValue:(id)arg1;
-(void)setDecoratedValueAnnotation:(id)arg1;
@end