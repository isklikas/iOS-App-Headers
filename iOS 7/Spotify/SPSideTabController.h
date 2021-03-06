/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:14 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPObjectRepresentation.h>
#import <SPSideTabBarDelegate.h>

@interface SPSideTabController : UIViewController <SPObjectRepresentation, SPSideTabBarDelegate> {
	BOOL _bottomAttachmentHidden; 
	SPSideTabBar* _tabBar; 
	NSArray* _viewControllers; 
	UIViewController* _selectedViewController; 
	UIViewController* _bottomAttachment; 
	UIView* _mainContainer; 
	UIView* _bottomContainer; 
	id<SPSideTabBarDelegate> _tabBarDelegate; 
	NSArray* _additionalItems; 
	UIViewController* _bottomBanner; 
}
@property (assign,nonatomic,__weak) id<SPSideTabBarDelegate> tabBarDelegate; 				//@synthesize tabBarDelegate=_tabBarDelegate - In the implementation block
@property (nonatomic,copy) NSArray* viewControllers; 				//@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) UIViewController* selectedViewController; 				//@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (assign,nonatomic) unsigned selectedIndex; 
@property (nonatomic,retain) UIViewController* bottomAttachment; 				//@synthesize bottomAttachment=_bottomAttachment - In the implementation block
@property (nonatomic,retain) SPSideTabBar* tabBar; 				//@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,retain) NSArray* additionalItems; 				//@synthesize additionalItems=_additionalItems - In the implementation block
@property (nonatomic,retain) UIViewController* bottomBanner; 				//@synthesize bottomBanner=_bottomBanner - In the implementation block
@property (nonatomic,retain) UIView* mainContainer; 				//@synthesize mainContainer=_mainContainer - In the implementation block
@property (nonatomic,retain) UIView* bottomContainer; 				//@synthesize bottomContainer=_bottomContainer - In the implementation block
-(id)objectRepresentation;
-(void)setBottomAttachment:(id)arg1;
-(void)setBottomAttachmentHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setAdditionalItems:(id)arg1;
-(void)setTabBarDelegate:(id)arg1;
-(BOOL)restoreWithObjectRepresentation:(id)arg1;
-(void)addBottomAttachmentToContainer;
-(void)addBottomBannerToContainer;
-(float)bottomBannerHeightImpact;
-(float)bottomBannerOriginYWithMainContainerFrame:(CGRect)arg1;
-(void)repositionBottomBanner;
-(id)keyPathsForValuesAffectingValueForSelectedIndex;
-(BOOL)isBottomAttachmentHidden;
-(void)setBottomBanner:(id)arg1;
-(void)setMainContainer:(id)arg1;
-(void)setBottomContainer:(id)arg1;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewDidLoad;
-(void)loadView;
-(void)setViewControllers:(id)arg1;
-(void)setSelectedViewController:(id)arg1;
-(void)setSelectedIndex:(unsigned)arg1;
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2;
-(void)setTabBar:(id)arg1;
-(void).cxx_destruct;
@end