/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SinaWeiboDelegate
@optional
-(void)sinaweiboDidLogIn(id):arg1 ;
-(void)sinaweiboDidLogOut(id):arg1 ;
-(void)sinaweiboLogInDidCancel(id):arg1 ;
-(void)sinaweibo(id):arg1 logInDidFailWithError(id):arg2 ;
-(void)sinaweibo(id):arg1 accessTokenInvalidOrExpired(id):arg2 ;
@end

@protocol SinaWeiboRequestDelegate
@optional
-(void)request(id):arg1 didReceiveResponse(id):arg2 ;
-(void)request(id):arg1 didReceiveRawData(id):arg2 ;
-(void)request(id):arg1 didFinishLoadingWithResult(id):arg2 ;
-(void)request(id):arg1 didFailWithError(id):arg2 ;
@end
