/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:25 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPToplistService.h>

@interface SPToplistServiceImplementation : NSObject <SPToplistService> {
	struct SPJobRunner<baseJob<spSnapshot<baseRefPtr<spTrackRow> >, baseNoError> > _trackJobRunner; 
	struct SPJobRunner<baseJob<spSnapshot<baseRefPtr<spArtistRow> >, baseNoError> > _artistJobRunner; 
	struct SPJobRunner<baseJob<spSnapshot<baseRefPtr<spAlbumRow> >, baseNoError> > _albumJobRunner; 
	SPCore* _core; 
}
@property (nonatomic,retain) SPCore* core; 				//@synthesize core=_core - In the implementation block
-(id)initWithCore:(id)arg1;
-(void)setCore:(id)arg1;
-(id)lookupToplistType:(int)arg1 region:(id)arg2 username:(id)arg3;
-(id)lookupTrackToplistAsPlaylistRegion:(id)arg1 username:(id)arg2;
-(id)lookupTrackToplist;
-(id)lookupTrackToplistForCountry:(id)arg1;
-(id)lookupTrackToplistForUsername:(id)arg1;
-(id)lookupArtistToplist;
-(id)lookupArtistToplistForCountry:(id)arg1;
-(id)lookupArtistToplistForUsername:(id)arg1;
-(id)lookupAlbumToplist;
-(id)lookupAlbumToplistForCountry:(id)arg1;
-(id)lookupAlbumToplistForUsername:(id)arg1;
-(id)lookupTrackToplistAsPlaylist;
-(id)lookupTrackToplistAsPlaylistForCountry:(id)arg1;
-(id)lookupTrackToplistAsPlaylistForUsername:(id)arg1;
-(id).cxx_construct;
-(void).cxx_destruct;
@end