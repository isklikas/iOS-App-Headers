/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:51 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol IGKeyboardTextViewViewController
@optional
-(void)keyboardTextViewController(id):arg1 textViewDidBeginEditing(id):arg2 ;
@required
-(void)keyboardTextViewControllerDidTapDone(id):arg1 ;
-(void)keyboardTextViewController(id):arg1 didTapSendWithText(id):arg2 ;
-(void)keyboardTextViewControllerDidTapOther(id):arg1 ;
-(void)keyboardTextViewControllerDidTapLike(id):arg1 ;
-(void)keyboardTextViewController(id):arg1 didObserveKeyboardFrameChangingToFrame({):arg2 ;
-(void)keyboardTextViewController(id):arg1 didChangeContentHeightToHeight(float):arg2 ;
-(void)keyboardTextViewControllerDidTapDone(id):arg1 ;
-(void)keyboardTextViewController(id):arg1 didTapSendWithText(id):arg2 ;
-(void)keyboardTextViewControllerDidTapOther(id):arg1 ;
-(void)keyboardTextViewControllerDidTapLike(id):arg1 ;
-(void)keyboardTextViewController(id):arg1 didObserveKeyboardFrameChangingToFrame({):arg2 ;
-(void)keyboardTextViewController(id):arg1 didChangeContentHeightToHeight(float):arg2 ;
@end

@protocol UIGestureRecognizerDelegate
@optional
-(BOOL)gestureRecognizerShouldBegin(id):arg1 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRequireFailureOfGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldBeRequiredToFailByGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldReceiveTouch(id):arg2 ;
@end

@protocol IGMessagesViewControllerDelegate
@required
-(void)messagesController(id):arg1 didTapReplyToUser(id):arg2 ;
-(void)messagesController(id):arg1 didTapReplyToUser(id):arg2 ;
@end

@protocol IGActionSheetDelegate
@optional
-(void)actionSheetFinishedHiding;
@required
-(void)actionSheetDismissedWithButtonTitled(id):arg1 ;
-(void)actionSheetDismissedWithButtonTitled(id):arg1 ;
@end

@protocol IGFeedNetworkSourceDelegate
@end
