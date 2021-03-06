/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:13 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBViewController : UIViewController {
	BOOL _autoDismiss; 
	BOOL _dismissAnimated; 
	UIBarButtonItem* _cancelButton; 
	UIBarButtonItem* _doneButton; 
	id<FBViewControllerDelegate> _delegate; 
	UIToolbar* _toolbar; 
	UIView* _canvasView; 
	UIBarButtonItem* _titleLabel; 
	id _handler; 
}
@property (nonatomic,retain) UIBarButtonItem* cancelButton; 				//@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* doneButton; 				//@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) id<FBViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView* canvasView; 				//@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) UIToolbar* toolbar; 				//@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) id handler; 				//@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL autoDismiss; 				//@synthesize autoDismiss=_autoDismiss - In the implementation block
@property (assign,nonatomic) BOOL dismissAnimated; 				//@synthesize dismissAnimated=_dismissAnimated - In the implementation block
-(id)compatiblePresentingViewController;
-(void)doneButtonPressed:(id)arg1;
-(void)setCanvasView:(id)arg1;
-(void)setAutoDismiss:(BOOL)arg1;
-(void)updateBar;
-(void)setDismissAnimated:(BOOL)arg1;
-(void)updateBarForPresentedMode;
-(void)updateBarForNavigationMode;
-(void)presentModallyFromViewController:(id)arg1 animated:(BOOL)arg2 handler:(id)arg3;
-(void)setDoneButton:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(void)setCancelButton:(id)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)setToolbar:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setHandler:(id)arg1;
-(void)cancelButtonPressed:(id)arg1;
@end