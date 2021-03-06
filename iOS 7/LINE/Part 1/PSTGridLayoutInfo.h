/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:55 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PSTGridLayoutInfo : NSObject {
	NSMutableArray* _sections; 
	CGRect _visibleBounds; 
	CGSize _layoutSize; 
	BOOL _isValid; 
	BOOL _usesFloatingHeaderFooter; 
	BOOL _horizontal; 
	BOOL _leftToRight; 
	NSDictionary* _rowAlignmentOptions; 
	float _dimension; 
	CGSize _contentSize; 
}
@property (nonatomic,retain) NSArray* sections; 				//@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSDictionary* rowAlignmentOptions; 				//@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) BOOL usesFloatingHeaderFooter; 				//@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) float dimension; 				//@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) BOOL horizontal; 				//@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) BOOL leftToRight; 				//@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize; 				//@synthesize contentSize=_contentSize - In the implementation block
-(id)init;
-(id)description;
-(id)snapshot;
-(void)setContentSize:(CGSize)arg1;
-(void)setHorizontal:(BOOL)arg1;
-(void)setSections:(id)arg1;
-(void)invalidate:(BOOL)arg1;
-(id)addSection;
-(void)setRowAlignmentOptions:(id)arg1;
-(void)setDimension:(float)arg1;
-(CGRect)frameForItemAtIndexPath:(id)arg1;
-(void)setUsesFloatingHeaderFooter:(BOOL)arg1;
-(void)setLeftToRight:(BOOL)arg1;
-(void).cxx_destruct;
@end