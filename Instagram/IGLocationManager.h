/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:27 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <CLLocationManagerDelegate.h>

@interface IGLocationManager : NSObject <CLLocationManagerDelegate> {
	CLLocationManager* _locationManager; 
	CLLocation* _lastGoodLocation; 
	NSTimer* _locationTimer; 
	NSDate* _appOpenDate; 
	BOOL _isLocating; 
}
@property (nonatomic,copy) CLLocation* currentLocation; 
@property (nonatomic,copy) BOOL isLocating; 				//@synthesize isLocating=_isLocating - In the implementation block
+(id)sharedLocationManager;
-(void)startUpdatingLocationWithTimeout:(double)arg1;
-(void)startUpdatingLocationWithTimeout:(double)arg1 force:(BOOL)arg2;
-(void)timeoutLocationUpdate;
-(BOOL)isRecentLocation:(id)arg1;
-(BOOL)isCachedLocation:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void).cxx_destruct;
@end