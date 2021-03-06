/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:35 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPPage.h>
#import <CreateNewPlaylistViewControllerDelegate.h>

@interface PlaylistFolderVC : SPTableViewController <SPPage, CreateNewPlaylistViewControllerDelegate> {
	BOOL _disableUpdates; 
	BOOL _isReloadingData; 
	BOOL _setsRightBarButtonItemToNP; 
	SPPlaylistContainer* _folder; 
	SPKVObservation* _playlistsObservation; 
	unsigned _playlistsSection; 
	SPDependency* _loadingDep; 
	id _didSelectRow; 
	id _cellWillBePresented; 
	NSURL* _URL; 
	SPDependency* _currentContextDependency; 
	SPTProgressView* _progressView; 
	UIBarButtonItem* _storedLeftBarButtonItem; 
	SPPlayableItem* _previewItem; 
}
@property (nonatomic,copy) id didSelectRow; 				//@synthesize didSelectRow=_didSelectRow - In the implementation block
@property (nonatomic,copy) id cellWillBePresented; 				//@synthesize cellWillBePresented=_cellWillBePresented - In the implementation block
@property (assign,nonatomic) BOOL setsRightBarButtonItemToNP; 				//@synthesize setsRightBarButtonItemToNP=_setsRightBarButtonItemToNP - In the implementation block
@property (nonatomic,retain) SPPlaylistContainer* folder; 				//@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) unsigned playlistsSection; 				//@synthesize playlistsSection=_playlistsSection - In the implementation block
@property (nonatomic,retain) SPTProgressView* progressView; 				//@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) SPKVObservation* playlistsObservation; 				//@synthesize playlistsObservation=_playlistsObservation - In the implementation block
@property (nonatomic,retain) SPDependency* loadingDep; 				//@synthesize loadingDep=_loadingDep - In the implementation block
@property (assign) BOOL isReloadingData; 				//@synthesize isReloadingData=_isReloadingData - In the implementation block
@property (nonatomic,retain) SPDependency* currentContextDependency; 				//@synthesize currentContextDependency=_currentContextDependency - In the implementation block
@property (nonatomic,retain) UIBarButtonItem* storedLeftBarButtonItem; 				//@synthesize storedLeftBarButtonItem=_storedLeftBarButtonItem - In the implementation block
@property (nonatomic,retain) SPPlayableItem* previewItem; 				//@synthesize previewItem=_previewItem - In the implementation block
@property (nonatomic,copy) NSURL* URL; 				//@synthesize URL=_URL - In the implementation block
+(Class)playlistCellClass;
+(Class)playlistFolderClass;
+(Class)tableViewClass;
-(id)initWithFolder:(id)arg1;
-(void)setSetsRightBarButtonItemToNP:(BOOL)arg1;
-(void)setDidSelectRow:(id)arg1;
-(void)setCellWillBePresented:(id)arg1;
-(void)createNewPlaylistViewController:(id)arg1 didCreateNewPlaylist:(id)arg2;
-(BOOL)shouldShowEditButton;
-(id)viewEventURI;
-(int)stackedNavigationPageSize;
-(BOOL)folderOwnedByCurrentUser;
-(void)contentsChanged:(id)arg1;
-(void)setPlaylistsObservation:(id)arg1;
-(void)setLoadingDep:(id)arg1;
-(void)setCurrentContextDependency:(id)arg1;
-(void)setStoredLeftBarButtonItem:(id)arg1;
-(void)presentCreateNewPlaylistView;
-(BOOL)playlistContainerItemContainsCurrentTrack:(id)arg1;
-(void)commitDeleteInTableView:(id)arg1 atIndexPath:(id)arg2;
-(void)commitInsertInTableView:(id)arg1 atIndexPath:(id)arg2;
-(void)commitDeleteForContainer:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
-(void)commitDeleteForPlaylistOrPlaceholder:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
-(BOOL)isNextViewControllerFolder:(id)arg1;
-(void)delayedTableViewDidSelectRowAtIndexPath:(id)arg1;
-(void)setPlaylistsSection:(unsigned)arg1;
-(void)setIsReloadingData:(BOOL)arg1;
-(void)setPreviewItem:(id)arg1;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1;
-(id)initWithURL:(id)arg1;
-(void)setFolder:(id)arg1;
-(void)setProgressView:(id)arg1;
-(void).cxx_destruct;
@end