/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

#import "DevicePINControllerDelegate-Protocol.h"
#import "RUIObjectModelDelegate-Protocol.h"
#import "SUManagerClientDelegate-Protocol.h"
#import "SUNetworkObserver-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDateComponentsFormatter, NSError, NSMutableArray, NSString, NSURL, PSSoftwareUpdateTitleCell, PSSpecifier, RUILoader, SUDescriptor, SUDownload, SUManagerClient, SUMutableDownloadMetadata, UIAlertView, UINavigationController, UsageStorageController;

@interface SoftwareUpdatePrefController : _AAUIDeviceLocatorStateDidChangeNotification <DevicePINControllerDelegate, SUManagerClientDelegate, UITableViewDelegate, SUNetworkObserver, RUIObjectModelDelegate>
{
    SUManagerClient *_SUManager;
    SUDownload *_download;
    SUDescriptor *_update;
    PSSpecifier *_titleGroup;
    PSSoftwareUpdateTitleCell *_titleCell;
    PSSpecifier *_installButtonGroup;
    PSSpecifier *_installButtonSpecifier;
    int _suState;
    NSError *_suError;
    int _networkType;
    BOOL _manuallyStartedScan;
    BOOL _anyScanInProgress;
    BOOL _disableInstallButton;
    BOOL _connectedToPowerSource;
    BOOL _presentedCellularFees;
    SEL _termsAcceptanceAction;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    UIAlertView *_softwareUpdateAlert;
    UIAlertView *_agreeConfirmationAlert;
    RUILoader *_termsLoader;
    NSMutableArray *_objectModels;
    UINavigationController *_modalBuddyMLController;
    NSURL *_genericTermsURL;
    NSString *_agreeURL;
    BOOL _termsLoading;
    NSString *_devicePasscode;
    NSDateComponentsFormatter *_durationFormatter;
    UsageStorageController *_usageStorageController;
    BOOL _hideInsufficientStorageUI;
    BOOL _cacheDeleteInProgress;
    BOOL _refreshOnNextAppearance;
    id _devicePasscodeCompletion;
    SUMutableDownloadMetadata *_downloadMetadata;
}

+ (id)_SUManagerClientClass;
- (void)setDownloadMetadata:(id)fp8;
- (void)setDevicePasscodeCompletion:(id)fp(null);
- (id)devicePasscodeCompletion;
- (void)setUpdate:(id)fp8;
- (id)update;
- (id)download;
- (id)SUError;
- (int)SUState;
- (void)devicePINControllerDidDismissPINPane:(id)fp8;
- (void)didAcceptEnteredPIN:(id)fp8;
- (void)client:(id)fp8 scanDidCompleteWithNewUpdateAvailable:(id)fp12 error:(id)fp16;
- (void)client:(id)fp8 scanRequestDidStartForOptions:(id)fp12;
- (void)client:(id)fp8 downloadWasInvalidatedForNewUpdateAvailable:(id)fp12;
- (void)client:(id)fp8 installDidFail:(id)fp12 withError:(id)fp16;
- (void)client:(id)fp8 downloadDidFinish:(id)fp12;
- (void)client:(id)fp8 downloadDidFail:(id)fp12 withError:(id)fp16;
- (void)client:(id)fp8 downloadProgressDidChange:(id)fp12;
- (void)client:(id)fp8 downloadDidStart:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)controllerForSpecifier:(id)fp8;
- (void)detailedReleaseNotesDonePressed:(id)fp8;
- (void)handleScanError:(id)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)handleInstallationError:(id)fp8;
- (void)handleDownloadError:(id)fp8;
- (id)humanReadableDescriptionForError:(id)fp8 enableButton:(char *)fp12 showAsButtonFooter:(char *)fp16;
- (void)setSUError:(id)fp8;
- (void)setSUError:(id)fp8 disableButton:(BOOL)fp12 reload:(BOOL)fp16;
- (void)presentError:(id)fp8;
- (void)showStorageHelpLinkIfNeededOnFooterForGroup:(id)fp8 error:(id)fp12;
- (BOOL)handleStoragePurgeIfNeeded;
- (void)storagePurgeFinished:(BOOL)fp8;
- (void)install:(id)fp8;
- (void)_reallyInstall;
- (void)downloadAndInstall:(id)fp8;
- (void)promptForDevicePasscodeFromSpecifier:(id)fp8 withCompletion:(id)fp(null);
- (void)downloadTermsAccepted;
- (void)_reallyDownloadAndInstallAcceptingCellularFees:(BOOL)fp8;
- (void)objectModel:(id)fp8 pressedButton:(id)fp12 attributes:(id)fp16;
- (void)objectModel:(id)fp8 pressedLink:(id)fp12 httpMethod:(id)fp16;
- (void)objectModelPressedBack:(id)fp8;
- (id)parentViewControllerForObjectModel:(id)fp8;
- (void)loader:(id)fp8 didFailWithError:(id)fp12;
- (void)loader:(id)fp8 receivedObjectModel:(id)fp12 actionSignal:(int)fp16;
- (void)_popObjectModelAnimated:(BOOL)fp8;
- (void)_cleanupLoader;
- (void)_loadTermsRemoteUIWithResponseData:(id)fp8;
- (void)_loadTermsRemoteUIFailureWithError:(id)fp8;
- (void)presentTermsIfNecessaryWithAcceptanceAction:(SEL)fp8;
- (void)_loadRemoteUITermsWithCloud;
- (void)setShowsTermsProgress:(BOOL)fp8;
- (void)_loadTermsFromUpdateAsset;
- (void)_combinedTermsAgree;
- (void)_termsDisagree;
- (void)_termsAgree;
- (void)resumeDownload:(id)fp8;
- (void)_reallyResumeDownloadAcceptingCellularFees:(BOOL)fp8;
- (BOOL)_alertForDownloadConstraintsWithContext:(id)fp8;
- (void)setSUState:(int)fp8;
- (id)specifiers;
- (id)specifiersForState:(int)fp8;
- (void)presentViewController:(id)fp8 animated:(BOOL)fp12 completion:(id)fp(null);
- (void)viewWillDisappear:(BOOL)fp8;
- (void)willEnterForeground;
- (void)loadView;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)scanForUpdate;
- (void)scanFinishedWithUpdate:(id)fp8 error:(id)fp12;
- (void)_batteryStateChanged:(id)fp8;
- (void)networkChangedFromNetworkType:(int)fp8 toNetworkType:(int)fp12;
- (void)setDownload:(id)fp8;
- (id)downloadMetadata;
- (void)updateState;
- (void)updateStateFromDownload:(id)fp8;
- (BOOL)_SUDownloadPhaseIsQueued:(id)fp8;
- (Class)tableViewClass;
- (void)dealloc;
- (id)init;

@end

