/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface TrackMenuCell : UITableViewCell {
	UIImageView* arrowView; 
	UIView* _menuView; 
	struct UIEdgeInsets _backgroundViewInsets; 
}
@property (nonatomic,retain) UIView* menuView; 				//@synthesize menuView=_menuView - In the implementation block
@property (assign,nonatomic) struct UIEdgeInsets backgroundViewInsets; 				//@synthesize backgroundViewInsets=_backgroundViewInsets - In the implementation block
@property (nonatomic,retain) UIImageView* arrowView; 
-(void)setArrowView:(id)arg1;
-(void)setBackgroundViewInsets:(struct UIEdgeInsets)arg1;
-(void)setMenuView:(id)arg1;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
@end