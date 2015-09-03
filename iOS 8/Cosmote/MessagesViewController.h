/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class MessagesDetailViewController, MessagesNewViewController, NSTimer, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView, UIViewController;

@interface MessagesViewController : _ABAddressBookCopyArrayOfAllPeople
{
    BOOL notif_egain_open;
    BOOL notif_campaigns_open;
    BOOL side;
    BOOL side2;
    UIButton *tab1;
    UIButton *tab2;
    UIButton *tab3;
    UITableView *table1;
    UIButton *topL_services;
    UIButton *topR_msisdns;
    UILabel *numlb1;
    UILabel *numlb2;
    UIImageView *numlb2ImgView;
    UIViewController *rightview;
    UIViewController *leftview;
    NSTimer *mytimer;
    UIActivityIndicatorView *spinner;
    UILabel *loading;
    MessagesDetailViewController *MessagesDetailView;
    MessagesNewViewController *MessagesNewView;
}

- (void)setMessagesNewView:(id)fp8;
- (id)MessagesNewView;
- (void)setMessagesDetailView:(id)fp8;
- (id)MessagesDetailView;
- (void)setLoading:(id)fp8;
- (id)loading;
- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void)setMytimer:(id)fp8;
- (id)mytimer;
- (void)setSide2:(BOOL)fp8;
- (BOOL)side2;
- (void)setSide:(BOOL)fp8;
- (BOOL)side;
- (void)setLeftview:(id)fp8;
- (id)leftview;
- (void)setRightview:(id)fp8;
- (id)rightview;
- (void)setNumlb2ImgView:(id)fp8;
- (id)numlb2ImgView;
- (void)setNumlb2:(id)fp8;
- (id)numlb2;
- (void)setNumlb1:(id)fp8;
- (id)numlb1;
- (void)setTopR_msisdns:(id)fp8;
- (id)topR_msisdns;
- (void)setTopL_services:(id)fp8;
- (id)topL_services;
- (void)setNotif_campaigns_open:(BOOL)fp8;
- (BOOL)notif_campaigns_open;
- (void)setNotif_egain_open:(BOOL)fp8;
- (BOOL)notif_egain_open;
- (void)setTable1:(id)fp8;
- (id)table1;
- (void)setTab3:(id)fp8;
- (id)tab3;
- (void)setTab2:(id)fp8;
- (id)tab2;
- (void)setTab1:(id)fp8;
- (id)tab1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)opennotifications_campaigns:(id)fp8;
- (void)opennotifications_egain:(id)fp8;
- (void)removeleftview;
- (void)removerightview;
- (void)openleftside_code;
- (void)openleftside:(id)fp8;
- (void)openrightside_code;
- (void)openrightside:(id)fp8;
- (void)tab3_act:(id)fp8;
- (void)tab2_act:(id)fp8;
- (void)tab1_act:(id)fp8;
- (void)goBack:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)makeHTTPConn;
- (void)GoToRoot;
- (void)buildHeader;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

