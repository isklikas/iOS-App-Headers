/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:19 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MAKVOObservation.h>

@interface _MAKVONotificationHelper : NSObject <MAKVOObservation> {
	id _observer; 
	id _target; 
	NSSet* _keyPaths; 
	unsigned _options; 
	SEL _selector; 
	id _userInfo; 
}
-(void)deregister;
-(id)initWithObserver:(id)arg1 object:(id)arg2 keyPaths:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 options:(unsigned)arg6;
-(BOOL)isValid;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)remove;
-(void).cxx_destruct;
@end