//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSString;

@protocol PHAudioRecorderDelegate
- (void)audioRecorderEndedWithFile:(NSString *)arg1 duration:(double)arg2 error:(NSError *)arg3;
- (void)audioRecorderContinuedWithFile:(NSString *)arg1 duration:(double)arg2;
- (void)audioRecorderStartedWithFile:(NSString *)arg1;
@end

