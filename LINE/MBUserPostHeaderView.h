/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:52 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MBActorObserving.h>

@interface MBUserPostHeaderView : MBBaseChildCellView <MBActorObserving> {
	MBActivity* mActivity; 
	int mPostViewType; 
	MBProfileImageView* mProfileImageView; 
	MBNicknameButton* mNicknameButton; 
	MBTimeLabel* mTimeLabel; 
	MBServiceNameButton* mServiceNameButton; 
	UIButton* mReadPermissionButton; 
}
@property (nonatomic,copy) MBActivity* activity; 
+(float)heightWithType:(int)arg1 activity:(id)arg2 width:(float)arg3;
-(void)drawCellData;
-(void)resetCellData;
-(void)setupWithType:(int)arg1 activity:(id)arg2;
-(void)setCellData:(id)arg1;
-(void)actorDidLoadNickname:(id)arg1;
-(void)actorDidLoadImage:(id)arg1;
-(void)layoutFromContainer:(CGSize)arg1 margin:(CGPoint)arg2;
-(void)dealloc;
-(void).cxx_destruct;
@end