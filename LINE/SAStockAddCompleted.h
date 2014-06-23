/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:50 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,retain) SAStockObject* aceStock; 
@property (nonatomic,copy) NSURL* identifier; 
@property (nonatomic,copy) NSArray* results; 
@property (nonatomic,copy) NSArray* stockReferences; 
@property (nonatomic,copy) NSArray* stocks; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)addCompleted;
+(id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setIdentifier:(id)arg1;
-(void)setResults:(id)arg1;
-(id)encodedClassName;
-(void)setStockReferences:(id)arg1;
-(void)setStocks:(id)arg1;
-(void)setAceStock:(id)arg1;
@end