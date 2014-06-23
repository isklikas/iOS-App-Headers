/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:46 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBRequestDelegate.h>
#import <FBLoginDialogDelegate.h>

@interface Facebook : NSObject <FBRequestDelegate, FBLoginDialogDelegate> {
	id<FBSessionDelegate> _sessionDelegate; 
	NSMutableSet* _requests; 
	FBSession* _session; 
	FBSessionManualTokenCachingStrategy* _tokenCaching; 
	FBDialog* _fbDialog; 
	NSString* _appId; 
	NSString* _urlSchemeSuffix; 
	BOOL _isExtendingAccessToken; 
	FBRequest* _requestExtendingAccessToken; 
	NSDate* _lastAccessTokenUpdate; 
	FBFrictionlessRequestSettings* _frictionlessRequestSettings; 
	BOOL _hasUpdatedAccessToken; 
}
@property (nonatomic,copy) NSString* accessToken; 
@property (nonatomic,copy) NSDate* expirationDate; 
@property (assign,nonatomic) id<FBSessionDelegate> sessionDelegate; 				//@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (nonatomic,copy) NSString* urlSchemeSuffix; 				//@synthesize urlSchemeSuffix=_urlSchemeSuffix - In the implementation block
@property (nonatomic,copy) BOOL isFrictionlessRequestsEnabled; 
@property (nonatomic,retain) FBSession* session; 				//@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString* appId; 				//@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedAccessToken; 				//@synthesize hasUpdatedAccessToken=_hasUpdatedAccessToken - In the implementation block
@property (nonatomic,retain) FBSessionManualTokenCachingStrategy* tokenCaching; 				//@synthesize tokenCaching=_tokenCaching - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
-(BOOL)handleOpenURL:(id)arg1;
-(id)parseURLParams:(id)arg1;
-(void)logout:(id)arg1;
-(void)setSessionDelegate:(id)arg1;
-(BOOL)isSessionValid;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2;
-(id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2;
-(BOOL)isFrictionlessEnabledForRecipient:(id)arg1;
-(void)requestLoading:(id)arg1;
-(void)request:(id)arg1 didLoad:(id)arg2;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2;
-(BOOL)isFrictionlessEnabledForRecipients:(id)arg1;
-(BOOL)shouldExtendAccessToken;
-(void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2;
-(void)fbDialogNotLogin:(BOOL)arg1;
-(void)setUrlSchemeSuffix:(id)arg1;
-(id)initWithAppId:(id)arg1 urlSchemeSuffix:(id)arg2 andDelegate:(id)arg3;
-(void)invalidateSession;
-(void)observeFinishedContextValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
-(void)observeTokenContextValueForKeyPath:(id)arg1 change:(id)arg2;
-(void)setHasUpdatedAccessToken:(BOOL)arg1;
-(id)requestWithParams:(id)arg1 andDelegate:(id)arg2;
-(void)extendAccessToken;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
-(void)updateSessionIfTokenUpdated;
-(void)extendAccessTokenIfNeeded;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
-(void)dialog:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;
-(void)reloadFrictionlessRecipientCache;
-(id)initWithAppId:(id)arg1 andDelegate:(id)arg2;
-(id)getOwnBaseUrl;
-(void)authorize:(id)arg1;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;
-(void)dialog:(id)arg1 andDelegate:(id)arg2;
-(void)enableFrictionlessRequests;
-(void)setTokenCaching:(id)arg1;
-(void)setSession:(id)arg1;
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)setAccessToken:(id)arg1;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)logout;
-(void)setAppId:(id)arg1;
-(void)setExpirationDate:(id)arg1;
@end