/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:51 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>
#import <SPTArtistBiograhyView.h>
#import <SPTThemableView.h>

@interface SPTArtistBiograhyViewOS6 : UIView <UIWebViewDelegate, SPTArtistBiograhyView, SPTThemableView> {
	id<SPTArtistBiograhyViewDelegate> _delegate; 
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	NSString* _biographyHTMLString; 
	UIWebView* _webView; 
}
@property (nonatomic,retain) UIWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<SPTArtistBiograhyViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString* biographyHTMLString; 				//@synthesize biographyHTMLString=_biographyHTMLString - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setBiographyHTMLString:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setWebView:(id)arg1;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void).cxx_destruct;
@end