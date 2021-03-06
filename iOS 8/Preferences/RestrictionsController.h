/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, PSSpecifier, UIAlertView, UISwitch;

@interface RestrictionsController : _AAUIDeviceLocatorStateDidChangeNotification <UIAlertViewDelegate>
{
    UIAlertView *_alert;
    UISwitch *_delayedSwitch;
    BOOL _delayedValue;
    PSSpecifier *_iBooksSpecifier;
    PSSpecifier *_iBooksExplicitSpecifier;
    BOOL _isObservingFaceTimeChanges;
    NSMutableArray *_mcRestrictionFeatures;
}

+ (BOOL)requiresPIN;
+ (void)formatSearchEntries:(id)fp8 parent:(id)fp12;
- (void)setMcRestrictionFeatures:(id)fp8;
- (id)mcRestrictionFeatures;
- (BOOL)_isSignedInToStore;
- (BOOL)_mesaIsEnabledForStore;
- (id)contentRestriction:(id)fp8;
- (BOOL)canBeShownFromSuspendedState;
- (id)countryCodes;
- (id)currentCountryCode;
- (void)setCountryCode:(id)fp8 reload:(BOOL)fp12;
- (id)contentRatingsForMediaType:(id)fp8;
- (id)iBooksExplicitEnabledString:(id)fp8;
- (void)setExplicitEnabled:(id)fp8;
- (id)explicitEnabled;
- (id)explicitEnabledString;
- (id)localizedContentRestrictionStringForRank:(id)fp8 mediaType:(id)fp12;
- (id)currentCountryString:(id)fp8;
- (id)specifiers;
- (id)loadSpecifiersFromPlistName:(id)fp8 target:(id)fp12;
- (void)localizedRestrictionSourceDescriptionChanged:(id)fp8;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)_observeFaceTimeChanges:(BOOL)fp8;
- (void)profileNotification:(id)fp8;
- (void)_handleExternalApplicationChange;
- (void)updateToggleStateAndReload;
- (void)updateToggleState;
- (void)_setSettingsRestrictedByString;
- (id)_mcRestrictionFeaturesFromSpecifiers:(id)fp8;
- (void)revertRestrictionPrefsIfNeeded;
- (id)capabilityEnabled:(id)fp8;
- (void)setCapabilityEnabled:(id)fp8 specifier:(id)fp12;
- (id)siriContentRestrictionState:(id)fp8;
- (BOOL)siriContentRestrictionsLockedDown;
- (id)webContentRestrictionState:(id)fp8;
- (id)featureValue:(id)fp8;
- (BOOL)featureRestricted:(id)fp8;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)setFeatureValue:(id)fp8 specifier:(id)fp12;
- (void)setReversedBoolFeatureValue:(id)fp8 specifier:(id)fp12;
- (id)reversedBoolFeatureValue:(id)fp8;
- (void)_handleFaceTimeConferenceStateChanged;
- (void)_disableFaceTimeRestrictions;
- (void)_disableSpecifier:(id)fp8;
- (BOOL)_isInConference;
- (BOOL)_isiTunesUInstalled;
- (BOOL)_isiBooksInstalled;

@end

