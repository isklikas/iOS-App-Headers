/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:18 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface MBLocation : NSObject <NSCoding> {
	NSString* mName; 
	struct {
		double latitude;
		double longitude;
	} mCoordinate; 
}
@property (nonatomic,copy) NSString* name; 
@property (nonatomic,copy) struct coordinate; 
-(id)initWithLocationInfo:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void).cxx_destruct;
@end