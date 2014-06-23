/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:01 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLCallAddressDetailTableViewCell : UITableViewCell {
	NLCallSenderButton* _buttonCall; 
	UILabel* _labelPhoneNumber; 
	UIImageView* _imageViewLine; 
	UILabel* _labelFreeCall; 
}
@property (assign,nonatomic) NLCallSenderButton* buttonCall; 				//@synthesize buttonCall=_buttonCall - In the implementation block
@property (assign,nonatomic) UILabel* labelPhoneNumber; 				//@synthesize labelPhoneNumber=_labelPhoneNumber - In the implementation block
@property (assign,nonatomic) UIImageView* imageViewLine; 				//@synthesize imageViewLine=_imageViewLine - In the implementation block
@property (assign,nonatomic) UILabel* labelFreeCall; 				//@synthesize labelFreeCall=_labelFreeCall - In the implementation block
+(id)viewFromNib;
-(void)setButtonCall:(id)arg1;
-(void)initDefault;
-(void)setUserInfo:(id)arg1 withDelegate:(id)arg2;
-(void)setLabelPhoneNumber:(id)arg1;
-(void)setMemberTypeInfo:(unsigned)arg1 withCatName:(id)arg2;
-(void)setImageViewLine:(id)arg1;
-(void)setLabelFreeCall:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@end