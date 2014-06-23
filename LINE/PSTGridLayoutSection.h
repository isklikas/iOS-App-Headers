/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:16 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PSTGridLayoutSection : NSObject {
	NSMutableArray* _items; 
	NSMutableArray* _rows; 
	BOOL _isValid; 
	BOOL _fixedItemSize; 
	BOOL _lastRowIncomplete; 
	int _itemsCount; 
	float _verticalInterstice; 
	float _horizontalInterstice; 
	float _headerDimension; 
	float _footerDimension; 
	PSTGridLayoutInfo* _layoutInfo; 
	NSDictionary* _rowAlignmentOptions; 
	float _otherMargin; 
	float _beginMargin; 
	float _endMargin; 
	float _actualGap; 
	float _lastRowBeginMargin; 
	float _lastRowEndMargin; 
	float _lastRowActualGap; 
	int _itemsByRowCount; 
	int _indexOfImcompleteRow; 
	CGSize _itemSize; 
	struct UIEdgeInsets _sectionMargins; 
	CGRect _frame; 
	CGRect _headerFrame; 
	CGRect _footerFrame; 
}
@property (nonatomic,retain) NSArray* items; 				//@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray* rows; 				//@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize; 				//@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize; 				//@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) int itemsCount; 				//@synthesize itemsCount=_itemsCount - In the implementation block
@property (assign,nonatomic) float verticalInterstice; 				//@synthesize verticalInterstice=_verticalInterstice - In the implementation block
@property (assign,nonatomic) float horizontalInterstice; 				//@synthesize horizontalInterstice=_horizontalInterstice - In the implementation block
@property (assign,nonatomic) struct UIEdgeInsets sectionMargins; 				//@synthesize sectionMargins=_sectionMargins - In the implementation block
@property (assign,nonatomic) CGRect frame; 				//@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect headerFrame; 				//@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect footerFrame; 				//@synthesize footerFrame=_footerFrame - In the implementation block
@property (assign,nonatomic) float headerDimension; 				//@synthesize headerDimension=_headerDimension - In the implementation block
@property (assign,nonatomic) float footerDimension; 				//@synthesize footerDimension=_footerDimension - In the implementation block
@property (assign,nonatomic) PSTGridLayoutInfo* layoutInfo; 				//@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,retain) NSDictionary* rowAlignmentOptions; 				//@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) float otherMargin; 				//@synthesize otherMargin=_otherMargin - In the implementation block
@property (assign,nonatomic) float beginMargin; 				//@synthesize beginMargin=_beginMargin - In the implementation block
@property (assign,nonatomic) float endMargin; 				//@synthesize endMargin=_endMargin - In the implementation block
@property (assign,nonatomic) float actualGap; 				//@synthesize actualGap=_actualGap - In the implementation block
@property (assign,nonatomic) float lastRowBeginMargin; 				//@synthesize lastRowBeginMargin=_lastRowBeginMargin - In the implementation block
@property (assign,nonatomic) float lastRowEndMargin; 				//@synthesize lastRowEndMargin=_lastRowEndMargin - In the implementation block
@property (assign,nonatomic) float lastRowActualGap; 				//@synthesize lastRowActualGap=_lastRowActualGap - In the implementation block
@property (assign,nonatomic) BOOL lastRowIncomplete; 				//@synthesize lastRowIncomplete=_lastRowIncomplete - In the implementation block
@property (assign,nonatomic) int itemsByRowCount; 				//@synthesize itemsByRowCount=_itemsByRowCount - In the implementation block
@property (assign,nonatomic) int indexOfImcompleteRow; 				//@synthesize indexOfImcompleteRow=_indexOfImcompleteRow - In the implementation block
-(void)setItemsByRowCount:(int)arg1;
-(void)setIndexOfImcompleteRow:(int)arg1;
-(void)setOtherMargin:(float)arg1;
-(void)setBeginMargin:(float)arg1;
-(void)setEndMargin:(float)arg1;
-(void)setActualGap:(float)arg1;
-(void)setLastRowBeginMargin:(float)arg1;
-(void)setLastRowEndMargin:(float)arg1;
-(void)setLastRowActualGap:(float)arg1;
-(void)setLastRowIncomplete:(BOOL)arg1;
-(id)init;
-(void)setFrame:(CGRect)arg1;
-(id)description;
-(void)invalidate;
-(id)snapshot;
-(void)setItems:(id)arg1;
-(void)setRows:(id)arg1;
-(void)setItemSize:(CGSize)arg1;
-(void)setItemsCount:(int)arg1;
-(id)addItem;
-(void)setFixedItemSize:(BOOL)arg1;
-(void)setSectionMargins:(struct UIEdgeInsets)arg1;
-(void)setHorizontalInterstice:(float)arg1;
-(void)setVerticalInterstice:(float)arg1;
-(void)setRowAlignmentOptions:(id)arg1;
-(void)setHeaderDimension:(float)arg1;
-(void)setFooterDimension:(float)arg1;
-(void)computeLayout;
-(id)addRow;
-(void)setLayoutInfo:(id)arg1;
-(void)recomputeFromIndex:(int)arg1;
-(void)setHeaderFrame:(CGRect)arg1;
-(void)setFooterFrame:(CGRect)arg1;
-(void).cxx_destruct;
@end