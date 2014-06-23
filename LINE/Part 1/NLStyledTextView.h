/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:18 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLStyledTextView : UIView {
	BOOL _highlighted; 
	BOOL shouldNotVerticalAlign; 
	NSAttributedString* _attString; 
	UIColor* textShadowColor; 
	UIColor* highlightedTextColor; 
	UIColor* initialTextColor; 
	int maximumNumberOfLines; 
	CGSize textShadowOffset; 
}
@property (nonatomic,retain) NSAttributedString* attString; 				//@synthesize attString=_attString - In the implementation block
@property (nonatomic,retain) UIColor* textShadowColor; 
@property (assign,nonatomic) CGSize textShadowOffset; 
@property (assign,nonatomic) BOOL highlighted; 				//@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIColor* highlightedTextColor; 
@property (assign,nonatomic) BOOL shouldNotVerticalAlign; 
@property (assign,nonatomic) int maximumNumberOfLines; 
@property (nonatomic,retain) UIColor* initialTextColor; 
+(CGSize)suggestFrameSizeWithAttributedString:(id)arg1 constrainedTo:(CGSize)arg2;
+(int)numberOfLinesWithAttributedString:(id)arg1 constrainedTo:(CGSize)arg2;
+(CGSize)suggestFrameSizeWithAttributedString:(id)arg1 maximumNumberOfLines:(int)arg2 constrainedTo:(CGSize)arg3;
-(void)setTextShadowOffset:(CGSize)arg1;
-(void)setInitialTextColor:(id)arg1;
-(void)setAttString:(id)arg1;
-(void)setShouldNotVerticalAlign:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)drawRect:(CGRect)arg1;
-(id)initWithCoder:(id)arg1;
-(void)setMaximumNumberOfLines:(int)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)setHighlightedTextColor:(id)arg1;
-(void).cxx_destruct;
-(void)setTextShadowColor:(id)arg1;
@end