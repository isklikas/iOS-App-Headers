/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:06 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ASIHTTPRequestDelegate.h>

@interface LineSkinManager : NSObject <ASIHTTPRequestDelegate> {
	BOOL checking_; 
	NSMutableArray* skinInfos_; 
	ASIHTTPRequest* httpRequest_; 
	ASINetworkQueue* requestQueue_; 
	unsigned thumbnailDownloadRetryCount_; 
	id completionBlock_; 
}
@property (nonatomic,retain) NSArray* skinInfos; 
@property (nonatomic,copy) ASINetworkQueue* requestQueue; 
+(unsigned)themeTypeWithSkinName:(id)arg1;
+(id)skinListURL;
+(id)allocWithZone:(NSZone*)arg1;
+(id)sharedManager;
-(unsigned)numberOfSkins;
-(void)readyWithCompletionBlock:(id)arg1;
-(id)skinInfoListWithSkinList:(id)arg1;
-(void)setSkinInfos:(id)arg1;
-(void)thumbnailDownloadsDidFinished:(id)arg1;
-(void)setThumbnailsDownloadCompletionBlock:(id)arg1;
-(BOOL)needsCheckingSkinList;
-(BOOL)startCheckingSkinList;
-(void)downloadThumnbnails;
-(BOOL)httpRequestIsActive;
-(void)skinListRequestDone:(id)arg1;
-(void)skinListRequestFailed:(id)arg1;
-(BOOL)hasThumbnails;
-(BOOL)updateSkinInfos:(id)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(BOOL)isDownloadingThumbnails;
-(void).cxx_destruct;
@end