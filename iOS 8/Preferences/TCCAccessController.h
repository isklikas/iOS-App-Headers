/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

@class HMHomeManager, NSString;

@interface TCCAccessController : _AAUIDeviceLocatorStateDidChangeNotification
{
    struct __CFString *_serviceKey;
    BOOL _iCloudURLIsReachable;
    NSString *_footer;
    NSString *_header;
    NSString *_explanation;
    HMHomeManager *_homeManager;
    struct __SCNetworkReachability *_reachability;
}

+ (BOOL)isServiceRestricted:(id)fp8;
- (void)setICloudURLIsReachable:(BOOL)fp8;
- (BOOL)iCloudURLIsReachable;
- (void)setReachability:(struct __SCNetworkReachability *)fp8;
- (struct __SCNetworkReachability *)reachability;
- (void)setHomeManager:(id)fp8;
- (id)homeManager;
- (void)setExplanation:(id)fp8;
- (id)explanation;
- (void)setHeader:(id)fp8;
- (id)header;
- (void)setFooter:(id)fp8;
- (id)footer;
- (void)updateSpecifiersForImposedSettings;
- (void)_resetWillowData;
- (void)_confirmResetWillowData;
- (id)accesssForSpecifier:(id)fp8;
- (void)setAccess:(id)fp8 forSpecifier:(id)fp12;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)specifiers;
- (void)setSpecifier:(id)fp8;
- (void)dealloc;
- (id)init;

@end

