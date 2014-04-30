/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:59 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2AssociateAddressRequest : AmazonServiceRequestConfig {
	NSString* instanceId; 
	NSString* publicIp; 
	NSString* allocationId; 
	NSString* networkInterfaceId; 
	NSString* privateIpAddress; 
	_Bool allowReassociation; 
	_Bool allowReassociationIsSet; 
}
@property (nonatomic,retain) NSString* instanceId; 
@property (nonatomic,retain) NSString* publicIp; 
@property (nonatomic,retain) NSString* allocationId; 
@property (nonatomic,retain) NSString* networkInterfaceId; 
@property (nonatomic,retain) NSString* privateIpAddress; 
@property (assign,nonatomic) _Bool allowReassociation; 
@property (nonatomic,copy) _Bool allowReassociationIsSet; 
-(void)setInstanceId:(id)arg1;
-(void)setPublicIp:(id)arg1;
-(void)setAllocationId:(id)arg1;
-(void)setNetworkInterfaceId:(id)arg1;
-(void)setPrivateIpAddress:(id)arg1;
-(id)initWithInstanceId:(id)arg1 andPublicIp:(id)arg2;
-(void)setAllowReassociation:(_Bool)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end