/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:25 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2DescribeInstanceStatusRequest : AmazonServiceRequestConfig {
	NSMutableArray* instanceIds; 
	NSMutableArray* filters; 
	NSString* nextToken; 
	NSNumber* maxResults; 
	_Bool includeAllInstances; 
	_Bool includeAllInstancesIsSet; 
}
@property (nonatomic,retain) NSMutableArray* instanceIds; 
@property (nonatomic,retain) NSMutableArray* filters; 
@property (nonatomic,retain) NSString* nextToken; 
@property (nonatomic,retain) NSNumber* maxResults; 
@property (assign,nonatomic) _Bool includeAllInstances; 
@property (nonatomic,copy) _Bool includeAllInstancesIsSet; 
-(void)setNextToken:(id)arg1;
-(void)addInstanceId:(id)arg1;
-(void)setIncludeAllInstances:(_Bool)arg1;
-(void)setInstanceIds:(id)arg1;
-(void)setMaxResults:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setFilters:(id)arg1;
-(void)addFilter:(id)arg1;
@end