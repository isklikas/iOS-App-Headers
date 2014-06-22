/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:35 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <GCDAsyncSocketDelegate.h>
#import <IGVideoRequestDelegate.h>

@interface IGVideoProxy : NSObject <GCDAsyncSocketDelegate, IGVideoRequestDelegate> {
	GCDAsyncSocket* _listenSocket; 
	NSMutableDictionary* _requestsForURL; 
	NSMutableDictionary* _requestsForSocket; 
	NSMutableDictionary* _listeners; 
	NSMutableSet* _sockets; 
	unsigned _listeningPort; 
	NSMutableSet* _whiteListedRemoteURLs; 
}
+(id)sharedProxy;
-(void)startVideoRequestForURL:(id)arg1;
-(void)cancelVideoRequestForURL:(id)arg1;
-(id)proxyURLForURL:(id)arg1;
-(void)addWhiteListedURL:(id)arg1;
-(void)removeWhiteListedURL:(id)arg1;
-(BOOL)downloadLikelyToKeepUp;
-(void)onAppDidBecomeActive;
-(void)listen;
-(void)onAppDidEnterBackground;
-(void)onVideoPlaybackError:(id)arg1;
-(id)remoteURLforProxyURL:(id)arg1;
-(void)cancelMediaLoaderRequestForURL:(id)arg1;
-(id)videoRequestForURL:(id)arg1;
-(unsigned)randomPortNumber;
-(id)CRLFCRLFData;
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)videoRequestDidEnd:(id)arg1 error:(id)arg2;
-(void)dealloc;
-(id)init;
-(void)stopAllRequests;
-(void).cxx_destruct;
@end