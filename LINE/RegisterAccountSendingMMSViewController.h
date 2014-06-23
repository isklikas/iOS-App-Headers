/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:43 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MFMessageComposeViewControllerDelegate.h>

@interface RegisterAccountSendingMMSViewController : NLViewController <MFMessageComposeViewControllerDelegate> {
	UIScrollView* bgScrollView_; 
	BOOL canShowMail_; 
	LineEmailConfirmationSession* session; 
	NSString* confirmationEmail; 
}
@property (nonatomic,retain) LineEmailConfirmationSession* session; 
@property (nonatomic,retain) NSString* confirmationEmail; 
@property (assign,nonatomic) BOOL canShowMail; 
-(void)removeObserver;
-(void)popViewControllerAnimated;
-(void)setConfirmationEmail:(id)arg1;
-(void)setCanShowMail:(BOOL)arg1;
-(void)setSession:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)close;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
-(void).cxx_destruct;
@end