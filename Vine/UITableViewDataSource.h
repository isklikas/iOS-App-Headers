/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:05 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UITableViewDataSource
@optional
-(int)numberOfSectionsInTableView(id):arg1 ;
-(id)tableView(id):arg1 titleForHeaderInSection(int):arg2 ;
-(id)tableView(id):arg1 titleForFooterInSection(int):arg2 ;
-(BOOL)tableView(id):arg1 canEditRowAtIndexPath(id):arg2 ;
-(BOOL)tableView(id):arg1 canMoveRowAtIndexPath(id):arg2 ;
-(id)sectionIndexTitlesForTableView(id):arg1 ;
-(int)tableView(id):arg1 sectionForSectionIndexTitle(id):arg2 atIndex(int):arg3 ;
-(void)tableView(id):arg1 commitEditingStyle(int):arg2 forRowAtIndexPath(id):arg3 ;
-(void)tableView(id):arg1 moveRowAtIndexPath(id):arg2 toIndexPath(id):arg3 ;
@required
-(int)tableView(id):arg1 numberOfRowsInSection(int):arg2 ;
-(id)tableView(id):arg1 cellForRowAtIndexPath(id):arg2 ;
-(int)tableView(id):arg1 numberOfRowsInSection(int):arg2 ;
-(id)tableView(id):arg1 cellForRowAtIndexPath(id):arg2 ;
@end