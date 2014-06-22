/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:14 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface HTTPMessage : NSObject {
	struct __CFHTTPMessage* message; 
}
-(id)initEmptyRequest;
-(id)initResponseWithStatusCode:(int)arg1 description:(id)arg2 version:(id)arg3;
-(void)setHeaderField:(id)arg1 value:(id)arg2;
-(id)headerField:(id)arg1;
-(id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3;
-(BOOL)isHeaderComplete;
-(id)allHeaderFields;
-(void)dealloc;
-(id)body;
-(struct _NSRange)range;
-(id)url;
-(BOOL)appendData:(id)arg1;
-(int)statusCode;
-(id)method;
-(id)version;
-(void)setBody:(id)arg1;
-(id)messageData;
@end