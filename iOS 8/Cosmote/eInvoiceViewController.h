/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class NSTimer, SinoptikiAnalisiViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView, UIViewController;

@interface eInvoiceViewController : _ABAddressBookCopyArrayOfAllPeople
{
    BOOL notif_egain_open;
    BOOL notif_campaigns_open;
    BOOL side;
    BOOL side2;
    UILabel *eInv_lb1;
    UILabel *eInv_lb2;
    UILabel *eInv_lb3;
    UILabel *eInv_lb4;
    UILabel *eInv_lb5;
    UILabel *eInv_lb6;
    UIButton *sunoptika_btn;
    UIButton *epayment_btn;
    UIScrollView *sc;
    UIView *view1;
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
    SinoptikiAnalisiViewController *SinoptikiAnalisiView;
}

- (void)setSinoptikiAnalisiView:(id)fp8;
- (id)SinoptikiAnalisiView;
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
- (void)setView1:(id)fp8;
- (id)view1;
- (void)setSc:(id)fp8;
- (id)sc;
- (void)setEpayment_btn:(id)fp8;
- (id)epayment_btn;
- (void)setSunoptika_btn:(id)fp8;
- (id)sunoptika_btn;
- (void)setEInv_lb6:(id)fp8;
- (id)eInv_lb6;
- (void)setEInv_lb5:(id)fp8;
- (id)eInv_lb5;
- (void)setEInv_lb4:(id)fp8;
- (id)eInv_lb4;
- (void)setEInv_lb3:(id)fp8;
- (id)eInv_lb3;
- (void)setEInv_lb2:(id)fp8;
- (id)eInv_lb2;
- (void)setEInv_lb1:(id)fp8;
- (id)eInv_lb1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)opennotifications_campaigns:(id)fp8;
- (void)opennotifications_egain:(id)fp8;
- (void)removeleftview;
- (void)removerightview;
- (void)openleftside_code;
- (void)openleftside:(id)fp8;
- (void)openrightside_code;
- (void)openrightside:(id)fp8;
- (void)sunoptika_btn_act:(id)fp8;
- (void)epayment_btn_act:(id)fp8;
- (void)goBack:(id)fp8;
- (void)makeHTTPConn;
- (void)buildHeader;
- (void)GoToRoot;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

