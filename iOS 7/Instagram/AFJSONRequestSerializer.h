/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:09 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {
	unsigned _format; 
	unsigned _writingOptions; 
}
@property (assign,nonatomic) unsigned format; 				//@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned writingOptions; 				//@synthesize writingOptions=_writingOptions - In the implementation block
+(id)serializer;
+(id)serializerWithWritingOptions:(unsigned)arg1;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3;
-(void)setWritingOptions:(unsigned)arg1;
-(void)setFormat:(unsigned)arg1;
@end