/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:33 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol IGUsernameViewControllerDelegate
@required
-(void)usernameViewControllerDidSwitchToEmailFlow(id):arg1 ;
-(void)usernameViewControllerDidSwitchToFBFlow(id):arg1 ;
-(void)usernameViewController(id):arg1 requestsLoginToUsername(id):arg2 password(id):arg3 ;
-(void)usernameViewControllerDidSwitchToEmailFlow(id):arg1 ;
-(void)usernameViewControllerDidSwitchToFBFlow(id):arg1 ;
-(void)usernameViewController(id):arg1 requestsLoginToUsername(id):arg2 password(id):arg3 ;
@end

@protocol IGNavigationControllerDelegate
@optional
-(void)navigationController(id):arg1 willNavigateToViewController(id):arg2 ;
-(void)navigationController(id):arg1 didNavigateToViewController(id):arg2 animated(BOOL):arg3 ;
@end
