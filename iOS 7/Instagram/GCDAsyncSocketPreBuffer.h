/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:12 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GCDAsyncSocketPreBuffer : NSObject {
	char* preBuffer; 
	unsigned long preBufferSize; 
	char* readPointer; 
	char* writePointer; 
}
-(void)ensureCapacityForWrite:(unsigned long)arg1;
-(unsigned long)availableBytes;
-(char*)readBuffer;
-(void)getReadBuffer:(char**)arg1 availableBytes:(unsigned*)arg2;
-(void)didRead:(unsigned long)arg1;
-(unsigned long)availableSpace;
-(void)getWriteBuffer:(char**)arg1 availableSpace:(unsigned*)arg2;
-(void)didWrite:(unsigned long)arg1;
-(char*)writeBuffer;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long)arg1;
-(void)reset;
@end