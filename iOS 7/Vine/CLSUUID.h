/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:03 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CLSUUID : NSObject {
	NSData* _data; 
}
@property (copy) NSData* data; 				//@synthesize data=_data - In the implementation block
+(id)generateWithSegmentData:(id)arg1;
-(id)initWithSegmentData:(id)arg1;
-(BOOL)_populateTime:(char*)arg1;
-(BOOL)_populateSequenceNumber:(char*)arg1;
-(BOOL)_populatePID:(char*)arg1;
-(BOOL)_populateLastComponent:(char*)arg1 segmentBuffer:(r*)arg2;
-(void)dealloc;
-(id)description;
-(id)stringValue;
@end