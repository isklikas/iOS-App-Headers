/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:35 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol NLStickerDownloadDelegate
@optional
-(void)stickerPackageDownloadStarted(id):arg1 ;
-(void)stickerPackageJustDownloadEnded(id):arg1 ;
-(void)stickerPackage(id):arg1 downloaded(float):arg2 ;
-(void)stickerPackageDownloadSuccess(id):arg1 ;
-(void)stickerPackageDownloadCanceled(id):arg1 ;
-(void)stickerPackageDownloadFailed(id):arg1 ;
@end

@protocol StickerDownloadProgressDelegate
@required
-(void)cancelButtonTapped(id):arg1 ;
-(void)cancelButtonTapped(id):arg1 ;
@end
