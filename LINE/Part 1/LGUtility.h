/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:19 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LGUtility : NSObject {
}
+(void)convertVideoFile:(id)arg1 toMPEG4File:(id)arg2 completionBlock:(id)arg3;
+(id)localizedStringForKey:(id)arg1 bundleName:(id)arg2;
+(id)imageWithRetinaNamed:(id)arg1 bundleName:(id)arg2;
+(id)image:(id)arg1 stretchableImageWithLeftCapWidth:(int)arg2 topCapHeight:(int)arg3;
+(BOOL)isIOS5EqualOrOver;
+(BOOL)isSafeFilterResponse:(id)arg1;
+(BOOL)isIphone5MainScreen;
+(BOOL)isIOS7EqualOrOver;
+(id)colorWithHex:(unsigned long)arg1 alpha:(float)arg2;
+(id)actionButtonItemWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3 bundleName:(id)arg4;
+(id)dateFormatterWithDate:(id)arg1;
+(id)randomItemFromArray:(id)arg1;
+(CGSize)cropImageSizeForDeviceScale;
+(id)currentViewController;
+(id)colorWithHex:(unsigned long)arg1;
+(id)fullResolutionEditedImage:(id)arg1 forMaxSize:(int)arg2 rotateCount:(unsigned)arg3;
+(id)imageWithApplyFilterWithIndex:(unsigned)arg1 image:(id)arg2;
+(int)imageOrientationWithRotateCount:(unsigned)arg1 fromImageOrientation:(int)arg2;
+(BOOL)isIOS6EqualOrOver;
+(float)systemVersionAsFloat;
+(BOOL)isHighResolutionScreen;
+(id)imageNamedWithScale:(id)arg1 bundleName:(id)arg2;
+(id)tempFilePath;
+(id)scaleImage:(id)arg1 toSize:(CGSize)arg2;
+(id)resizeImage:(id)arg1 forMaxSize:(int)arg2;
+(BOOL)isStatusBarOrientationLandscape;
+(id)pluralizedStringWithKey:(id)arg1 table:(id)arg2 pluralValue:(float)arg3;
+(id)languageForPlurals:(id)arg1;
+(BOOL)needToIOS5AssetsLibraryNotificationWorkAround;
+(id)backButtonItemWithTarget:(id)arg1 action:(SEL)arg2 buttonTitle:(id)arg3 bundleName:(id)arg4;
+(id)writableTempFilePath;
+(id)photoInfoDateFormatter:(BOOL)arg1;
+(id)rotateImage:(id)arg1 imageOrientation:(int)arg2;
+(id)fullResolutionEditedImage:(id)arg1 forMaxSize:(int)arg2;
+(id)fixImageOrientation:(id)arg1;
+(int)nextRotateOrientationFromOrientation:(int)arg1;
+(void)forceToRotateViewControllerInNavigationController:(id)arg1;
+(BOOL)canOpenLineCamera;
+(void)downloadLineCamera;
+(void)pauseLayer:(id)arg1;
+(void)resumeLayer:(id)arg1;
+(id)pluralsStringForKey:(id)arg1 bundleName:(id)arg2 number:(int)arg3;
+(void)setGalleryBundleForLanguageCode:(id)arg1 bundleName:(id)arg2;
+(float)statusBarHeight;
+(void)initialize;
+(id)stringFromNumber:(id)arg1;
@end