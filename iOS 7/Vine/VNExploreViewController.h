/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:05 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <VNSearchBarDelegate.h>
#import <UIWebViewDelegate.h>

@interface VNExploreViewController : VNTableViewController <VNSearchBarDelegate, UIWebViewDelegate> {
	VNSearchBar* _searchBar; 
	UIActivityIndicatorView* _activityIndicator; 
	BOOL _contentLoaded; 
	BOOL _animatingNavBar; 
	NSTimer* _loadTimer; 
	BOOL _canLoadNextPage; 
	VNSearchService* _searchService; 
	VNPagedData* _searchResults; 
	UIWebView* _webView; 
	int _searchBarCurrentScope; 
}
@property (nonatomic,retain) VNSearchService* searchService; 				//@synthesize searchService=_searchService - In the implementation block
@property (nonatomic,retain) VNPagedData* searchResults; 				//@synthesize searchResults=_searchResults - In the implementation block
@property (assign,nonatomic) BOOL canLoadNextPage; 				//@synthesize canLoadNextPage=_canLoadNextPage - In the implementation block
@property (assign,nonatomic,__weak) UIWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) int searchBarCurrentScope; 				//@synthesize searchBarCurrentScope=_searchBarCurrentScope - In the implementation block
-(void)setCanLoadNextPage:(BOOL)arg1;
-(void)loadRightNavBarButton;
-(BOOL)searchBar:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
-(void)setSearchBarCurrentScope:(int)arg1;
-(void)checkFinishLoad;
-(void)finishLoadCommon;
-(void)reloadSearchBar;
-(void)search:(id)arg1 page:(unsigned)arg2 size:(unsigned)arg3 addToExistingResults:(BOOL)arg4;
-(void)setSearchService:(id)arg1;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(BOOL)isEmpty;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)setWebView:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidFinishLoad:(id)arg1;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2;
-(void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
-(void)searchBarCancelButtonClicked:(id)arg1;
-(void)searchBarTextDidBeginEditing:(id)arg1;
-(void)setSearchResults:(id)arg1;
-(BOOL)shouldHideStatusBar;
-(void)refresh;
-(void).cxx_destruct;
@end