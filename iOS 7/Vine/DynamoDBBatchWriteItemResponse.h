/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:30 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface DynamoDBBatchWriteItemResponse : DynamoDBResponse {
	NSMutableDictionary* responses; 
	NSMutableDictionary* unprocessedItems; 
}
@property (nonatomic,retain) NSMutableDictionary* responses; 
@property (nonatomic,retain) NSMutableDictionary* unprocessedItems; 
-(id)responsesValueForKey:(id)arg1;
-(id)unprocessedItemsValueForKey:(id)arg1;
-(void)setUnprocessedItems:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setResponses:(id)arg1;
-(void)setException:(id)arg1;
@end