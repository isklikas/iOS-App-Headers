/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:38 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2DescribeSecurityGroupsResponse : EC2Response {
	NSMutableArray* securityGroups; 
}
@property (nonatomic,retain) NSMutableArray* securityGroups; 
-(id)securityGroupsObjectAtIndex:(int)arg1;
-(void)setSecurityGroups:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setException:(id)arg1;
@end