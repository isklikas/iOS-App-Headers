/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:41 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LEGYOutputStream : NSOutputStream {
	NSMutableData* _data; 
}
@property (nonatomic,copy) NSMutableData* data; 				//@synthesize data=_data - In the implementation block
-(int)write:(r*)arg1 maxLength:(unsigned)arg2;
-(BOOL)hasSpaceAvailable;
-(id)init;
-(void)close;
-(void).cxx_destruct;
-(void)open;
@end