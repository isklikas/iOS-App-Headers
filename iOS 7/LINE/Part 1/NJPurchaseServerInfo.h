/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:35 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NJPurchaseServerInfo : NSObject {
	NSURL* mShopServerURL; 
	NSURL* mBillingServerURL; 
	NSURL* mBillingOrderIdSettingURL; 
	int mShopPayloadType; 
	int mBillingPayloadType; 
}
@property (nonatomic,copy) NSURL* shopServerURL; 
@property (nonatomic,copy) NSURL* billingServerURL; 
@property (nonatomic,copy) NSURL* billingOrderIdSettingURL; 
@property (assign,nonatomic) int shopPayloadType; 
@property (assign,nonatomic) int billingPayloadType; 
+(id)purchaseServerInfoWithBillingOrderIdSettingURL:(id)arg1;
+(id)purchaseServerInfoWithShopServerURL:(id)arg1 billingServerURL:(id)arg2;
-(id)initWithShopServerURL:(id)arg1 billingServerURL:(id)arg2 billingOrderIdSettingURL:(id)arg3;
-(id)billingServerDomain;
-(void)setShopPayloadType:(int)arg1;
-(void)setBillingPayloadType:(int)arg1;
-(id)requestVerifyReceiptURLWithOrderId:(id)arg1 debugInfo:(id)arg2;
-(BOOL)validate;
-(void)dealloc;
-(id)description;
@end