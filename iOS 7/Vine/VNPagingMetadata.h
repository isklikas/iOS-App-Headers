/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:16 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNPagingMetadata : NSObject {
	unsigned _count; 
	NSNumber* _nextPage; 
	NSNumber* _previousPage; 
	unsigned _pageSize; 
	NSString* _anchor; 
	NSString* _title; 
}
@property (assign,nonatomic) unsigned count; 				//@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber* nextPage; 				//@synthesize nextPage=_nextPage - In the implementation block
@property (nonatomic,retain) NSNumber* previousPage; 				//@synthesize previousPage=_previousPage - In the implementation block
@property (assign,nonatomic) unsigned pageSize; 				//@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,retain) NSString* anchor; 				//@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSString* title; 				//@synthesize title=_title - In the implementation block
-(id)initWithJSON:(id)arg1;
-(void)setNextPage:(id)arg1;
-(void)setPreviousPage:(id)arg1;
-(void)setPageSize:(unsigned)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(void)setCount:(unsigned)arg1;
-(void)setAnchor:(id)arg1;
-(void).cxx_destruct;
@end