/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:33 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineCoinUseReservationItem : NSObject {
	NSString* __itemId; 
	NSString* __itemName; 
	int __amount; 
	struct {
		unsigned int amount:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* itemId; 				//@synthesize _itemId=__itemId - In the implementation block
@property (nonatomic,retain) NSString* itemName; 				//@synthesize _itemName=__itemName - In the implementation block
@property (assign,nonatomic) int amount; 				//@synthesize _amount=__amount - In the implementation block
-(void)read:(id)arg1;
-(void)setAmount:(int)arg1;
-(void)setItemId:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
-(void)setItemName:(id)arg1;
@end