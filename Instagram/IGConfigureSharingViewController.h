/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:14 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGShareServiceConfigureManagerDelegate.h>

@interface IGConfigureSharingViewController : IGGroupedTableViewController <IGShareServiceConfigureManagerDelegate> {
	NSArray* _services; 
	IGShareServiceConfigureManager* _configureManager; 
}
-(id)shareServiceAtRow:(int)arg1;
-(void)configureCell:(id)arg1 forShareService:(id)arg2;
-(id)viewControllerForShareConfiguration;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void).cxx_destruct;
@end