/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:44:40 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface TFSessionManager : NSObject {
	NSString* _appToken; 
	NSURL* _url; 
	double _tfSessionKeepAliveTimeout; 
	double _startTime; 
	double _fragmentStartTime; 
	double _lastSessionEndTime; 
	struct {
		BOOL applicationTokenValid;
		BOOL sendsCheckpoints;
		BOOL sendsLogs;
		BOOL sendsCrashes;
	} _serverPermissions; 
	TFTimer* _persistSessionTimer; 
	TFEventManager* _eventManager; 
	NSMutableArray* _eventsRecordedOutOfSession; 
	BOOL _sendLogOnlyOnCrash; 
	double _sessionKeepAliveTimeout; 
	unsigned _nextSeqNumber; 
	BOOL _inSession; 
	NSString* _sessionID; 
}
@property (assign) BOOL sendLogOnlyOnCrash; 				//@synthesize sendLogOnlyOnCrash=_sendLogOnlyOnCrash - In the implementation block
@property (assign,nonatomic) double sessionKeepAliveTimeout; 				//@synthesize sessionKeepAliveTimeout=_sessionKeepAliveTimeout - In the implementation block
@property (assign,nonatomic) BOOL inSession; 				//@synthesize inSession=_inSession - In the implementation block
@property (nonatomic,copy) NSString* sessionID; 				//@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned nextSeqNumber; 				//@synthesize nextSeqNumber=_nextSeqNumber - In the implementation block
+(id)sharedSessionManager;
-(void)startSession:(BOOL)arg1;
-(void)_loadPermissions;
-(id)getNumberOrNilFrom:(id)arg1 withKey:(id)arg2;
-(void)setInSession:(BOOL)arg1;
-(double)unixTime;
-(id)getUUID;
-(void)setNextSeqNumber:(unsigned)arg1;
-(void)recordEvent:(id)arg1 withDictionary:(id)arg2 highPriority:(BOOL)arg3;
-(void)saveEndSessionInformation;
-(void)saveLastSessionInformation;
-(void)doApiHandshake;
-(void)recordEvent:(id)arg1 withDictionary:(id)arg2;
-(void)respondTofeedback:(id)arg1 feedbackType:(id)arg2;
-(BOOL)shouldSendLogs;
-(id)currentSessionInformation;
-(unsigned)useSeqNumber;
-(void)deleteSavedEndSessionInformationForSessionID:(id)arg1;
-(id)sessionIDsWithOldSavedSessionInformation;
-(id)savedEndSessionInformationForSessionID:(id)arg1;
-(id)sequenceNumberPathForSessionID:(id)arg1;
-(void)finishedHandshakeWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
-(void)_savePermissions;
-(id)sessionFilePathForFileName:(id)arg1 extension:(id)arg2;
-(void)setApplicationToken:(id)arg1;
-(void)checkpointHit:(id)arg1 withParameters:(id)arg2;
-(void)respondToFeedbackCustom:(id)arg1;
-(void)endSession:(BOOL)arg1;
-(void)endOldSessions;
-(void)sendOldCrashReport:(id)arg1;
-(id)getStringOrNilFrom:(id)arg1 withKey:(id)arg2;
-(void)setSendLogOnlyOnCrash:(BOOL)arg1;
-(void)setSessionKeepAliveTimeout:(double)arg1;
-(void)dealloc;
-(id)init;
-(void)setSessionID:(id)arg1;
-(void)recordEvent:(id)arg1;
-(void).cxx_destruct;
@end