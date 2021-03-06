/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:31 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol ShuffleProductStateWatcherDelegate
@required
-(void)shuffleProductStateWatcherDidEnableShuffleMode(id):arg1 ;
-(void)shuffleProductStateWatcherDidDisableShuffleMode(id):arg1 ;
-(void)shuffleProductStateWatcherDidEnableShuffleMode(id):arg1 ;
-(void)shuffleProductStateWatcherDidDisableShuffleMode(id):arg1 ;
@end

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

@protocol ShuffleFeature
@required
-(id)provideShuffleManager;
-(id)provideShuffleControllerObjC;
-(id)provideShufflePlaylistViewController(id):arg1 ;
-(id)provideShuffleAlbumViewController(id):arg1 ;
-(id)provideShuffleArtistViewController(id):arg1 ;
-(id)provideShuffleViewsManager;
-(id)provideShuffleManager;
-(id)provideShuffleControllerObjC;
-(id)provideShufflePlaylistViewController(id):arg1 ;
-(id)provideShuffleAlbumViewController(id):arg1 ;
-(id)provideShuffleArtistViewController(id):arg1 ;
-(id)provideShuffleViewsManager;
@end
