/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:23 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ShuffleTrackListContextViewController.h>
#import <SPViewController.h>
#import <PlayableContextProtocol.h>

@interface ShuffleTrackListContextViewController : SPTableViewController <ShuffleTrackListContextViewController, SPViewController, PlayableContextProtocol> {
	id<PlayableContextProtocolDelegate> contextDelegate; 
	SPTrackContext* _trackContext; 
	SPKVObservation* _trackContextIsLoadedObservation; 
	NSURL* _URI; 
	PlayController* _playController; 
}
@property (nonatomic,retain) SPTrackContext* trackContext; 				//@synthesize trackContext=_trackContext - In the implementation block
@property (nonatomic,retain) SPKVObservation* trackContextIsLoadedObservation; 				//@synthesize trackContextIsLoadedObservation=_trackContextIsLoadedObservation - In the implementation block
@property (nonatomic,retain) NSURL* URI; 				//@synthesize URI=_URI - In the implementation block
@property (assign,nonatomic,__weak) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
@property (assign,nonatomic) id<PlayableContextProtocolDelegate> contextDelegate; 
@property (nonatomic,copy) NSURL* URL; 
-(id)getContext;
-(void)setContextDelegate:(id)arg1;
-(void)setPlayController:(id)arg1;
-(void)setTrackContext:(id)arg1;
-(void)trackContextIsLoadedChanged;
-(id)initWithURL:(id)arg1 sessionController:(id)arg2 playController:(id)arg3 core:(id)arg4 metaViewController:(id)arg5;
-(id)contextURL;
-(void)setTrackContextIsLoadedObservation:(id)arg1;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(void)viewDidLoad;
-(void)setURI:(id)arg1;
-(void).cxx_destruct;
@end