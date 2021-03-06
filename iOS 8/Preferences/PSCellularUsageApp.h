/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

@class NSString;

@interface PSCellularUsageApp : _AAUIDeviceLocatorStateDidChangeNotification
{
    NSString *_bundleIdentifier;
    NSString *_displayName;
    double _totalBytesUsed;
    double _roamingBytesUsed;
}

- (void)setRoamingBytesUsed:(double)fp8;
- (double)roamingBytesUsed;
- (void)setTotalBytesUsed:(double)fp8;
- (double)totalBytesUsed;
- (void)setDisplayName:(id)fp8;
- (id)displayName;
- (void)setBundleIdentifier:(id)fp8;
- (id)bundleIdentifier;
- (void)dealloc;

@end

