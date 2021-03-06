/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:04 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIWebViewDelegate
@optional
-(void)webView(id):arg1 didFailLoadWithError(id):arg2 ;
-(BOOL)webView(id):arg1 shouldStartLoadWithRequest(id):arg2 navigationType(int):arg3 ;
-(void)webViewDidStartLoad(id):arg1 ;
-(void)webViewDidFinishLoad(id):arg1 ;
@end

@protocol IGSegmentedControlDelegate
@required
-(void)segmentedControlSelectedIndex(int):arg1 ;
-(void)segmentedControlSelectedIndex(int):arg1 ;
@end

@protocol IGPullToRefreshProtocol
@required
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-({);
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-({);
@end
