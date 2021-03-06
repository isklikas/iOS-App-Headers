/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:00 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineChannelDomain : NSObject {
	NSString* __host; 
	BOOL __removed; 
	struct {
		unsigned int removed:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* host; 				//@synthesize _host=__host - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed; 				//@synthesize _removed=__removed - In the implementation block
-(void)read:(id)arg1;
-(void)setRemoved:(BOOL)arg1;
-(void)setHost:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end