/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:39 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingCreateAppCookieStickinessPolicyRequest : AmazonServiceRequestConfig {
	NSString* loadBalancerName; 
	NSString* policyName; 
	NSString* cookieName; 
}
@property (nonatomic,retain) NSString* loadBalancerName; 
@property (nonatomic,retain) NSString* policyName; 
@property (nonatomic,retain) NSString* cookieName; 
-(void)setCookieName:(id)arg1;
-(id)initWithLoadBalancerName:(id)arg1 andPolicyName:(id)arg2 andCookieName:(id)arg3;
-(void)setLoadBalancerName:(id)arg1;
-(void)setPolicyName:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end