/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:17 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol SPFeature
@optional
+(id)featureDependencies;
-(void)load;
@required
+(id)featureIdentifier;
-(void)configureWithFeatures(id):arg1 ;
-(void)unload;
-(void)configureWithFeatures(id):arg1 ;
-(void)unload;
@end

@protocol ArtistFeature
@required
+(id)featureVersion;
-(id)artistURLForBiographyURL(id):arg1 ;
-(id)artistURLForRelatedArtistsURL(id):arg1 ;
-(void)preloadViewDataForArtist(id):arg1 usingRouter(id):arg2 ;
-(void)preloadAlbumViewData(unsigned):arg1 forArtist(id):arg2 usingRouter(id):arg3 ;
-(id)artistURLForAlbumsURL(id):arg1 ;
-(id)relatedArtistsURLForArtistURL(id):arg1 ;
-(id)biographyURLForArtistURL(id):arg1 ;
-(id)albumsURLForArtistURL(id):arg1 forType(unsigned):arg2 ;
-(void)preloadAlbumViewData(unsigned):arg1 forArtist(id):arg2 ;
-(void)preloadViewDataForArtist(id):arg1 ;
-(id)artistURLForBiographyURL(id):arg1 ;
-(id)artistURLForRelatedArtistsURL(id):arg1 ;
-(void)preloadViewDataForArtist(id):arg1 usingRouter(id):arg2 ;
-(void)preloadAlbumViewData(unsigned):arg1 forArtist(id):arg2 usingRouter(id):arg3 ;
-(id)artistURLForAlbumsURL(id):arg1 ;
-(id)relatedArtistsURLForArtistURL(id):arg1 ;
-(id)biographyURLForArtistURL(id):arg1 ;
-(id)albumsURLForArtistURL(id):arg1 forType(unsigned):arg2 ;
-(void)preloadAlbumViewData(unsigned):arg1 forArtist(id):arg2 ;
-(void)preloadViewDataForArtist(id):arg1 ;
@end
