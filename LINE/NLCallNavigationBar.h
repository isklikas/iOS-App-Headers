/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:29 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCallNavigationBar : UIView {
	UIButton* _buttonSetting; 
	NLCallTopMenuButton* _buttonKeypad; 
	NLCallTopMenuButton* _buttonHistory; 
	NLCallTopMenuButton* _buttonAddress; 
	NLCallTopMenuButton* _buttonSpot; 
	UIButton* _buttonClose; 
}
@property (assign,nonatomic) UIButton* buttonSetting; 				//@synthesize buttonSetting=_buttonSetting - In the implementation block
@property (assign,nonatomic) NLCallTopMenuButton* buttonKeypad; 				//@synthesize buttonKeypad=_buttonKeypad - In the implementation block
@property (assign,nonatomic) NLCallTopMenuButton* buttonHistory; 				//@synthesize buttonHistory=_buttonHistory - In the implementation block
@property (assign,nonatomic) NLCallTopMenuButton* buttonAddress; 				//@synthesize buttonAddress=_buttonAddress - In the implementation block
@property (assign,nonatomic) NLCallTopMenuButton* buttonSpot; 				//@synthesize buttonSpot=_buttonSpot - In the implementation block
@property (assign,nonatomic) UIButton* buttonClose; 				//@synthesize buttonClose=_buttonClose - In the implementation block
-(void)updateLayoutForScreenSmallerThan4Inchi;
-(void)setButtonClose:(id)arg1;
-(void)shfitToLeftForJapanDevice;
-(void)updateMenuStatus:(int)arg1;
-(void)setButtonSetting:(id)arg1;
-(void)setButtonKeypad:(id)arg1;
-(void)setButtonHistory:(id)arg1;
-(void)setButtonAddress:(id)arg1;
-(void)setButtonSpot:(id)arg1;
-(void)layoutSubviews;
@end