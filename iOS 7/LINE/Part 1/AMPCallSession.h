/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:31 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPCallSession : AMPSession {
	id<AMPCallSessionDelegate> mDelegate; 
	int mDirection; 
}
@property (assign,nonatomic) id<AMPCallSessionDelegate> delegate; 
@property (getter=isDTMFSupported,nonatomic,copy) BOOL DTMFSupported; 
@property (nonatomic,copy) int direction; 
+(id)sessionWithOptions:(id)arg1;
+(id)callSessionWithName:(id)arg1 userInfo:(id)arg2 options:(id)arg3 error:(id*)arg4;
+(id)responseSessionWithUserInfo:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(BOOL)mixWaveFileAtPath:(id)arg1 repeat:(int)arg2 error:(id*)arg3;
-(void)sendDTMF:(id)arg1;
-(BOOL)cancelWithCallKey:(id)arg1 deviceKey:(id)arg2 reason:(id)arg3 error:(id*)arg4;
-(BOOL)startVideo:(id*)arg1;
-(BOOL)stopVideo:(id*)arg1;
-(BOOL)acceptWithOptions:(id)arg1 error:(id*)arg2;
-(id)defaultOptions;
-(BOOL)stopVideoWithReason:(int)arg1 error:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(BOOL)accept:(id*)arg1;
@end