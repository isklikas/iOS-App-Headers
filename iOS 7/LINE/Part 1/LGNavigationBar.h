/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:02 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LGNavigationBar : UINavigationBar {
	NSString* _bundleName; 
	UIImageView* _backgroundImageView; 
	NSMutableDictionary* _backgroundImages; 
}
@property (nonatomic,retain) NSString* bundleName; 				//@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,retain) UIImageView* backgroundImageView; 				//@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* backgroundImages; 				//@synthesize backgroundImages=_backgroundImages - In the implementation block
-(id)defautThemeImage;
-(id)defaultThemelandscapeImage;
-(void)setBackgroundImages:(id)arg1;
-(void)setBackgroundImageView:(id)arg1;
-(void)drawRect:(CGRect)arg1;
-(void)layoutSubviews;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
-(void)updateBackgroundImage;
-(id)initWithBundleName:(id)arg1;
-(void)setBundleName:(id)arg1;
-(void).cxx_destruct;
@end