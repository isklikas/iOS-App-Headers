/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:05 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol VNSearchBarDelegate
@optional
-(BOOL)searchBar(id):arg1 shouldReloadTableForSearchScope(int):arg2 ;
-(void)searchBar(id):arg1 textDidChange(id):arg2 ;
-(void)searchBar(id):arg1 selectedScopeButtonIndexDidChange(int):arg2 ;
-(void)searchBarCancelButtonClicked(id):arg1 ;
-(void)searchBarTextDidBeginEditing(id):arg1 ;
-(void)searchBarTextDidEndEditing(id):arg1 ;
@end

@protocol UIWebViewDelegate
@optional
-(void)webView(id):arg1 didFailLoadWithError(id):arg2 ;
-(BOOL)webView(id):arg1 shouldStartLoadWithRequest(id):arg2 navigationType(int):arg3 ;
-(void)webViewDidStartLoad(id):arg1 ;
-(void)webViewDidFinishLoad(id):arg1 ;
@end