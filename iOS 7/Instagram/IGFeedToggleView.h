/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:26 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGFeedToggleView : UIView {
	id _titleSetter; 
	UIImageView* _usertagsCountBubble; 
	UILabel* _usertagsCountLabel; 
	id<IGFeedToggleViewDelegate> _delegate; 
	NSMutableArray* _buttons; 
}
@property (assign,nonatomic,__weak) id<IGFeedToggleViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray* buttons; 				//@synthesize buttons=_buttons - In the implementation block
+(id)feedToggleViewForUserHeader;
+(id)feedToggleViewForProfileHeader;
+(id)feedToggleViewWithAccessoryLabel;
+(id)feedToggleViewWithAccessoryButton;
+(int)height;
-(void)switchedMode:(id)arg1;
-(id)initWithMapAndUsertagButtons;
-(void)updateUsertagCount;
-(id)initForProfile;
-(id)initWithAccessoryLabel;
-(id)initWithAccessoryButton;
-(void)selectButton:(int)arg1;
-(void)setAccessoryTitle:(id)arg1;
-(void)setButtonEnabled:(BOOL)arg1 forButton:(int)arg2;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void).cxx_destruct;
-(void)setButtons:(id)arg1;
@end