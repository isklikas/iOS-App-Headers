/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:19:02 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AlertController : NSObject {
}
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3;
+(id)alertQueue;
+(void)showNextAlert;
+(void)queueAlert:(id)arg1;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonsAndHandlers:(id)arg3 cancelButtonIndex:(int)arg4;
+(void)dequeueAlert:(id)arg1;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3 target:(id)arg4 action:(SEL)arg5 withCancelButton:(BOOL)arg6;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 target:(id)arg3 acceptSelector:(SEL)arg4 cancelSelector:(SEL)arg5 acceptButtonText:(id)arg6 cancelButtonText:(id)arg7;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 redirectTo:(id)arg3 quitButtonText:(id)arg4 redirectButtonText:(id)arg5;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 redirectTo:(id)arg3 cancelButtonText:(id)arg4 redirectButtonText:(id)arg5;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 redirectTo:(id)arg3 authenticatedAs:(id)arg4 withPassword:(id)arg5 cancelButtonText:(id)arg6 redirectButtonText:(id)arg7;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonsAndHandlers:(id)arg3;
+(void)setDelegate:(id)arg1;
+(id)delegate;
+(void)showAlertWithTitle:(id)arg1 message:(id)arg2;
@end