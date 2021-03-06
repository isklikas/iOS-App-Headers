/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPFacebookSSO : NSObject {
	id _onCompleteBlock; 
	id _appBecameActiveObservation; 
	FBRequest* _getUserIdRequest; 
	FBRequestConnection* _requestConnection; 
}
@property (nonatomic,copy) id onCompleteBlock; 				//@synthesize onCompleteBlock=_onCompleteBlock - In the implementation block
@property (nonatomic,retain) id appBecameActiveObservation; 				//@synthesize appBecameActiveObservation=_appBecameActiveObservation - In the implementation block
@property (nonatomic,retain) FBRequest* getUserIdRequest; 				//@synthesize getUserIdRequest=_getUserIdRequest - In the implementation block
@property (nonatomic,retain) FBRequestConnection* requestConnection; 				//@synthesize requestConnection=_requestConnection - In the implementation block
-(void)cancelFBAuth;
-(void)setRequestConnection:(id)arg1;
-(void)setAppBecameActiveObservation:(id)arg1;
-(void)setOnCompleteBlock:(id)arg1;
-(void)setGetUserIdRequest:(id)arg1;
-(void)endAppActivationGuard;
-(void)completeWithToken:(id)arg1 error:(id)arg2;
-(void)fbDidLogin;
-(BOOL)handleOpenURL:(id)arg1;
-(void)fbDidNotLogin:(BOOL)arg1;
-(void)beginAppActivationGuard;
-(void)openActiveSessionWithMMSURL:(id)arg1;
-(void)attemptFacebookSSO:(id)arg1;
-(void)attemptFacebookMMS:(id)arg1 block:(id)arg2;
-(void)fbDidExtendToken:(id)arg1 expiresAt:(id)arg2;
-(void)fbDidLogout;
-(void)fbSessionInvalidated;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2;
-(void)requestLoading:(id)arg1;
-(void)dealloc;
@end