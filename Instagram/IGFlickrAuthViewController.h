/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:20 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGFlickrAuthDelegate.h>

@interface IGFlickrAuthViewController : IGViewController <IGFlickrAuthDelegate> {
	UIWebView* _webView; 
	IGFlickrAuthHelper* _authHelper; 
}
-(void)flickrDidNotAuthorize:(id)arg1;
-(void)flickrDidAuthorize:(id)arg1;
-(void)flickrWebViewLoadInProgress:(BOOL)arg1;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1;
-(void)loadView;
-(void).cxx_destruct;
@end