/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:05 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSURL* searchContext; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)visibilitySetCompleted;
+(id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setSearchContext:(id)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end