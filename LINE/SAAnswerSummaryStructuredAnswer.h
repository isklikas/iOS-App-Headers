/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:33 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAnswerStructuredAnswer.h>

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer> {
}
@property (nonatomic,copy) NSArray* answerPropertyGroups; 
@property (nonatomic,@dynamic,copy) NSString* category; 
@property (nonatomic,copy) NSURL* image; 
@property (nonatomic,copy) NSString* imageCaption; 
@property (nonatomic,copy) NSString* text; 
@property (nonatomic,copy) NSString* title; 
@property (nonatomic,copy) NSString* titleAnnotation; 
+(id)summaryStructuredAnswer;
+(id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setImage:(id)arg1;
-(void)setTitle:(id)arg1;
-(void)setText:(id)arg1;
-(void)setCategory:(id)arg1;
-(id)encodedClassName;
-(void)setAnswerPropertyGroups:(id)arg1;
-(void)setImageCaption:(id)arg1;
-(void)setTitleAnnotation:(id)arg1;
@end