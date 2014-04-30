/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:38 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PlayableContextProtocol.h>

@interface InboxConversationVCIPad : SPTableViewController <PlayableContextProtocol> {
	id<PlayableContextProtocolDelegate> contextDelegate; 
	InboxUser* _user; 
	HeaderViewIPad* _headerView; 
}
@property (nonatomic,retain) InboxUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,retain) HeaderViewIPad* headerView; 				//@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) id<PlayableContextProtocolDelegate> contextDelegate; 
@property (nonatomic,copy) NSURL* URL; 
-(id)viewEventURI;
-(id)getContext;
-(void)setContextDelegate:(id)arg1;
-(BOOL)restoreWithObjectRepresentation:(id)arg1;
-(int)stackedNavigationPageSize;
-(void)delayedTableViewDidSelectRowAtIndexPath:(id)arg1;
-(void)setUser:(id)arg1;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)setHeaderView:(id)arg1;
-(void).cxx_destruct;
@end