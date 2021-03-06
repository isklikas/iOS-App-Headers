/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBTimelineTopSlideView : UIView {
	BOOL mIsShowShadow; 
	UIImageView* mTopShadowView; 
	UIButton* mWriteButton; 
	UIButton* mPhotoButton; 
	UIButton* mStickerButton; 
	MBTimelineTopNewButton* mNewButton; 
	id mDelegate; 
	BOOL mIsAnimating; 
	float mBaseYPosition; 
	float mLastYPostion; 
	NSMutableDictionary* mUserInfo; 
}
@property (assign,nonatomic) BOOL isShowShadow; 
+(id)timelineTopSlideViewWithFrame:(CGRect)arg1 delegate:(id)arg2 srcType:(id)arg3;
+(id)myhomeTopSlideViewWithFrame:(CGRect)arg1 delegate:(id)arg2 srcType:(id)arg3;
+(float)height;
-(void)setLayout;
-(void)setHiddenNewButton:(BOOL)arg1;
-(void)hideDelay;
-(void)showNewCheck;
-(void)setBaseYPosition:(float)arg1;
-(void)setShadowViewHiddenByScrollViewYPos:(float)arg1 isDraggingTracking:(BOOL)arg2;
-(void)setAnimateHiddenNewButton:(BOOL)arg1;
-(float)getBaseYPosition;
-(void)setIsShowShadow:(BOOL)arg1;
-(void)setHiddenShadow:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 srcType:(id)arg3;
-(void)setNewButton;
-(void)setButton;
-(id)setButtonTitle:(id)arg1 withButtonAction:(id)arg2;
-(void)showView:(BOOL)arg1 animated:(BOOL)arg2;
-(void)hideNoAni;
-(BOOL)isHiddenState;
-(void)showAni;
-(BOOL)isContainUserInteractionAreaWithPoint:(CGPoint)arg1;
-(void)addUserInfo:(id)arg1;
-(void)removeAddedUserInfo;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
-(void)scrollViewDidScroll:(id)arg1;
-(id)delegate;
-(id)userInfo;
-(float)height;
-(void)setY:(float)arg1;
-(void).cxx_destruct;
@end