/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:41 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2DescribeSnapshotAttributeRequest : AmazonServiceRequestConfig {
	NSString* snapshotId; 
	NSString* attribute; 
}
@property (nonatomic,retain) NSString* snapshotId; 
@property (nonatomic,retain) NSString* attribute; 
-(void)setSnapshotId:(id)arg1;
-(id)initWithSnapshotId:(id)arg1 andAttribute:(id)arg2;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAttribute:(id)arg1;
@end