/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:07 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPInsetTableView : SPTableView {
	struct UIEdgeInsets _insets; 
	BOOL _tableHeaderStaticallyPositioned; 
	BOOL _tableFooterStaticallyPositioned; 
	BOOL _tableHeaderFixellyPositioned; 
}
@property (assign,nonatomic) float tableHeaderInsetHeight; 
@property (assign,nonatomic) float tableFooterInsetHeight; 
@property (assign,getter=isTableHeaderStaticallyPositioned,nonatomic) BOOL tableHeaderStaticallyPositioned; 
@property (assign,getter=isTableFooterStaticallyPositioned,nonatomic) BOOL tableFooterStaticallyPositioned; 
@property (assign,getter=isTableHeaderFixellyPositioned,nonatomic) BOOL tableHeaderFixellyPositioned; 
-(void)setTableHeaderInsetHeight:(float)arg1;
-(void)setTableFooterInsetHeight:(float)arg1;
-(void)setTableHeaderStaticallyPositioned:(BOOL)arg1;
-(void)setTableFooterStaticallyPositioned:(BOOL)arg1;
-(void)setTableHeaderFixellyPositioned:(BOOL)arg1;
-(void)layoutSubviews;
@end