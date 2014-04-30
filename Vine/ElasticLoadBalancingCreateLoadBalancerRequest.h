/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:35 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingCreateLoadBalancerRequest : AmazonServiceRequestConfig {
	NSString* loadBalancerName; 
	NSMutableArray* listeners; 
	NSMutableArray* availabilityZones; 
	NSMutableArray* subnets; 
	NSMutableArray* securityGroups; 
}
@property (nonatomic,retain) NSString* loadBalancerName; 
@property (nonatomic,retain) NSMutableArray* listeners; 
@property (nonatomic,retain) NSMutableArray* availabilityZones; 
@property (nonatomic,retain) NSMutableArray* subnets; 
@property (nonatomic,retain) NSMutableArray* securityGroups; 
-(id)initWithLoadBalancerName:(id)arg1;
-(id)initWithLoadBalancerName:(id)arg1 andListeners:(id)arg2 andAvailabilityZones:(id)arg3;
-(void)addSubnet:(id)arg1;
-(void)setLoadBalancerName:(id)arg1;
-(void)setSubnets:(id)arg1;
-(void)addAvailabilityZone:(id)arg1;
-(void)setAvailabilityZones:(id)arg1;
-(void)addSecurityGroup:(id)arg1;
-(void)setSecurityGroups:(id)arg1;
-(void)setListeners:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addListener:(id)arg1;
@end