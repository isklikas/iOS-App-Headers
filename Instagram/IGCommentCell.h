/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:17 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIGestureRecognizerDelegate.h>
#import <IGCommentActionViewDelegate.h>
#import <IGCommentContentViewDelegate.h>

@interface IGCommentCell : UITableViewCell <UIGestureRecognizerDelegate, IGCommentActionViewDelegate, IGCommentContentViewDelegate> {
	IGCommentActionView* _actionsView; 
	float _beginningX; 
	BOOL _showActions; 
	int _maxActionBarWidth; 
	IGCommentModel* _comment; 
	id<IGCommentCellDelegate> _delegate; 
	IGCommentContentView* _commentView; 
}
@property (nonatomic,retain) IGCommentModel* comment; 				//@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentCellDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCommentContentView* commentView; 				//@synthesize commentView=_commentView - In the implementation block
@property (nonatomic,copy) BOOL isShowingEditActions; 
-(void)commentActionReplyButtonTapped;
-(void)commentActionDeleteButtonTapped;
-(void)cellPanned:(id)arg1;
-(void)showActions:(BOOL)arg1 animated:(BOOL)arg2;
-(void)showActions:(BOOL)arg1 velocity:(float)arg2;
-(void)showActions:(BOOL)arg1 duration:(float)arg2;
-(void)commentUserTapped:(id)arg1;
-(void)replyToUser:(id)arg1;
-(void)locationTapped:(id)arg1;
-(void)setCommentView:(id)arg1;
-(void)setComment:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1;
-(void)prepareForReuse;
-(void)reply;
-(void)setNavigationController:(id)arg1;
-(void).cxx_destruct;
@end