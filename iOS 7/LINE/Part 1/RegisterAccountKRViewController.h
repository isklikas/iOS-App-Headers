/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:30 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITextFieldDelegate.h>

@interface RegisterAccountKRViewController : NLViewController <UITextFieldDelegate> {
	BOOL shownRegistrationAlertLabel; 
	UIView* formView; 
	UIImageView* formBgView; 
	RegistrationInputField* accountField; 
	RegistrationInputField* passwordField; 
	UIButton* loginButton; 
	UIButton* findAccountButton; 
	UIButton* findPasswordButton; 
	UIButton* agreeButton; 
	UIButton* agreeButtonBacked; 
	UILabel* agreeDescriptionLabel; 
	UIButton* agreeDescriptionButton; 
	UIView* agreeDescriptionUnderline; 
	UILabel* registrationAlertLabel; 
	id successAlertDelegate; 
	NSString* redirectURL; 
}
@property (assign,nonatomic) UIView* formView; 
@property (assign,nonatomic) UIImageView* formBgView; 
@property (assign,nonatomic) RegistrationInputField* accountField; 
@property (assign,nonatomic) RegistrationInputField* passwordField; 
@property (assign,nonatomic) UIButton* loginButton; 
@property (assign,nonatomic) UIButton* findAccountButton; 
@property (assign,nonatomic) UIButton* findPasswordButton; 
@property (assign,nonatomic) UIButton* agreeButton; 
@property (assign,nonatomic) UIButton* agreeButtonBacked; 
@property (assign,nonatomic) UILabel* agreeDescriptionLabel; 
@property (assign,nonatomic) UIButton* agreeDescriptionButton; 
@property (assign,nonatomic) UIView* agreeDescriptionUnderline; 
@property (assign,nonatomic) UILabel* registrationAlertLabel; 
@property (assign,getter=isShownRegistrationAlertLabel,nonatomic) BOOL shownRegistrationAlertLabel; 
@property (assign,nonatomic) id successAlertDelegate; 
@property (nonatomic,retain) NSString* redirectURL; 
-(void)setSuccessAlertDelegate:(id)arg1;
-(void)processRegistration;
-(void)setupLocalizedStrings;
-(void)updateLayouts;
-(void)customizeSubviews;
-(void)setShownRegistrationAlertLabel:(BOOL)arg1;
-(void)setAgreeButton:(id)arg1;
-(void)agreeButtonPressed:(id)arg1;
-(void)setLoginButton:(id)arg1;
-(void)setFormBgView:(id)arg1;
-(void)setFindAccountButton:(id)arg1;
-(void)setFindPasswordButton:(id)arg1;
-(void)setAgreeDescriptionLabel:(id)arg1;
-(void)setAgreeDescriptionButton:(id)arg1;
-(void)setAgreeDescriptionUnderline:(id)arg1;
-(void)setRegistrationAlertLabel:(id)arg1;
-(void)setFormView:(id)arg1;
-(void)setAgreeButtonBacked:(id)arg1;
-(void)updateLoginButtonEnabled;
-(void)loginButtonPressed:(id)arg1;
-(void)findAccountButtonPressed:(id)arg1;
-(void)findPasswordButtonPressed:(id)arg1;
-(void)agreeDescriptionLinkClicked:(id)arg1;
-(void)setPasswordField:(id)arg1;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2;
-(void)textFieldDidEndEditing:(id)arg1;
-(BOOL)textFieldShouldReturn:(id)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)textChanged:(id)arg1;
-(void)setRedirectURL:(id)arg1;
-(void).cxx_destruct;
-(void)setAccountField:(id)arg1;
@end