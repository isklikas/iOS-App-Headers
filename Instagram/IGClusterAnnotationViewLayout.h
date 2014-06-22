/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:27 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGClusterAnnotationViewLayout : NSObject {
	int _spacing; 
	int _fullScreenSquareDimension; 
	BOOL _adjustOrigin; 
	int _numTiles; 
	BOOL _hasShowMoreButton; 
	struct {
		int numRows;
		int numSquaresPerRow;
		int squareDimension;
	} _largeRows; 
	struct {
		int numRows;
		int numSquaresPerRow;
		int squareDimension;
	} _smallRows; 
}
@property (assign,nonatomic) struct largeRows; 				//@synthesize largeRows=_largeRows - In the implementation block
@property (assign,nonatomic) struct smallRows; 				//@synthesize smallRows=_smallRows - In the implementation block
+(id)forNumberOfTiles:(int)arg1 withShowMoreButton:(BOOL)arg2 adjustOrigin:(BOOL)arg3;
-(id)initWithNumberOfTiles:(int)arg1 withShowMoreButton:(BOOL)arg2 adjustOrigin:(BOOL)arg3;
-(float)totalHeight;
-(CGRect)frameForInfoButton:(BOOL)arg1;
-(float)totalWidthInFullScreen:(BOOL)arg1;
-(float)totalHeightIncludingShowMoreButton;
-(CGRect)adjustRect:(CGRect)arg1;
-(CGRect)frameForFullScreenTile:(int)arg1;
-(float)totalWidth;
-(BOOL)shouldRecenterTileInFullScreen;
-(float)totalHeightIncludingInfoButton;
-(CGPoint)centerOfExplodedClusterInView:(id)arg1;
-(BOOL)isLargeImage:(int)arg1;
-(CGRect)frameForExplodedTile:(int)arg1;
-(CGRect)frameForShowMoreButton:(id)arg1 forFullScreen:(BOOL)arg2;
-(BOOL)shouldFadeOutOtherTilesInFullScreen;
-(void)setLargeRows:(struct )arg1;
-(void)setSmallRows:(struct )arg1;
@end