/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:55 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMPEnableShuffle : SADomainCommand {
}
@property (assign,nonatomic) BOOL enable; 
+(id)enableShuffle;
+(id)enableShuffleWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnable:(BOOL)arg1;
@end