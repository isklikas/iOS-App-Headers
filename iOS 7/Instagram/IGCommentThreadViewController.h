/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:10 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIGestureRecognizerDelegate.h>
#import <IGCommentThreadTableSourceDelegate.h>
#import <IGAutocompleteControllerDelegate.h>
#import <IGGrowingTextViewDelegate.h>
#import <UITextFieldDelegate.h>

@interface IGCommentThreadViewController : IGViewController <UIGestureRecognizerDelegate, IGCommentThreadTableSourceDelegate, IGAutocompleteControllerDelegate, IGGrowingTextViewDelegate, UITextFieldDelegate> {
	IGButton* _sendButton; 
	UIView* _textViewContainer; 
	BOOL _keyboardIsAnimating; 
	BOOL _appearing; 
	BOOL _pushPerformed; 
	UIView* _tableViewContainer; 
	BOOL _shouldPanToBottom; 
	float _bottomCellOffsetBeforeReload; 
	IGCommentModel* _bottomCommentBeforeReload; 
	float _contentOffsetYBeforeReload; 
	IGCommentThreadTableSource* _dataSource; 
	IGAutocompleteController* _autocompleteController; 
	UIView* _keyboard; 
	int _originalTextViewY; 
	int _originalLocation; 
	IGBulkMediaRequestManager* _requestManager; 
	BOOL _navBarWasHidden; 
	BOOL _keyboardShowing; 
	IGFeedItem* _feedItem; 
	IGGrowingTextView* _growingTextView; 
	IGPlainTableView* _tableView; 
}
@property (nonatomic,retain) IGFeedItem* feedItem; 				//@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,copy) IGGrowingTextView* growingTextView; 				//@synthesize growingTextView=_growingTextView - In the implementation block
@property (nonatomic,retain) IGPlainTableView* tableView; 				//@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL navBarWasHidden; 				//@synthesize navBarWasHidden=_navBarWasHidden - In the implementation block
@property (nonatomic,copy) BOOL keyboardShowing; 				//@synthesize keyboardShowing=_keyboardShowing - In the implementation block
-(BOOL)prefersTabBarHidden;
-(id)textViewContainer;
-(id)initWithKeyboardShowing:(BOOL)arg1;
-(void)setFeedItem:(id)arg1;
-(void)postComment;
-(void)commentThreadDataSource:(id)arg1 didAddNewCommentAtIndexPath:(id)arg2;
-(void)commentThreadDataSourceDidStartLoading:(id)arg1 isLoadingMore:(BOOL)arg2;
-(void)commentThreadDataSourceDidFinishLoading:(id)arg1;
-(void)commentThreadDataSourceDidFailLoading:(id)arg1;
-(void)commentThreadDataSourceTableWillDrag:(id)arg1;
-(void)commentThreadDataSourceTableDidDrag:(id)arg1;
-(void)commentThreadDataSourceTableWillEndDragging:(id)arg1 withVelocity:(float)arg2;
-(void)commentThreadDataSourceTableDidEndDragging:(id)arg1;
-(void)commentThreadDataSource:(id)arg1 didTapReplyToUser:(id)arg2 inCommentCell:(id)arg3;
-(void)commentThreadDataSourceDeletedComment:(id)arg1 didReportAsSpam:(BOOL)arg2;
-(void)commentThreadDataSourceDidFailToDeleteComment:(id)arg1;
-(BOOL)tableViewIsAtBottom;
-(void)moveKeyboardWithGestureRecognizer:(id)arg1;
-(void)finishKeyboardAnimationWithGestureRecognizer:(id)arg1;
-(void)scrollToBottomAndAnimate:(BOOL)arg1;
-(void)animateKeyboardOffscreenWithDuration:(float)arg1;
-(float)textViewHeight;
-(void)animateKeyboardReturnToOriginalPositionWithDuration:(float)arg1;
-(void)saveScrollPosition;
-(void)updateScrollPositionUsingSavedScrollPosition;
-(void)replyToUsername:(id)arg1;
-(BOOL)growingTextViewShouldBeginEditing:(id)arg1;
-(void)growingTextViewDidEndEditing:(id)arg1;
-(BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)growingTextViewDidChange:(id)arg1;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
-(BOOL)growingTextViewShouldReturn:(id)arg1;
-(void)prefillWithText:(id)arg1;
-(BOOL)disableNavigationGesture;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setNavBarWasHidden:(BOOL)arg1;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)keyboardDidShow:(id)arg1;
-(id)textView;
-(id)sendButton;
-(void)keyboardWillShow:(id)arg1;
-(void)keyboardWillHide:(id)arg1;
-(void).cxx_destruct;
@end