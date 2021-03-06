/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:37 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMicroblogObject : SADomainObject {
}
@property (nonatomic,copy) NSURL* attachment; 
@property (nonatomic,copy) NSString* content; 
@property (nonatomic,copy) NSDate* dateSent; 
@property (nonatomic,copy) NSDictionary* hashtagAlternatives; 
@property (nonatomic,retain) SALocation* location; 
@property (nonatomic,copy) NSNumber* outgoing; 
@property (nonatomic,copy) NSArray* recipients; 
@property (nonatomic,copy) NSURL* refereceId; 
@property (nonatomic,retain) SAPersonAttribute* sender; 
@property (nonatomic,copy) NSString* serviceType; 
@property (nonatomic,copy) NSDictionary* socialProfileReferences; 
@property (nonatomic,copy) NSNumber* useLocation; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2;
-(void)setSender:(id)arg1;
-(id)groupIdentifier;
-(void)setAttachment:(id)arg1;
-(void)setDateSent:(id)arg1;
-(void)setOutgoing:(id)arg1;
-(void)setServiceType:(id)arg1;
-(void)setRecipients:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setHashtagAlternatives:(id)arg1;
-(void)setRefereceId:(id)arg1;
-(void)setSocialProfileReferences:(id)arg1;
-(void)setUseLocation:(id)arg1;
-(void)setContent:(id)arg1;
-(void)setLocation:(id)arg1;
@end