/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:07 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PTSSliderRowTableViewCell : PTSRowTableViewCell {
	UISlider* _slider; 
}
+(float)cellHeightForRow:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)updateCellCharacteristics;
-(void)updateDisplayedValue;
-(void).cxx_destruct;
-(void)_valueChanged:(id)arg1;
@end