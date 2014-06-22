/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:04 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MKAnnotation.h>

@interface IGEditBubbleAnnotation : NSObject <MKAnnotation> {
	BOOL _isBeingRemoved; 
	struct {
		double latitude;
		double longitude;
	} _coordinate; 
}
@property (assign,nonatomic) struct coordinate; 				//@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) BOOL isBeingRemoved; 				//@synthesize isBeingRemoved=_isBeingRemoved - In the implementation block
@property (nonatomic,copy) NSString* title; 
@property (nonatomic,copy) NSString* subtitle; 
-(void)setIsBeingRemoved:(BOOL)arg1;
-(void)setCoordinate:(struct )arg1;
-(id)initWithCoordinate:(struct )arg1;
@end