/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:02 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineShopPurchaseOrderResponse : NSObject {
	NSString* __orderId; 
	NSDictionary* __attributes; 
	NSString* __billingConfirmUrl; 
	struct {
	} __isSet; 
}
@property (nonatomic,retain) NSString* orderId; 				//@synthesize _orderId=__orderId - In the implementation block
@property (nonatomic,retain) NSDictionary* attributes; 				//@synthesize _attributes=__attributes - In the implementation block
@property (nonatomic,retain) NSString* billingConfirmUrl; 				//@synthesize _billingConfirmUrl=__billingConfirmUrl - In the implementation block
-(void)read:(id)arg1;
-(void)setOrderId:(id)arg1;
-(void)setBillingConfirmUrl:(id)arg1;
-(void)setAttributes:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end