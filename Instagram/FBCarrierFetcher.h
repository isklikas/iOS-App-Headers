/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:21 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBCarrierFetcher : NSObject {
	FBTelephonyCache* _carrierCache; 
}
@property (nonatomic,copy) FBCarrier* carrier_DEPRECATED; 
-(id)initWithTelephonyCache:(id)arg1;
-(void)fetchCarrierInfo:(id)arg1 queue:(id)arg2;
-(id)init;
-(void).cxx_destruct;
@end