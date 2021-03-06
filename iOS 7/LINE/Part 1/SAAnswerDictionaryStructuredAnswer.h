/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:44 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAnswerStructuredAnswer.h>

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer> {
}
@property (nonatomic,@dynamic,copy) NSString* category; 
@property (nonatomic,copy) NSArray* definitionGroups; 
@property (nonatomic,copy) NSString* phoneticPronunciation; 
@property (nonatomic,copy) NSURL* sound; 
@property (nonatomic,copy) NSArray* syllables; 
@property (nonatomic,copy) NSString* word; 
+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setCategory:(id)arg1;
-(void)setSound:(id)arg1;
-(id)encodedClassName;
-(void)setDefinitionGroups:(id)arg1;
-(void)setPhoneticPronunciation:(id)arg1;
-(void)setSyllables:(id)arg1;
-(void)setWord:(id)arg1;
@end