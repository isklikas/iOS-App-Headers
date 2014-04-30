/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:20:57 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ProfileViewAllViewModelDelegate.h>
#import <SPTHTTPImageLoaderDelegate.h>
#import <SPObjectRepresentation.h>
#import <SPTThemableViewLayoutDelegate.h>

@interface ProfileViewAllVC : ProfileBaseVC <ProfileViewAllViewModelDelegate, SPTHTTPImageLoaderDelegate, SPObjectRepresentation, SPTThemableViewLayoutDelegate> {
	SPTHTTPImageLoader* _imageLoader; 
}
@property (nonatomic,retain) ProfileViewAllViewModel* viewModel; 
@property (nonatomic,retain) SPTHTTPImageLoader* imageLoader; 				//@synthesize imageLoader=_imageLoader - In the implementation block
-(void)imageLoader:(id)arg1 didFinishLoadingImage:(id)arg2 forURL:(id)arg3 context:(id)arg4 loadedSynchronously:(BOOL)arg5;
-(void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 context:(id)arg3 error:(id)arg4;
-(void)setImageLoader:(id)arg1;
-(void)themableViewWillUpdateLayout:(id)arg1;
-(void)setupTableView;
-(void)viewModel:(id)arg1 didLoadData:(id)arg2 loadTime:(double)arg3;
-(void)viewModel:(id)arg1 didFailLoad:(id)arg2;
-(void)viewModel:(id)arg1 setLoading:(BOOL)arg2;
-(void)viewModel:(id)arg1 offlineModeChanged:(BOOL)arg2;
-(void)updateCellPlayStates;
-(BOOL)isEntityPlaying:(id)arg1;
-(void)viewModel:(id)arg1 playerStateDidChange:(id)arg2;
-(void)playButtonWasTapped:(id)arg1;
-(void)configureCell:(id)arg1 entity:(id)arg2 indexPath:(id)arg3;
-(unsigned)indexForEntity:(id)arg1;
-(id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 logger:(id)arg3 style:(int)arg4 feature:(id)arg5 metaViewController:(id)arg6 currentUserURI:(id)arg7;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)viewDidLoad;
-(id)URI;
-(void).cxx_destruct;
@end