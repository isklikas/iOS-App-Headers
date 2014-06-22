/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:35 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MKAnnotation.h>

@interface IGLocationAnnotation : NSObject <MKAnnotation> {
	IGLocation* _location; 
}
@property (nonatomic,copy) struct coordinate; 
@property (nonatomic,retain) IGLocation* location; 				//@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString* title; 
@property (nonatomic,copy) NSString* subtitle; 
-(id)initWithLocation:(id)arg1;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1;
@end