/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:11 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITableViewDataSource.h>

@interface SPTPureDataSource : NSObject <UITableViewDataSource> {
	id<SPTPureDataSourceDelegate> _delegate; 
}
@property (assign,nonatomic,__weak) id<SPTPureDataSourceDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(id)tableView:(id)arg1 objectForRowAtIndexPath:(id)arg2;
-(void)setDelegate:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(void).cxx_destruct;
@end