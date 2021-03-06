/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:37 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PurchaseCoinDelegate.h>
#import <LineNetworkErrorViewDelegate.h>

@interface LineCoinPurchaseViewController : NLTableViewController <PurchaseCoinDelegate, LineNetworkErrorViewDelegate> {
	LineCoinStatusHeaderView* headerView_; 
	UIView* coinFooterView_; 
	NSArray* coinList; 
}
@property (nonatomic,retain) NSArray* coinList; 
-(void)showNetworkError;
-(void)refreshCoin;
-(void)loadCoinList;
-(void)purcahseCoinWithCoinItem:(id)arg1;
-(id)warningLabel:(id)arg1;
-(void)shinKessai;
-(void)tokutei;
-(void)setCoinList:(id)arg1;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)initWithStyle:(int)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1;
-(void)retry;
-(void).cxx_destruct;
@end