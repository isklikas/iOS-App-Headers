//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVController, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface PHVoicemailAudioController : NSObject
{
    NSString *_category;
    AVController *_avController;
    NSObject<OS_dispatch_queue> *_avControllerQueue;
    NSNumber *_currentTimeOverride;
}

@property(retain) NSNumber *currentTimeOverride; // @synthesize currentTimeOverride=_currentTimeOverride;
- (void)_mediaServerDied:(id)arg1;
- (void)_avControllerTimeJumpedAfterReset:(id)arg1;
@property double currentTime; // @dynamic currentTime;
@property(readonly) AVController *avController;
- (void)dealloc;
- (id)initForVoicemailGreeting;
- (id)initForVoicemail;
- (id)_initWithCategory:(id)arg1;

@end

