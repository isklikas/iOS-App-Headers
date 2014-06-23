/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:28 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>
#import <UITextFieldDelegate.h>

@interface RegistrationAccountConnectViewController : NLViewController <UIAlertViewDelegate, UITextFieldDelegate> {
	RegistrationInputField* _accountField; 
	RegistrationInputField* _passwordField; 
	UIButton* _loginButton; 
	UIButton* _skipButton; 
	UIButton* _whenForgotPasswordButton; 
	UIView* _whenForgotPasswordUnderline; 
	UIButton* _switchingToNaverIDButton; 
	UIView* _switchingToNaverIDUnderlineView; 
	UIButton* _switchingToEmailButton; 
	UIView* _switchingToEmailUnderlineView; 
	UIView* _separatorLineView; 
	UIButton* _facebookButton; 
	UIView* _chineseSNSButtonsView; 
	int _accountType; 
	UITextField* _editingTextField; 
}
@property (assign,nonatomic) RegistrationInputField* accountField; 				//@synthesize accountField=_accountField - In the implementation block
@property (assign,nonatomic) RegistrationInputField* passwordField; 				//@synthesize passwordField=_passwordField - In the implementation block
@property (assign,nonatomic) UIButton* loginButton; 				//@synthesize loginButton=_loginButton - In the implementation block
@property (assign,nonatomic) UIButton* skipButton; 				//@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic) UIButton* whenForgotPasswordButton; 				//@synthesize whenForgotPasswordButton=_whenForgotPasswordButton - In the implementation block
@property (assign,nonatomic) UIView* whenForgotPasswordUnderline; 				//@synthesize whenForgotPasswordUnderline=_whenForgotPasswordUnderline - In the implementation block
@property (assign,nonatomic) UIButton* switchingToNaverIDButton; 				//@synthesize switchingToNaverIDButton=_switchingToNaverIDButton - In the implementation block
@property (assign,nonatomic) UIView* switchingToNaverIDUnderlineView; 				//@synthesize switchingToNaverIDUnderlineView=_switchingToNaverIDUnderlineView - In the implementation block
@property (assign,nonatomic) UIButton* switchingToEmailButton; 				//@synthesize switchingToEmailButton=_switchingToEmailButton - In the implementation block
@property (assign,nonatomic) UIView* switchingToEmailUnderlineView; 				//@synthesize switchingToEmailUnderlineView=_switchingToEmailUnderlineView - In the implementation block
@property (assign,nonatomic) UIView* separatorLineView; 				//@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (assign,nonatomic) UIButton* facebookButton; 				//@synthesize facebookButton=_facebookButton - In the implementation block
@property (assign,nonatomic) UIView* chineseSNSButtonsView; 				//@synthesize chineseSNSButtonsView=_chineseSNSButtonsView - In the implementation block
@property (assign,nonatomic) int accountType; 				//@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) UITextField* editingTextField; 				//@synthesize editingTextField=_editingTextField - In the implementation block
-(void)configureNavigationItem;
-(void)skipButtonPressed:(id)arg1;
-(void)configureSeparatorLineView:(id)arg1;
-(void)configureFacebookButton:(id)arg1;
-(void)configureChineseSNSButtonsView:(id)arg1;
-(void)weiboButtonTapped:(id)arg1;
-(void)renrenButtonTapped:(id)arg1;
-(void)feixinButtonTapped:(id)arg1;
-(void)connectToSNS:(int)arg1;
-(void)configureSubviews;
-(void)setupLocalizedStrings;
-(void)updateLayouts;
-(void)setFacebookButton:(id)arg1;
-(void)setChineseSNSButtonsView:(id)arg1;
-(void)facebookButtonTapped:(id)arg1;
-(void)configureAccountField:(id)arg1;
-(void)configurePasswordField:(id)arg1;
-(void)configureLoginButton:(id)arg1;
-(void)configureSkipButton:(id)arg1;
-(void)configureWhenForgotPasswordButton:(id)arg1;
-(void)configureWhenForgotPasswordUnderlineView:(id)arg1;
-(void)scrollDown;
-(void)setLoginButton:(id)arg1;
-(void)setWhenForgotPasswordButton:(id)arg1;
-(void)setWhenForgotPasswordUnderline:(id)arg1;
-(void)setSwitchingToNaverIDButton:(id)arg1;
-(void)setSwitchingToNaverIDUnderlineView:(id)arg1;
-(void)setSwitchingToEmailButton:(id)arg1;
-(void)setSwitchingToEmailUnderlineView:(id)arg1;
-(void)setEditingTextField:(id)arg1;
-(void)scrollUpToField:(id)arg1;
-(void)configureSwitchingToNaverIDButton:(id)arg1;
-(void)configureSwitchingToNaverIDUnderlineView:(id)arg1;
-(void)configureSwitchingToEmailButton:(id)arg1;
-(void)configureSwitchingToEmailUnderlineView:(id)arg1;
-(void)whenForgotPasswordButtonPressed:(id)arg1;
-(void)passwordTextChanged:(id)arg1;
-(void)switchingToNaverIDButtonTapped:(id)arg1;
-(void)switchingToEmailButtonTapped:(id)arg1;
-(void)setSeparatorLineView:(id)arg1;
-(void)setPasswordField:(id)arg1;
-(void)reloadView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2;
-(BOOL)textFieldShouldBeginEditing:(id)arg1;
-(void)textFieldDidBeginEditing:(id)arg1;
-(BOOL)textFieldShouldEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1;
-(BOOL)textFieldShouldReturn:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)setSkipButton:(id)arg1;
-(void)okButtonPressed:(id)arg1;
-(void).cxx_destruct;
-(void)setAccountType:(int)arg1;
-(void)setAccountField:(id)arg1;
@end