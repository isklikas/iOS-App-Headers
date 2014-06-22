/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:02 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGFriendRequestHeaderView : UIView {
	BOOL _incomingRequestPending; 
	IGUser* _user; 
	IGUserDetailHeaderView* _delegate; 
	IGSimpleButton* _approveButton; 
	IGSimpleButton* _ignoreButton; 
	UILabel* _followLabel; 
}
@property (nonatomic,retain) IGUser* user; 				//@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) IGUserDetailHeaderView* delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSimpleButton* approveButton; 				//@synthesize approveButton=_approveButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton* ignoreButton; 				//@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UILabel* followLabel; 				//@synthesize followLabel=_followLabel - In the implementation block
-(void)setApproveButton:(id)arg1;
-(void)setIgnoreButton:(id)arg1;
-(void)onApproveButtonTapped:(id)arg1;
-(void)onIgnoreButtonTapped:(id)arg1;
-(void)updateFollowStatus:(id)arg1;
-(void)layOut;
-(void)setFollowLabel:(id)arg1;
-(void)setUser:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)show;
-(void)hide;
-(void).cxx_destruct;
@end