/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:20 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SANoteCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSURL* identifier; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)createCompleted;
+(id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setIdentifier:(id)arg1;
-(id)encodedClassName;
@end