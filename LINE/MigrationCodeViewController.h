/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:25 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NLPasswordInputViewDelegate.h>
#import <UIGestureRecognizerDelegate.h>

@interface MigrationCodeViewController : NLViewController <NLPasswordInputViewDelegate, UIGestureRecognizerDelegate> {
	id<MigrationCodeViewControllerDelegate> _delegate; 
	NLPasswordInputView* _passwordInputView; 
}
@property (assign,nonatomic) id<MigrationCodeViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NLPasswordInputView* passwordInputView; 				//@synthesize passwordInputView=_passwordInputView - In the implementation block
-(void)didTapView:(id)arg1;
-(void)openHelp:(id)arg1;
-(void)_configurePasswordInputView;
-(void)passwordInputView:(id)arg1 didFinishInputPassword:(id)arg2;
-(id)passwordInputViewMinimumPasswordLengthErrorMessage:(id)arg1;
-(void)setPasswordInputView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void).cxx_destruct;
@end