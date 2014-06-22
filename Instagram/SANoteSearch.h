/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:19 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SANoteSearch : SADomainCommand {
}
@property (nonatomic,copy) NSString* contentQuery; 
@property (nonatomic,copy) NSDate* fromDate; 
@property (nonatomic,copy) NSDate* toDate; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2;
+(id)search;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setContentQuery:(id)arg1;
-(void)setFromDate:(id)arg1;
-(void)setToDate:(id)arg1;
@end