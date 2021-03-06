/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:15 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SubscribersPreviewControllerDelegate.h>
#import <SPTableViewControllerWithTrackActionSupport.h>
#import <SPTableModelDelegate.h>
#import <UITextFieldDelegate.h>
#import <UIGestureRecognizerDelegate.h>
#import <SPPopcountLookupDelegate.h>

@interface PlaylistVCIPad : PlaylistVC <SubscribersPreviewControllerDelegate, SPTableViewControllerWithTrackActionSupport, SPTableModelDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SPPopcountLookupDelegate> {
	UITapGestureRecognizer* _tapRecognizer; 
	BOOL isFirstPresentation; 
	PlaylistArtActionsPageHeader* _header; 
	PlaylistVCIPadSettings* _settings; 
	SubscribersPreviewController* _subscriberPreview; 
	TrackContextTableModel* _tableModel; 
	SPPopcountLookup* _popcountLookup; 
	NSArray* _subscribers; 
	int _totalNumberOfSubscribers; 
	id<SPRadioManager> _radioManager; 
}
@property (nonatomic,retain) PlaylistArtActionsPageHeader* header; 				//@synthesize header=_header - In the implementation block
@property (nonatomic,retain) PlaylistVCIPadSettings* settings; 				//@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SubscribersPreviewController* subscriberPreview; 				//@synthesize subscriberPreview=_subscriberPreview - In the implementation block
@property (nonatomic,retain) TrackContextTableModel* tableModel; 				//@synthesize tableModel=_tableModel - In the implementation block
@property (nonatomic,retain) SPPopcountLookup* popcountLookup; 				//@synthesize popcountLookup=_popcountLookup - In the implementation block
@property (nonatomic,retain) NSArray* subscribers; 				//@synthesize subscribers=_subscribers - In the implementation block
@property (assign,nonatomic) int totalNumberOfSubscribers; 				//@synthesize totalNumberOfSubscribers=_totalNumberOfSubscribers - In the implementation block
@property (assign,nonatomic) id<SPRadioManager> radioManager; 				//@synthesize radioManager=_radioManager - In the implementation block
@property (assign,nonatomic) id<PlayableContextProtocolDelegate> contextDelegate; 
@property (nonatomic,copy) NSURL* URL; 
+(int)tableStyle;
+(Class)tableViewClass;
-(void)setRadioManager:(id)arg1;
-(int)stackedNavigationPageSize;
-(void)setTableModel:(id)arg1;
-(void)tableModelDidBruteChangeContent:(id)arg1;
-(void)tableModelDidChangeContent:(id)arg1;
-(void)tableModel:(id)arg1 didChangeObjectsAtIndexPaths:(id)arg2 forChangeType:(int)arg3;
-(void)tableModelWillChangeContent:(id)arg1;
-(unsigned)tableTrackActionsContextRowForIndexPath:(id)arg1;
-(BOOL)tableTrackActionsSupportedForIndexPath:(id)arg1;
-(void)playAll;
-(void)enliven;
-(void)deaden;
-(BOOL)isTheCurrentlyPlayingContextHolder;
-(void)setSubscribers:(id)arg1;
-(id)initWithURL:(id)arg1 currentUser:(id)arg2 radioManager:(id)arg3;
-(void)subscriberController:(id)arg1 didSelectFriend:(id)arg2;
-(void)subscriberControllerDidSelectHeader:(id)arg1;
-(void)setPopcountLookup:(id)arg1;
-(void)popCountLookup:(id)arg1 didFindSubscribers:(id)arg2 totalNumberOfSubscribers:(int)arg3;
-(void)popCountLookup:(id)arg1 didFailWithError:(id)arg2;
-(id)calculateContextDisplayName;
-(void)updateEmptyContextOverlay;
-(void)setSubscriberPreview:(id)arg1;
-(void)updateHeaderButtonsAnimated:(BOOL)arg1;
-(void)sortingUpdatedByOption:(int)arg1 sortOrder:(int)arg2;
-(void)filterBarTextChanged:(id)arg1;
-(void)browseUser;
-(void)updateSubscribers;
-(void)setTotalNumberOfSubscribers:(int)arg1;
-(void)updateTrackCellTextColors;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)textFieldShouldBeginEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1;
-(BOOL)textFieldShouldReturn:(id)arg1;
-(void)viewDidLoad;
-(id)initWithContext:(id)arg1;
-(void)dismissKeyboard;
-(void)setSettings:(id)arg1;
-(void)share;
-(void)setHeader:(id)arg1;
@end