/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:12 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPTSingleRequestViewModelDelegate
@optional
-(void)viewModel(id):arg1 setLoading(BOOL):arg2 ;
-(void)viewModel(id):arg1 offlineModeChanged(BOOL):arg2 ;
@required
-(void)viewModel(id):arg1 didLoadData(id):arg2 loadTime(double):arg3 ;
-(void)viewModel(id):arg1 didFailLoad(id):arg2 ;
-(void)viewModel(id):arg1 didLoadData(id):arg2 loadTime(double):arg3 ;
-(void)viewModel(id):arg1 didFailLoad(id):arg2 ;
@end

@protocol SPContentInsetViewController
@property (assign,nonatomic) BOOL automaticallyAdjustsScrollViewInsets; 
@required
-(void)sp_updateContentInsets;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(void)setAutomaticallyAdjustsScrollViewInsets(BOOL):arg1 ;
-(void)sp_updateContentInsets;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(void)setAutomaticallyAdjustsScrollViewInsets(BOOL):arg1 ;
@end

@protocol UISearchDisplayDelegate
@optional
-(void)searchDisplayController(id):arg1 willUnloadSearchResultsTableView(id):arg2 ;
-(void)searchDisplayController(id):arg1 willShowSearchResultsTableView(id):arg2 ;
-(void)searchDisplayController(id):arg1 didShowSearchResultsTableView(id):arg2 ;
-(void)searchDisplayController(id):arg1 willHideSearchResultsTableView(id):arg2 ;
-(void)searchDisplayController(id):arg1 didHideSearchResultsTableView(id):arg2 ;
-(void)searchDisplayControllerDidBeginSearch(id):arg1 ;
-(void)searchDisplayControllerDidEndSearch(id):arg1 ;
-(void)searchDisplayControllerWillBeginSearch(id):arg1 ;
-(void)searchDisplayControllerWillEndSearch(id):arg1 ;
-(BOOL)searchDisplayController(id):arg1 shouldReloadTableForSearchString(id):arg2 ;
-(BOOL)searchDisplayController(id):arg1 shouldReloadTableForSearchScope(int):arg2 ;
-(void)searchDisplayController(id):arg1 didLoadSearchResultsTableView(id):arg2 ;
@end
