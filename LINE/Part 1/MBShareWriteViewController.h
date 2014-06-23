/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:56 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITextViewDelegate.h>
#import <MBPostManagerDelegate.h>

@interface MBShareWriteViewController : MBViewController <UITextViewDelegate, MBPostManagerDelegate> {
	UITextView* mTextView; 
	UILabel* mPlaceholderLabel; 
	UIView* mToolbar; 
	UIButton* mMyhomeGroupButton; 
	UIView* mKeyboardView; 
	MBMyHomeGroupSelectView* mGroupSelectView; 
	UIImageView* mStateMarkImageView; 
	MBToastView* mToastView; 
	MBIndicatorLayerView* mIndicatorLayer; 
	MBPostManager* mPostManager; 
	CGRect mKeyboardRect; 
	id mDelegate; 
	BOOL mIsEditMode; 
	BOOL mIsModified; 
	BOOL mIsHomeManager; 
	BOOL mIsViewDidLoad; 
}
-(void)groupChanged:(id)arg1;
-(void)groupModified:(id)arg1;
-(void)initViews;
-(void)setNavigationBar;
-(void)setNavigationBarForEdit;
-(void)setDataForEditMode;
-(void)willChangeKeyboardStatus:(id)arg1;
-(void)didShowKeyboard:(id)arg1;
-(BOOL)showToolBar;
-(id)readPermissionInfo;
-(id)userText;
-(void)didModified;
-(void)createPostForShare;
-(void)updatePost;
-(void)hideToastInAlertView;
-(id)postManager;
-(void)layoutViews;
-(void)adjustTextViewContentOffsetForIos7;
-(void)showPostDetailErrorAlert:(id)arg1;
-(void)postManager:(id)arg1 didFinishCreatingPostForShareWithPost:(id)arg2 error:(id)arg3;
-(void)postManager:(id)arg1 didFinishUpdatingPostWithPost:(id)arg2 error:(id)arg3;
-(id)initWithData:(id)arg1 sourceType:(id)arg2 delegate:(id)arg3;
-(id)initForEditWithData:(id)arg1 originActivity:(id)arg2 sourceType:(id)arg3 homeManager:(BOOL)arg4 delegate:(id)arg5;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(id)textView;
-(void).cxx_destruct;
@end