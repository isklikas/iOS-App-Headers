/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:00 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NJPurchaseProductInfo : NSObject {
	NSString* mProductId; 
	NSString* mLocation; 
	NSString* mCurrency; 
	NSDecimalNumber* mPrice; 
	NSString* mReceiverUserHash; 
	unsigned mQuantity; 
	NSString* mRemoteIP; 
}
@property (nonatomic,copy) NSString* productId; 
@property (nonatomic,copy) NSString* location; 
@property (nonatomic,copy) NSString* currency; 
@property (nonatomic,copy) NSDecimalNumber* price; 
@property (nonatomic,retain) NSString* receiverUserHash; 
@property (assign,nonatomic) unsigned quantity; 
@property (nonatomic,retain) NSString* remoteIP; 
+(id)productInfoWithProductId:(id)arg1 location:(id)arg2 currency:(id)arg3 price:(id)arg4;
-(void)setReceiverUserHash:(id)arg1;
-(id)initWithProductId:(id)arg1 location:(id)arg2 currency:(id)arg3 price:(id)arg4;
-(id)jsonNodes;
-(void)setRemoteIP:(id)arg1;
-(BOOL)validate;
-(void)setQuantity:(unsigned)arg1;
-(void)dealloc;
-(id)parameters;
@end