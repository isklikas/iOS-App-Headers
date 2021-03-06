/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:28 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <CPTResponder.h>
#import <NSCoding.h>
typedef struct{
	unsigned int : value1;
	8 value2;
	unsigned int : value3;
	4 value4;
	unsigned int : value5;
	1 value6;
	unsigned int : value7;
	1 value8;
	unsigned int : value9;
	1 value10;
	8 value11;
	[ value12;
	8 value13;
	unsigned short value14;
	[] value15;
} WCStruct_b8b4b1b1b18[8S];


@interface CPTPlotSpace : NSObject <CPTResponder, NSCoding> {
	CPTGraph* graph; 
	id<NSCopying><NSCoding><NSObject> identifier; 
	id<CPTPlotSpaceDelegate> delegate; 
	BOOL allowsUserInteraction; 
}
@property (nonatomic,copy) id<NSCopying><NSCoding><NSObject> identifier; 
@property (assign,nonatomic) BOOL allowsUserInteraction; 
@property (assign,nonatomic) CPTGraph* graph; 
@property (assign,nonatomic) id<CPTPlotSpaceDelegate> delegate; 
-(void)scaleToFitPlots:(id)arg1;
-(BOOL)pointingDeviceDownEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(id)plotRangeForCoordinate:(int)arg1;
-(CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double*)arg1;
-(CGPoint)plotAreaViewPointForPlotPoint:(WCStruct_b8b4b1b1b18[8S]*)arg1;
-(BOOL)pointingDeviceUpEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(BOOL)pointingDeviceDraggedEvent:(struct UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(BOOL)pointingDeviceCancelledEvent:(struct UIEvent*)arg1;
-(void)setAllowsUserInteraction:(BOOL)arg1;
-(void)plotPoint:(WCStruct_b8b4b1b1b18[8S]*)arg1 forPlotAreaViewPoint:(CGPoint)arg2;
-(void)doublePrecisionPlotPoint:(double*)arg1 forPlotAreaViewPoint:(CGPoint)arg2;
-(CGPoint)plotAreaViewPointForEvent:(struct UIEvent*)arg1;
-(void)plotPoint:(WCStruct_b8b4b1b1b18[8S]*)arg1 forEvent:(struct UIEvent*)arg2;
-(void)doublePrecisionPlotPoint:(double*)arg1 forEvent:(struct UIEvent*)arg2;
-(void)setPlotRange:(id)arg1 forCoordinate:(int)arg2;
-(void)setScaleType:(int)arg1 forCoordinate:(int)arg2;
-(int)scaleTypeForCoordinate:(int)arg1;
-(void)scaleBy:(float)arg1 aboutPoint:(CGPoint)arg2;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setIdentifier:(id)arg1;
-(void)setGraph:(id)arg1;
@end