/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:03 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol FBGraphObjectSelectionChangedDelegate
@required
-(void)graphObjectTableSelectionDidChange(id):arg1 ;
-(void)graphObjectTableSelectionDidChange(id):arg1 ;
@end

@protocol FBGraphObjectViewControllerDelegate
@optional
-(id)graphObjectTableDataSource(id):arg1 titleSuffixOfItem(id):arg2 ;
-(id)graphObjectTableDataSource(id):arg1 subtitleOfItem(id):arg2 ;
-(id)graphObjectTableDataSource(id):arg1 pictureUrlOfItem(id):arg2 ;
-(BOOL)graphObjectTableDataSource(id):arg1 filterIncludesItem(id):arg2 ;
-(void)graphObjectTableDataSource(id):arg1 customizeTableCell(id):arg2 ;
@required
-(id)graphObjectTableDataSource(id):arg1 titleOfItem(id):arg2 ;
-(id)graphObjectTableDataSource(id):arg1 titleOfItem(id):arg2 ;
@end

@protocol FBGraphObjectPagingLoaderDelegate
@optional
-(void)pagingLoader(id):arg1 willLoadURL(id):arg2 ;
-(void)pagingLoader(id):arg1 didLoadData(id):arg2 ;
-(void)pagingLoaderDidFinishLoading(id):arg1 ;
-(void)pagingLoader(id):arg1 handleError(id):arg2 ;
-(void)pagingLoaderWasCancelled(id):arg1 ;
@end
