/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:14 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLStyledTextMarkupParser : NSObject {
	BOOL isBold; 
	UIColor* currentTextColor; 
	NLStyledTextMarkupParserOptions* _options; 
}
@property (assign,nonatomic) BOOL isBold; 
@property (nonatomic,retain) UIColor* currentTextColor; 
@property (nonatomic,retain) NLStyledTextMarkupParserOptions* options; 				//@synthesize options=_options - In the implementation block
-(void)setCurrentTextColor:(id)arg1;
-(id)attrStringFromMarkup:(id)arg1;
-(void)setOptions:(id)arg1;
-(id)initWithOptions:(id)arg1;
-(void)setIsBold:(BOOL)arg1;
-(void).cxx_destruct;
@end