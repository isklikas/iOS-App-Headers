/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:55 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBRecallFriendRecommendCell : UITableViewCell {
	NSString* mid; 
	NSAttributedString* mFriendName; 
	BOOL isShowBuddyIcon; 
	TalkUserObject* user; 
}
@property (nonatomic,retain) NSString* mid; 
@property (assign,nonatomic) BOOL isShowBuddyIcon; 
@property (nonatomic,retain) TalkUserObject* user; 
-(void)setMid:(id)arg1;
-(void)setFriendName:(id)arg1;
-(void)setIsShowBuddyIcon:(BOOL)arg1;
-(void)setUser:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void).cxx_destruct;
@end