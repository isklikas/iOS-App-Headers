/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:02 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMPCollection : SAMPMediaEntity {
}
@property (nonatomic,copy) NSArray* items; 
+(id)collection;
+(id)collectionWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setItems:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@end