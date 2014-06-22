/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:39 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSString* definition; 
@property (nonatomic,copy) NSArray* examples; 
@property (nonatomic,copy) NSArray* variations; 
+(id)definitionEntry;
+(id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDefinition:(id)arg1;
-(void)setExamples:(id)arg1;
-(void)setVariations:(id)arg1;
@end