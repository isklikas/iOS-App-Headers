/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:50 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGFacebookPagesViewControllerDelegate.h>

@interface IGFacebookAdvancedOptionsViewController : IGGroupedTableViewController <IGFacebookPagesViewControllerDelegate> {
	NSMutableArray* _availablePages; 
}
-(void)configurePostToCell:(id)arg1;
-(id)tableView:(id)arg1 optionCellForRow:(int)arg2;
-(id)unlinkCellForTableView:(id)arg1;
-(void)didSelectPostToRow;
-(void)pagesViewController:(id)arg1 didSelectAccountNamed:(id)arg2;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
-(void).cxx_destruct;
@end