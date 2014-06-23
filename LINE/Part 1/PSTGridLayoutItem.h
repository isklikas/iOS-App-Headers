/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PSTGridLayoutItem : NSObject {
	PSTGridLayoutSection* _section; 
	PSTGridLayoutRow* _rowObject; 
	CGRect _itemFrame; 
}
@property (assign,nonatomic) PSTGridLayoutSection* section; 				//@synthesize section=_section - In the implementation block
@property (assign,nonatomic) PSTGridLayoutRow* rowObject; 				//@synthesize rowObject=_rowObject - In the implementation block
@property (assign,nonatomic) CGRect itemFrame; 				//@synthesize itemFrame=_itemFrame - In the implementation block
-(id)description;
-(void)setItemFrame:(CGRect)arg1;
-(void)setSection:(id)arg1;
-(void)setRowObject:(id)arg1;
@end