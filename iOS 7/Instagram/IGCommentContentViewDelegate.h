/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:17 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIGestureRecognizerDelegate
@optional
-(BOOL)gestureRecognizerShouldBegin(id):arg1 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRequireFailureOfGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldBeRequiredToFailByGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldReceiveTouch(id):arg2 ;
@end

@protocol IGCommentActionViewDelegate
@required
-(void)commentActionReplyButtonTapped;
-(void)commentActionDeleteButtonTapped;
-(void)commentActionReplyButtonTapped;
-(void)commentActionDeleteButtonTapped;
@end

@protocol IGCommentContentViewDelegate
@required
-(void)commentUserTapped(id):arg1 ;
-(void)replyToUser(id):arg1 ;
-(void)locationTapped(id):arg1 ;
-(void)reply;
-(void)commentUserTapped(id):arg1 ;
-(void)replyToUser(id):arg1 ;
-(void)locationTapped(id):arg1 ;
-(void)reply;
@end
