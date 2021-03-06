/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:15 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMPMediaEntityList : SAAbstractItemList {
}
@property (assign,nonatomic) int mediaType; 
@property (nonatomic,retain) SAMPCollection* parentCollection; 
+(id)mediaEntityList;
+(id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setMediaType:(int)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setParentCollection:(id)arg1;
@end