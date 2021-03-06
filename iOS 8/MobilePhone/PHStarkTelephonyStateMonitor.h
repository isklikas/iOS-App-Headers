//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHStarkTelephonyStateMonitor : NSObject
{
    int _state;
    id <PHStarkTelephonyStateMonitorDelegate> _delegate;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property id <PHStarkTelephonyStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_phoneApplicationDisplayedCallsChangedNotification:(id)arg1;
- (void)stopMonitoringTelephonyState;
- (void)startMonitoringTelephonyState;
- (int)currentState;
- (void)dealloc;
- (id)init;

@end

