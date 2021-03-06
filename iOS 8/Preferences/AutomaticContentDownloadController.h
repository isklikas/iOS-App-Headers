/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

@class NSMutableArray, NSMutableDictionary;

@interface AutomaticContentDownloadController : _AAUIDeviceLocatorStateDidChangeNotification
{
    id _settingsChangedObserver;
    NSMutableArray *_applications;
    NSMutableDictionary *_applicationStates;
}

- (void)setApplicationStates:(id)fp8;
- (id)applicationStates;
- (void)setApplications:(id)fp8;
- (id)applications;
- (id)applicationEnabled:(id)fp8;
- (void)setApplicationEnabled:(id)fp8 forSpecifier:(id)fp12;
- (id)backgroundRefreshState:(id)fp8;
- (void)setBackgroundRefreshState:(id)fp8 withSpecifier:(id)fp12;
- (id)specifiers;
- (id)whitelist;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)dealloc;
- (id)init;

@end

