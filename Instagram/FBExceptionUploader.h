/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:18 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSURLConnectionDataDelegate.h>

@interface FBExceptionUploader : NSObject <NSURLConnectionDataDelegate> {
	FBExceptionHandler* _exceptionHandler; 
	id _successBlock; 
	NSURL* _url; 
}
-(id)initWithExceptionHandler:(id)arg1 successBlock:(id)arg2 url:(id)arg3;
-(void)sendPOSTRequest:(id)arg1 userAgent:(id)arg2 connectionFactory:(id)arg3;
-(void)_onUploadDone;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void).cxx_destruct;
@end