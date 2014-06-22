/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:35 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGMediaMetadataProtocol.h>

@interface IGLocationMetadata : NSObject <IGMediaMetadataProtocol> {
	IGLocation* _venue; 
	NSString* _foursquareRequestID; 
	IGNearbyLocationDataSource* _locationDataSource; 
	CLLocation* _mediaLocation; 
}
@property (assign,nonatomic) BOOL locationEnabled; 
@property (nonatomic,retain) IGLocation* venue; 				//@synthesize venue=_venue - In the implementation block
@property (nonatomic,retain) NSString* foursquareRequestID; 				//@synthesize foursquareRequestID=_foursquareRequestID - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource* locationDataSource; 				//@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,copy) CLLocation* coordinates; 
@property (nonatomic,retain) CLLocation* mediaLocation; 				//@synthesize mediaLocation=_mediaLocation - In the implementation block
-(id)sharingInfo;
-(void)prepareToShare;
-(void)setLocationDataSource:(id)arg1;
-(void)setLocationEnabled:(BOOL)arg1;
-(void)setFoursquareRequestID:(id)arg1;
-(void)setVenue:(id)arg1;
-(id)initWithMediaLocation:(id)arg1;
-(void)setMediaLocation:(id)arg1;
-(void).cxx_destruct;
@end