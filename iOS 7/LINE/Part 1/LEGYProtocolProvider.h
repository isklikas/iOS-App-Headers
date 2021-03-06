/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:33 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <LEGYConnectionDelegate.h>
#import <LEGYProtocolDelegate.h>

@interface LEGYProtocolProvider : NSObject <LEGYConnectionDelegate, LEGYProtocolDelegate> {
	LEGYContext* _context; 
	unsigned _behavior; 
	int _negativeResumeCount; 
	double _blockingProtocolPrevPingInterval; 
	double _pingInterval; 
	NSArray* _origins; 
	NSMutableSet* _originsConfirmedOverWiFi; 
	NSMutableSet* _originsConfirmedOverCellular; 
	int _originGroupLevel; 
	id _originFallbackTimer; 
	NSSet* _originsWiFiSet; 
	NSSet* _originsCellularSet; 
	NSSet* _originsDisabledSet; 
	id _originsDisabledExpireTimer; 
	unsigned _pendingConnectionRequestTypes; 
	NSMutableArray* _pendingWiFiConnections; 
	NSMutableArray* _pendingCellularConnections; 
	id<LEGYProtocolDelegate><LEGYProtocolProviderDelegate> _delegate; 
	NSMutableArray[3] _pendingProtocols; 
	LEGYProtocol[3] _protocols; 
	NSMutableArray* _disconnectingProtocols; 
	unsigned _onlineMode; 
	unsigned main_backgroundTaskID; 
	BOOL main_resumedViaApplicationStateChange; 
	LEGYWifiNetworkChecker* _wifiNetworkChecker; 
}
@property (assign,nonatomic) id<LEGYProtocolDelegate><LEGYProtocolProviderDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) LEGYContext* context; 				//@synthesize context=_context - In the implementation block
@property (nonatomic,copy) LEGYWifiNetworkChecker* wifiNetworkChecker; 				//@synthesize wifiNetworkChecker=_wifiNetworkChecker - In the implementation block
@property (getter=isPaused,nonatomic,copy) BOOL paused; 
-(id)protocolForRequestType:(unsigned)arg1 autoconnect:(BOOL)arg2;
-(void)connectionHasConnected:(id)arg1;
-(void)connection:(id)arg1 hasDisconnectedWithError:(id)arg2;
-(void)connection:(id)arg1 readyToRead:(id)arg2;
-(void)connection:(id)arg1 readyToWrite:(id)arg2;
-(void)protocol:(id)arg1 didReceiveSessionKey:(id)arg2;
-(void)protocolHandshakeReciprocated:(id)arg1;
-(void)protocol:(id)arg1 didSendRequest:(id)arg2;
-(void)protocol:(id)arg1 didReceiveResponse:(id)arg2;
-(void)setOriginGroups:(id)arg1;
-(void)legy_reachabilityChanged:(unsigned)arg1;
-(void)main_pause;
-(void)main_resume;
-(void)_resumeAndComeOnline:(BOOL)arg1;
-(id)originsConfirmedForNetworkInterface:(unsigned)arg1;
-(void)setOriginGroupLevel:(int)arg1;
-(void)_resetOriginFallback;
-(void)_addPendingConnectionsIfNecessaryForRequestTypes:(unsigned)arg1;
-(void)_setOriginGroupLevel:(int)arg1 forInterfaces:(unsigned)arg2;
-(void)_addPendingConnectionsForRequestTypes:(unsigned)arg1;
-(void)_fallbackToNextOriginGroup;
-(void)_resetOriginFallbackForInterfaces:(unsigned)arg1;
-(void)reenableDisabledOrigins;
-(void)setProtocol:(id)arg1 forRequestTypes:(unsigned)arg2;
-(void)_pauseAndGoOffline:(BOOL)arg1;
-(void)_startGoingOfflineWithGracePeriod:(double)arg1;
-(void)_disconnectAllExcept:(id)arg1 withGracePeriod:(double)arg2 includingPendingConnections:(BOOL)arg3;
-(void)main_endBackgroundTask;
-(void)main_beginBackgroundTask;
-(void)_notifyOfNoLongerRequiredProtocolsSupportingRequestTypes:(unsigned)arg1 interfaces:(unsigned)arg2;
-(void)_disconnectPendingConnectionsOnInterfaces:(unsigned)arg1 forRequestTypes:(unsigned)arg2;
-(unsigned)requestTypesConnectingOnAnyOfNetworkInterfaces:(unsigned)arg1;
-(BOOL)shouldStayConnected;
-(void)clearOriginsConfirmed;
-(void)_connectToOrigin:(id)arg1 addingToList:(id)arg2;
-(void)_startOriginFallbackTimerForNetworkInterfaces:(unsigned)arg1;
-(void)_finishGoingOfflineWithGracePeriod:(double)arg1;
-(id)allActiveProtocols;
-(void)_disconnectProtocol:(id)arg1 withGracePeriod:(double)arg2;
-(void)notifyOfRequiredProtocolsSupportingRequestTypes:(unsigned)arg1;
-(id)protocolWithConnection:(id)arg1 includingPendingAndDisconnecting:(BOOL)arg2 types:(unsigned*)arg3;
-(void)_redistributeProtocols;
-(BOOL)_removeFromPendingConnections:(id)arg1;
-(void)_checkForRequestTypesThatExhaustedConnections;
-(void)addOriginConfirmed:(id)arg1 onNetworkInterface:(unsigned)arg2;
-(id)initWithOriginGroups:(id)arg1 behavior:(unsigned)arg2 context:(id)arg3;
-(void)notifyOfNoLongerRequiredProtocolsSupportingRequestTypes:(unsigned)arg1;
-(id)protocolForRequestType:(unsigned)arg1;
-(id)protocolWithConnection:(id)arg1 types:(unsigned*)arg2;
-(id)protocolWithRequest:(id)arg1;
-(id)allDisconnectingProtocols;
-(void)disconnectAll;
-(void)disableOriginsWithRequestProtocolTypes:(unsigned)arg1 expiringAfter:(double)arg2;
-(BOOL)canConnect;
-(void)_endBackgroundTask;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(void).cxx_destruct;
-(void)reconnectAll;
@end