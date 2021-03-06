/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:26 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>
#import <NSCopying.h>

@interface CPTPlotSymbol : NSObject <NSCoding, NSCopying> {
	CGPoint anchorPoint; 
	CGSize size; 
	int symbolType; 
	CPTLineStyle* lineStyle; 
	CPTFill* fill; 
	struct CGPath* cachedSymbolPath; 
	struct CGPath* customSymbolPath; 
	BOOL usesEvenOddClipRule; 
	struct CGLayer* cachedLayer; 
	CPTShadow* shadow; 
}
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) int symbolType; 
@property (nonatomic,retain) CPTLineStyle* lineStyle; 
@property (nonatomic,retain) CPTFill* fill; 
@property (nonatomic,copy) CPTShadow* shadow; 
@property (assign,nonatomic) struct CGPath* customSymbolPath; 
@property (assign,nonatomic) BOOL usesEvenOddClipRule; 
@property (assign,nonatomic,@dynamic) struct CGPath* cachedSymbolPath; 
@property (assign,nonatomic) struct CGLayer* cachedLayer; 
+(id)plotSymbol;
+(id)crossPlotSymbol;
+(id)ellipsePlotSymbol;
+(id)rectanglePlotSymbol;
+(id)plusPlotSymbol;
+(id)starPlotSymbol;
+(id)diamondPlotSymbol;
+(id)trianglePlotSymbol;
+(id)pentagonPlotSymbol;
+(id)hexagonPlotSymbol;
+(id)dashPlotSymbol;
+(id)snowPlotSymbol;
+(id)customPlotSymbolWithPath:(struct CGPath*)arg1;
-(void)renderInContext:(struct CGContext*)arg1 atPoint:(CGPoint)arg2 scale:(float)arg3 alignToPixels:(BOOL)arg4;
-(void)renderAsVectorInContext:(struct CGContext*)arg1 atPoint:(CGPoint)arg2 scale:(float)arg3;
-(void)setLineStyle:(id)arg1;
-(void)setCachedSymbolPath:(struct CGPath*)arg1;
-(struct CGPath*)newSymbolPath;
-(void)setCachedLayer:(struct CGLayer*)arg1;
-(void)setCustomSymbolPath:(struct CGPath*)arg1;
-(void)setUsesEvenOddClipRule:(BOOL)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(void)setSize:(CGSize)arg1;
-(void)setAnchorPoint:(CGPoint)arg1;
-(void)setShadow:(id)arg1;
-(void)setFill:(id)arg1;
-(void)setSymbolType:(int)arg1;
-(void)finalize;
@end