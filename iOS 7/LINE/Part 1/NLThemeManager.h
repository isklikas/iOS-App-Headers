/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:36 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLThemeManager : NSObject {
}
+(void)checkVaildationIfExistMarkedThemeProductId;
+(void)applyThemeWithPackage:(id)arg1;
+(void)notifyEventWithPackage:(id)arg1 withEvent:(long long)arg2;
+(void)checkThemeShopNewBadge:(id)arg1;
+(id)themePackageAutocreateWithProductID:(id)arg1;
+(id)themePackageForProductID:(id)arg1;
+(void)checkUsingStatusForThemePackages;
+(BOOL)forceDeleteThemePackageWithProductID:(id)arg1;
+(void)checkValidationPerDailyOfCurrentTheme;
+(id)loadDownloadedThemePackages;
+(void)checkLocalProduct;
+(void)createThemePackageDirectory;
+(id)downloadedThemeDirectories;
+(id)insertThemeWithProductID:(id)arg1;
+(id)contentsOfURL:(id)arg1;
+(BOOL)isCurrentUsingTheme:(id)arg1;
+(id)defaultThemePackage;
+(BOOL)isDownloadedPackage:(id)arg1;
+(void)notifyDidApplyThemeWithPackage:(id)arg1;
+(void)failedToApplyTheme:(id)arg1;
+(void)_checkVaildationIfExistMarkedThemeProductId;
+(void)showForceUpdateAlertAndDownload:(id)arg1;
+(void)showUnavailableAlert:(id)arg1;
+(void)generateAuthCodeWithPackage:(id)arg1 completionBlock:(id)arg2;
+(void)checkValidationWithPackage:(id)arg1 completionBlock:(id)arg2;
+(BOOL)isNeedDailyValidationCheck;
+(void)showExpiredAlertsIfNeeded:(id)arg1;
+(void)showTerminationAlertsIfNeeded:(id)arg1;
+(id)themePackageCurrentUsing;
+(void)forceApplyDefaultTheme;
+(void)showExpiredAlert:(id)arg1;
+(void)showUsingTerminationAlert:(id)arg1;
+(void)showUnusingTerminationAlert:(id)arg1;
+(void)notifyFailedApplyThemeWithPackage:(id)arg1;
+(void)showThemeUpateAlert:(id)arg1;
+(id)productObjectWithProductID:(id)arg1;
+(id)localThemePackages;
+(id)defaultThemeInfo;
+(BOOL)needThemeMigrationAlert:(id)arg1;
+(id)productNameForThemeMigrationAlert:(id)arg1;
+(BOOL)needThemeMigrationStyleSheetPath:(id)arg1;
+(id)productNameWithStyleSheetPath:(id)arg1;
+(void)initialize;
+(id)delegates;
+(void)addDelegate:(id)arg1;
+(void)removeDelegate:(id)arg1;
-(void)dealloc;
@end