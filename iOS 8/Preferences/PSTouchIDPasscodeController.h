/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PasscodeLockController.h"

#import "BiometricKitDelegate-Protocol.h"
#import "BiometricKitUIEnrollResultDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class BiometricKit, NSObject<OS_dispatch_queue>, PSEnrollContainerViewController, UIPopoverController;

@interface PSTouchIDPasscodeController : PasscodeLockController <UIPopoverControllerDelegate, BiometricKitUIEnrollResultDelegate, BiometricKitDelegate>
{
    BOOL _currentlyEnablingTouchIDForPurchases;
    int _storeState;
    BiometricKit *_highlightMatcher;
    NSObject<OS_dispatch_queue> *_highlightQueue;
    PSEnrollContainerViewController *_enrollController;
    id _modalFlowSuccessCompletion;
    id _modalFlowCancelCompletion;
    UIPopoverController *_enrollmentPopoverController;
}

+ (BOOL)_shouldPresentEnrollmentInPopover;
- (void)setEnrollmentPopoverController:(id)fp8;
- (id)enrollmentPopoverController;
- (void)setCurrentlyEnablingTouchIDForPurchases:(BOOL)fp8;
- (BOOL)currentlyEnablingTouchIDForPurchases;
- (void)setModalFlowCancelCompletion:(id)fp(null);
- (id)modalFlowCancelCompletion;
- (void)setModalFlowSuccessCompletion:(id)fp(null);
- (id)modalFlowSuccessCompletion;
- (void)setEnrollController:(id)fp8;
- (id)enrollController;
- (void)setHighlightQueue:(id)fp8;
- (id)highlightQueue;
- (void)setHighlightMatcher:(id)fp8;
- (id)highlightMatcher;
- (void)setStoreState:(int)fp8;
- (int)storeState;
- (void)didCancelEnteringPIN;
- (void)devicePINController:(id)fp8 didAcceptSetPIN:(id)fp12;
- (void)updateAfterFingerprintChanges;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canMoveRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (id)_fingerprintSpecifierAtIndexPath:(id)fp8;
- (void)cancelModalFlow;
- (void)completeModalFlow;
- (void)enrollmentCompletedForIdentity:(id)fp8;
- (void)hideCancelButton;
- (void)enrollResult:(int)fp8 identity:(id)fp12;
- (BOOL)popoverControllerShouldDismissPopover:(id)fp8;
- (void)_popEnrollmentController;
- (void)presentPasscodePaneFromSpecifier:(id)fp8;
- (void)pushPasscodePane;
- (id)_passcodeControllerForSpecifier:(id)fp8;
- (void)addEnrollment:(id)fp8;
- (void)_presentPopoverForContentViewController:(id)fp8;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)fp8;
- (void)highlightFingerprintSpecifier:(id)fp8;
- (void)statusMessage:(unsigned int)fp8;
- (void)matchResult:(id)fp8;
- (void)backgrounded:(id)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)_cancelMatching;
- (void)_setupMatching;
- (id)fingerprintSpecifiers;
- (id)_fingerprintSpecifierForIdentity:(id)fp8;
- (id)touchIDSwitchSpecifiers;
- (void)setupTouchIDLogoHeader;
- (void)updateAddFingerprintSpecifier;
- (BOOL)isEnrollmentAvailable;
- (BOOL)shouldRestrictFeaturesRequiringEnrollment;
- (BOOL)isFingerprintEditingAllowed;
- (void)updateTouchIDForStockholmSpecifier;
- (BOOL)isTouchIDForStockholmRestricted;
- (void)setTouchIDForStockholmEnabled:(id)fp8 specifier:(id)fp12;
- (id)isTouchIDForStockholmEnabled:(id)fp8;
- (void)updateTouchIDForPurchasesSpecifier;
- (BOOL)isTouchIDForPurchasesRestricted;
- (void)setTouchIDForPurchasesEnabled:(id)fp8 specifier:(id)fp12;
- (id)isTouchIDForPurchasesEnabled:(id)fp8;
- (id)_authorizationToken;
- (void)updateStoreBiometricsState;
- (void)updateTouchIDUnlockSpecifier;
- (BOOL)isTouchIDUnlockRestricted;
- (void)setTouchIDUnlockEnabled:(id)fp8 specifier:(id)fp12;
- (id)isTouchIDUnlockEnabled:(id)fp8;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id)fp(null);
- (BOOL)hasPasscodeAndFingerprints;
- (id)specifiers;
- (void)didUnlock;
- (void)dealloc;
- (id)init;

@end

