/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:36 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ShareToFacebookJob : NSObject {
	id _block; 
	struct ShareToFacebookCallback _callback; 
}
-(id)initWithUrl:(id)arg1 message:(id)arg2 onComplete:(id)arg3;
-(BOOL)shareUrl:(id)arg1 message:(id)arg2;
-(void)completeWithSuccess:(BOOL)arg1;
-(void)dealloc;
-(void)invalidate;
-(id).cxx_construct;
@end