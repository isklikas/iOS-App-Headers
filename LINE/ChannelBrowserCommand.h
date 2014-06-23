/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:19 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ChannelBrowserCommand : CDVPlugin {
	NSString* shakeCallbackID; 
	NSString* resizeCallbackID; 
	NSString* installStatusCallbackID; 
	NSString* launchStatusCallBackID; 
}
@property (nonatomic,retain) NSString* shakeCallbackID; 
@property (nonatomic,retain) NSString* resizeCallbackID; 
@property (nonatomic,retain) NSString* installStatusCallbackID; 
@property (nonatomic,retain) NSString* launchStatusCallBackID; 
-(id)currentBrowser;
-(void)setShakeCallbackID:(id)arg1;
-(void)setResizeCallbackID:(id)arg1;
-(void)openBrowser:(id)arg1 withDict:(id)arg2;
-(void)closeBrowser:(id)arg1 withDict:(id)arg2;
-(void)rotateBrowser:(id)arg1 withDict:(id)arg2;
-(void)showStatusBar:(id)arg1 withDict:(id)arg2;
-(void)hideStatusBar:(id)arg1 withDict:(id)arg2;
-(void)watchShaking:(id)arg1 withDict:(id)arg2;
-(void)unwatchShaking:(id)arg1 withDict:(id)arg2;
-(void)callbackShakeEvent;
-(void)watchSizeChanged:(id)arg1 withDict:(id)arg2;
-(void)unwatchSizeChanged:(id)arg1 withDict:(id)arg2;
-(void)callbackResizeEvent:(CGSize)arg1;
-(void)enableScrollToTop:(id)arg1 withDict:(id)arg2;
-(void)applicationInstallStatus:(id)arg1 withDict:(id)arg2;
-(void)applicationLaunchStatus:(id)arg1 withDict:(id)arg2;
-(void)setInstallStatusCallbackID:(id)arg1;
-(void)setLaunchStatusCallBackID:(id)arg1;
-(void).cxx_destruct;
@end