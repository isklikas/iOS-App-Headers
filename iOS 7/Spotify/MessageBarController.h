/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:41 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MessageBarController : UIViewController {
	MessageBarView* _messageBarTop; 
	MessageBarView* _messageBarBottom; 
	BOOL _messageBarHiddenTop; 
	BOOL _messageBarHiddenBottom; 
	BOOL _messageBarForceHidden; 
	BOOL _messageBarShowingAlertTop; 
	BOOL _messageBarShowingAlertBottom; 
	NSMutableArray* _messageBarItemsTop; 
	NSMutableArray* _messageBarItemsBottom; 
	NSTimer* _updateMessageBarTimer; 
	UIViewController* _contentViewController; 
	UIView* _topRightCornerView; 
	UIView* _bottomLeftCornerView; 
	UIView* _bottomRightCornerView; 
}
@property (nonatomic,retain) UIViewController* contentViewController; 
@property (nonatomic,retain) MessageBarView* messageBarTop; 				//@synthesize messageBarTop=_messageBarTop - In the implementation block
@property (nonatomic,retain) MessageBarView* messageBarBottom; 				//@synthesize messageBarBottom=_messageBarBottom - In the implementation block
@property (nonatomic,copy) NSMutableArray* messageBarItemsTop; 				//@synthesize messageBarItemsTop=_messageBarItemsTop - In the implementation block
@property (nonatomic,copy) NSMutableArray* messageBarItemsBottom; 				//@synthesize messageBarItemsBottom=_messageBarItemsBottom - In the implementation block
+(id)defaultController;
-(void)setContentViewController:(id)arg1 animation:(int)arg2 completion:(id)arg3;
-(void)setMessageBarForceHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setContentViewController:(id)arg1 animation:(int)arg2;
-(void)setMessageBarTop:(id)arg1;
-(void)setMessageBarBottom:(id)arg1;
-(void)_updateMessageBarText:(BOOL)arg1 messageBarPosition:(int)arg2;
-(void)topMessageBarTapped;
-(void)bottomMessageBarTapped;
-(BOOL)isMessageBarHidden:(int)arg1;
-(void)_layoutSubviewsForOrientation:(int)arg1 messageBarHiddenTop:(BOOL)arg2 messageBarHiddenBottom:(BOOL)arg3;
-(BOOL)isMessageBarShowingAlert:(int)arg1;
-(CGRect)_messageBarFrameForOrientation:(int)arg1 messageBarHidden:(BOOL)arg2 messageBarPosition:(int)arg3;
-(CGRect)_contentViewFrameWithMessageBarFrameTop:(CGRect)arg1 messageBarFrameBottom:(CGRect)arg2;
-(CGRect)frameForCorner:(unsigned)arg1 inContentFrame:(CGRect)arg2;
-(id)itemsForMessageBarPosition:(int)arg1;
-(void)_updateMessageBar:(BOOL)arg1 messageBarPosition:(int)arg2;
-(void)_updateMessageBarDeferred:(id)arg1;
-(BOOL)isMessageBarForceHidden;
-(void)_updateMessageBar:(BOOL)arg1 deferred:(BOOL)arg2;
-(void)presentMessageBarItem:(id)arg1 animated:(BOOL)arg2;
-(void)presentMessageBarItem:(id)arg1 messageBarPosition:(int)arg2 overwriteExisting:(BOOL)arg3 animated:(BOOL)arg4;
-(void)messageChanged:(id)arg1 onObject:(id)arg2;
-(void)dismissMessageBarItem:(id)arg1 animated:(BOOL)arg2;
-(CGRect)messageBarFrame:(int)arg1;
-(void)setMessageBarForceHidden:(BOOL)arg1;
-(void)presentMessageBarItem:(id)arg1;
-(void)presentMessageBarItem:(id)arg1 overwriteExisting:(BOOL)arg2 animated:(BOOL)arg3;
-(void)presentMessageBarItem:(id)arg1 messageBarPosition:(int)arg2;
-(void)presentMessageBarItem:(id)arg1 messageBarPosition:(int)arg2 animated:(BOOL)arg3;
-(void)dismissMessageBarItem:(id)arg1;
-(void)hiddenChanged;
-(void)dealloc;
-(id)init;
-(id)topViewController;
-(BOOL)shouldAutorotate;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)setContentViewController:(id)arg1;
@end