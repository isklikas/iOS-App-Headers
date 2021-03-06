/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:16 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <VNNotificationTableViewCellDelegate.h>

@interface VNActivityViewController : VNTableViewController <VNNotificationTableViewCellDelegate> {
	BOOL _canLoadNextPage; 
	VNActivityService* _activityService; 
	VNPagedData* _notifications; 
	VNPagedData* _followRequests; 
	NSMutableArray* _notificationLayouts; 
	NSMutableArray* _followRequestLayouts; 
	int _followRequestsToDisplay; 
	UIView* _followRequestsHeaderViewTrimmed; 
	UIView* _followRequestsHeaderView; 
	VNFontLabelSemibold* _followRequestsLabelTrimmed; 
	VNFontLabelSemibold* _followRequestsLabel; 
	id _followRequestApproveObserver; 
	id _followRequestDenyObserver; 
}
@property (nonatomic,retain) VNActivityService* activityService; 				//@synthesize activityService=_activityService - In the implementation block
@property (nonatomic,retain) VNPagedData* notifications; 				//@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,retain) VNPagedData* followRequests; 				//@synthesize followRequests=_followRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray* notificationLayouts; 				//@synthesize notificationLayouts=_notificationLayouts - In the implementation block
@property (nonatomic,retain) NSMutableArray* followRequestLayouts; 				//@synthesize followRequestLayouts=_followRequestLayouts - In the implementation block
@property (assign,nonatomic) int followRequestsToDisplay; 				//@synthesize followRequestsToDisplay=_followRequestsToDisplay - In the implementation block
@property (nonatomic,retain) UIView* followRequestsHeaderViewTrimmed; 				//@synthesize followRequestsHeaderViewTrimmed=_followRequestsHeaderViewTrimmed - In the implementation block
@property (nonatomic,retain) UIView* followRequestsHeaderView; 				//@synthesize followRequestsHeaderView=_followRequestsHeaderView - In the implementation block
@property (assign,nonatomic,__weak) VNFontLabelSemibold* followRequestsLabelTrimmed; 				//@synthesize followRequestsLabelTrimmed=_followRequestsLabelTrimmed - In the implementation block
@property (assign,nonatomic,__weak) VNFontLabelSemibold* followRequestsLabel; 				//@synthesize followRequestsLabel=_followRequestsLabel - In the implementation block
@property (assign,nonatomic) BOOL canLoadNextPage; 				//@synthesize canLoadNextPage=_canLoadNextPage - In the implementation block
@property (nonatomic,retain) id followRequestApproveObserver; 				//@synthesize followRequestApproveObserver=_followRequestApproveObserver - In the implementation block
@property (nonatomic,retain) id followRequestDenyObserver; 				//@synthesize followRequestDenyObserver=_followRequestDenyObserver - In the implementation block
-(void)load:(unsigned)arg1 size:(unsigned)arg2 addToExistingResults:(BOOL)arg3;
-(void)setCanLoadNextPage:(BOOL)arg1;
-(void)loadRightNavBarButton;
-(void)notificationTableViewCellPostThumbWasTapped:(id)arg1;
-(void)notificationTableViewCellUserThumbWasTapped:(id)arg1;
-(void)setNotifications:(id)arg1;
-(void)setActivityService:(id)arg1;
-(void)setupFollowRequestObservers;
-(void)cleanupFollowRequestObservers;
-(void)removeFollowRequestWithUser:(id)arg1;
-(void)setFollowRequestApproveObserver:(id)arg1;
-(void)setFollowRequestDenyObserver:(id)arg1;
-(void)updateFollowRequestsToDisplay;
-(void)rebuildMeta;
-(void)setFollowRequests:(id)arg1;
-(void)setFollowRequestsHeaderViewTrimmed:(id)arg1;
-(void)setFollowRequestsHeaderView:(id)arg1;
-(void)setFollowRequestsLabelTrimmed:(id)arg1;
-(void)setFollowRequestsLabel:(id)arg1;
-(void)followRequestsHeaderTapped:(id)arg1;
-(void)setNotificationLayouts:(id)arg1;
-(void)setFollowRequestLayouts:(id)arg1;
-(void)setFollowRequestsToDisplay:(int)arg1;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)scrollViewDidScroll:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(BOOL)isEmpty;
-(void)viewWillAppear:(BOOL)arg1;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)refresh;
-(void).cxx_destruct;
@end