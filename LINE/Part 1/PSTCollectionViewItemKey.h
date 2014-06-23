/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:47 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCopying.h>

@interface PSTCollectionViewItemKey : NSObject <NSCopying> {
	unsigned _type; 
	NSIndexPath* _indexPath; 
	NSString* _identifier; 
}
@property (assign,nonatomic) unsigned type; 				//@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSIndexPath* indexPath; 				//@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSString* identifier; 				//@synthesize identifier=_identifier - In the implementation block
+(id)collectionItemKeyForCellWithIndexPath:(id)arg1;
+(id)collectionItemKeyForLayoutAttributes:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(id)description;
-(void)setType:(unsigned)arg1;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setIdentifier:(id)arg1;
-(void)setIndexPath:(id)arg1;
-(void).cxx_destruct;
@end