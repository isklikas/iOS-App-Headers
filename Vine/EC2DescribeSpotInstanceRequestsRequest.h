/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:27 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2DescribeSpotInstanceRequestsRequest : AmazonServiceRequestConfig {
	NSMutableArray* spotInstanceRequestIds; 
	NSMutableArray* filters; 
}
@property (nonatomic,retain) NSMutableArray* spotInstanceRequestIds; 
@property (nonatomic,retain) NSMutableArray* filters; 
-(void)setSpotInstanceRequestIds:(id)arg1;
-(void)addSpotInstanceRequestId:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setFilters:(id)arg1;
-(void)addFilter:(id)arg1;
@end