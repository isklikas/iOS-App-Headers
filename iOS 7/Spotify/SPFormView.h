/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:55 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPFormView : UIView {
	float _fieldHeight; 
	NSArray* _separators; 
	NSArray* _errors; 
	NSArray* _textFields; 
}
@property (nonatomic,copy) NSArray* textFields; 				//@synthesize textFields=_textFields - In the implementation block
-(id)initWithFrame:(CGRect)arg1 fieldCount:(float)arg2;
-(id)setPlaceholder:(id)arg1 fieldType:(unsigned)arg2 returnKeyType:(int)arg3 delegate:(id)arg4 icon:(unsigned)arg5 secure:(BOOL)arg6 validator:(id)arg7 forFieldAtIndex:(int)arg8;
-(BOOL)hasErrors;
-(void)validateField:(id)arg1;
-(void)displayError:(id)arg1 forFieldAtIndex:(int)arg2;
-(void)checkField:(id)arg1;
-(id)newField;
-(int)textFieldClearButtonViewMode;
-(void)clearErrorForField:(id)arg1;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(CGSize)intrinsicContentSize;
-(id)theme;
-(void).cxx_destruct;
@end