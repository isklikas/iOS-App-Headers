/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

#import "PSSpecifierGroupController-Protocol.h"
#import "UsageFeedDelegate-Protocol.h"

@class NSArray, NSDictionary, NSNumber, PSExpandableAppListGroupController;

@interface PSAppCellularUsageGroupController : _AAUIDeviceLocatorStateDidChangeNotification <UsageFeedDelegate, PSSpecifierGroupController>
{
    NSArray *_cellularDataSwitches;
    BOOL _showInternalDetails;
    BOOL _cancelled;
    BOOL _enabled;
    NSNumber *_totalBytesUsed;
    NSNumber *_totalRoamingBytesUsed;
    PSExpandableAppListGroupController *_appGroupController;
    NSDictionary *_systemServiceCategoryNames;
}

- (void)setSystemServiceCategoryNames:(id)fp8;
- (id)systemServiceCategoryNames;
- (void)setEnabled:(BOOL)fp8;
- (BOOL)isEnabled;
- (void)setCancelled:(BOOL)fp8;
- (BOOL)isCancelled;
- (void)setShowInternalDetails:(BOOL)fp8;
- (BOOL)showInternalDetails;
- (void)setAppGroupController:(id)fp8;
- (id)appGroupController;
- (void)setTotalRoamingBytesUsed:(id)fp8;
- (id)totalRoamingBytesUsed;
- (void)setTotalBytesUsed:(id)fp8;
- (id)totalBytesUsed;
- (void)_createAppSpecifiersForVisibleApps:(id)fp8 hiddenApps:(id)fp12 unknownApps:(id)fp16 internalProcesses:(id)fp20;
- (void)_categorizeApps:(id)fp8 completion:(id)fp(null);
- (id)alwaysDisplayedBundleIdentifiers;
- (id)forcedBundleIdentiferForBundleIdentifier:(id)fp8;
- (void)_calculateUsageForSubscriberIdentifier:(id)fp8 inWorkspace:(id)fp12;
- (void)_updateTotalBytesUsed:(double)fp8 roamingBytesUsed:(double)fp16;
- (id)specifierForSpecialCategory:(id)fp8 bytesUsed:(id)fp12;
- (id)nameForSpecialCategory:(id)fp8;
- (id)specifierForApp:(id)fp8 enabled:(BOOL)fp12;
- (id)dataUsageForApplicationSpecifier:(id)fp8;
- (id)appCellularDataEnabledForSpecifier:(id)fp8;
- (void)setAppCellularDataEnabled:(id)fp8 forSpecifier:(id)fp12;
- (void)setSwitchesEnabled:(BOOL)fp8;
- (void)setWorkspaceInformation:(id)fp8;
- (void)cancel;
- (id)specifiers;
- (void)dealloc;
- (id)initWithListController:(id)fp8 groupSpecifier:(id)fp12;

@end

