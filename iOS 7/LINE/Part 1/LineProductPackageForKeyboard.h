/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:30 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SSZipArchiveDelegate
@optional
-(void)zipArchiveWillUnzipArchiveAtPath(id):arg1 zipInfo({):arg2 ;
-(void)zipArchiveDidUnzipArchiveAtPath(id):arg1 zipInfo({):arg2 unzippedPath(u):arg3 ;
-(void)zipArchiveWillUnzipFileAtIndex(int):arg1 totalFiles(int):arg2 archivePath(id):arg3 fileInfo({):arg4 ;
-(void)zipArchiveDidUnzipFileAtIndex(int):arg1 totalFiles(int):arg2 archivePath(id):arg3 fileInfo({):arg4 ;
@end

@protocol LineProductPackageForKeyboard
@required
-(BOOL)isReadyToUse;
-(BOOL)downloading;
-(unsigned)keyboardActionStatus;
-(id)keyboardOrder;
-(BOOL)downloaded;
-(void)downloadTabImageCompletionBlock(id):arg1 ;
-(void)downloadSelectedTabImageCompletionBlock(id):arg1 ;
-(id)download;
-(long long)ID;
-(BOOL)isReadyToUse;
-(BOOL)downloading;
-(unsigned)keyboardActionStatus;
-(id)keyboardOrder;
-(BOOL)downloaded;
-(void)downloadTabImageCompletionBlock(id):arg1 ;
-(void)downloadSelectedTabImageCompletionBlock(id):arg1 ;
-(id)download;
-(long long)ID;
@end
