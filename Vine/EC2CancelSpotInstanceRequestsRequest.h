/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:20 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2CancelSpotInstanceRequestsRequest : AmazonServiceRequestConfig {
	NSMutableArray* spotInstanceRequestIds; 
}
@property (nonatomic,retain) NSMutableArray* spotInstanceRequestIds; 
-(void)setSpotInstanceRequestIds:(id)arg1;
-(id)initWithSpotInstanceRequestIds:(id)arg1;
-(void)addSpotInstanceRequestId:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end