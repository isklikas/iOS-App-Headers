/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineShopDetailedProductList : NSObject {
	NSArray* __productList; 
	int __offset; 
	int __totalSize; 
	struct {
		unsigned int offset:1;
		unsigned int totalSize:1;
	} __isSet; 
}
@property (nonatomic,retain) NSArray* productList; 				//@synthesize _productList=__productList - In the implementation block
@property (assign,nonatomic) int offset; 				//@synthesize _offset=__offset - In the implementation block
@property (assign,nonatomic) int totalSize; 				//@synthesize _totalSize=__totalSize - In the implementation block
-(void)read:(id)arg1;
-(void)setProductList:(id)arg1;
-(void)setOffset:(int)arg1;
-(BOOL)hasNext;
-(void)setTotalSize:(int)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end