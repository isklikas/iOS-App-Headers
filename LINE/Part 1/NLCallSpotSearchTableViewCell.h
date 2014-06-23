/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:38 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCallSpotSearchTableViewCell : UITableViewCell {
	NSArray* mInfoArray; 
	UIImageView* _imageViewSpot; 
	NMAttributedLabel* _viewName; 
	NMAttributedLabel* _viewExtraInfo; 
	UIImageView* _imageViewLineAt; 
	NLCallSenderButton* _buttonCall; 
	UIView* _viewVerticalLine; 
	UIView* _viewBottomLine; 
	UILabel* _labelLineATTenpo; 
}
@property (assign,nonatomic) UIImageView* imageViewSpot; 				//@synthesize imageViewSpot=_imageViewSpot - In the implementation block
@property (assign,nonatomic) NMAttributedLabel* viewName; 				//@synthesize viewName=_viewName - In the implementation block
@property (assign,nonatomic) NMAttributedLabel* viewExtraInfo; 				//@synthesize viewExtraInfo=_viewExtraInfo - In the implementation block
@property (assign,nonatomic) UIImageView* imageViewLineAt; 				//@synthesize imageViewLineAt=_imageViewLineAt - In the implementation block
@property (assign,nonatomic) NLCallSenderButton* buttonCall; 				//@synthesize buttonCall=_buttonCall - In the implementation block
@property (assign,nonatomic) UIView* viewVerticalLine; 				//@synthesize viewVerticalLine=_viewVerticalLine - In the implementation block
@property (assign,nonatomic) UIView* viewBottomLine; 				//@synthesize viewBottomLine=_viewBottomLine - In the implementation block
@property (assign,nonatomic) UILabel* labelLineATTenpo; 				//@synthesize labelLineATTenpo=_labelLineATTenpo - In the implementation block
+(id)viewFromNib;
-(void)setButtonCall:(id)arg1;
-(void)initDefault;
-(void)setViewName:(id)arg1;
-(void)setViewVerticalLine:(id)arg1;
-(void)setViewBottomLine:(id)arg1;
-(void)setUserInfo:(id)arg1 withDelegate:(id)arg2 withKeyWord:(id)arg3;
-(void)setImageViewSpot:(id)arg1;
-(void)setViewExtraInfo:(id)arg1;
-(void)setImageViewLineAt:(id)arg1;
-(void)setLabelLineATTenpo:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
@end