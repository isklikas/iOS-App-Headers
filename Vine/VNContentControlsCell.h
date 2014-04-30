/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:45 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface VNContentControlsCell : UITableViewCell <UIAlertViewDelegate> {
	UIImageView* _background; 
	UIImageView* _icon; 
	VNFontLabelSemibold* _titleLabel; 
	VNFontLabelRegular* _descriptionLabel; 
	VNSwitch* _toggleSwitch; 
	int _type; 
}
@property (nonatomic,retain) UIImageView* background; 				//@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIImageView* icon; 				//@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) VNFontLabelSemibold* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VNFontLabelRegular* descriptionLabel; 				//@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) VNSwitch* toggleSwitch; 				//@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (assign,nonatomic) int type; 				//@synthesize type=_type - In the implementation block
-(void)toggleSwitchChanged;
-(void)updateContentControl;
-(void)toggleSwitchWithoutEvent;
-(void)setToggleSwitch:(id)arg1;
-(void)dealloc;
-(void)setType:(int)arg1;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)awakeFromNib;
-(void)setIcon:(id)arg1;
-(void)update;
-(void)setBackground:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setDescriptionLabel:(id)arg1;
-(void).cxx_destruct;
@end