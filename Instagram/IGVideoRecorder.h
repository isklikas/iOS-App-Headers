/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:39 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGVideoRecorder : NSObject {
	int _frameSamplingInterval; 
	int _state; 
	int _position; 
	IGVideoClipRecorder* _clipRecorder; 
	CGSize _videoSize; 
}
@property (assign,nonatomic) CGSize videoSize; 				//@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) int frameSamplingInterval; 				//@synthesize frameSamplingInterval=_frameSamplingInterval - In the implementation block
@property (assign,nonatomic) int state; 				//@synthesize state=_state - In the implementation block
@property (nonatomic,copy) float runningTime; 
@property (assign,nonatomic) int position; 				//@synthesize position=_position - In the implementation block
@property (nonatomic,retain) IGVideoClipRecorder* clipRecorder; 				//@synthesize clipRecorder=_clipRecorder - In the implementation block
-(void)stopRecordingWithCompletionHandler:(id)arg1;
-(BOOL)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer*)arg1;
-(void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer*)arg1;
-(void)onAppDidBecomeActive;
-(void)setClipRecorder:(id)arg1;
-(void)setFrameSamplingInterval:(int)arg1;
-(void)startRecording;
-(void)dealloc;
-(id)init;
-(void)setState:(int)arg1;
-(void)setPosition:(int)arg1;
-(void)setVideoSize:(CGSize)arg1;
-(void).cxx_destruct;
@end