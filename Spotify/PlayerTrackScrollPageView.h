/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:08 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPTHTTPImageLoaderDelegate
@optional
-(void)imageLoader(id):arg1 didFailToLoadImageForURL(id):arg2 context(id):arg3 error(id):arg4 ;
@required
-(void)imageLoader(id):arg1 didFinishLoadingImage(id):arg2 forURL(id):arg3 context(id):arg4 loadedSynchronously(BOOL):arg5 ;
-(void)imageLoader(id):arg1 didFinishLoadingImage(id):arg2 forURL(id):arg3 context(id):arg4 loadedSynchronously(BOOL):arg5 ;
@end

@protocol PlayerTrackScrollPageView
@property (nonatomic,retain) NSURL* trackURL; 
@property (nonatomic,copy) NSString* trackTitle; 
@property (nonatomic,copy) NSString* artistTitle; 
@property (nonatomic,retain) NSURL* imageURL; 
@required
-(id)trackURL;
-(void)setTrackURL(id):arg1 ;
-(id)trackTitle;
-(void)setTrackTitle(id):arg1 ;
-(id)artistTitle;
-(void)setArtistTitle(id):arg1 ;
-(void)setImageURL(id):arg1 ;
-(id)imageURL;
-(id)trackURL;
-(void)setTrackURL(id):arg1 ;
-(id)trackTitle;
-(void)setTrackTitle(id):arg1 ;
-(id)artistTitle;
-(void)setArtistTitle(id):arg1 ;
-(void)setImageURL(id):arg1 ;
-(id)imageURL;
@end