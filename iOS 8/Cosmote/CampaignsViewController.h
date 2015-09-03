/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class ChangeofplanViewController, NSString, NSTimer, ServisesDiaxeirisiViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView, UIViewController;

@interface CampaignsViewController : _ABAddressBookCopyArrayOfAllPeople
{
    BOOL camp_tick_isOn;
    BOOL camp_tick_exist;
    BOOL notif_egain_open;
    BOOL notif_campaigns_open;
    BOOL side;
    BOOL side2;
    UILabel *camp_title;
    UIImageView *camp_image;
    UILabel *camp_desc;
    UIButton *camp_learnMore;
    UIButton *camp_participate;
    UIButton *camp_tick_but;
    UILabel *camp_text_label;
    NSString *learnMoreURL;
    NSString *jsonCampaignType;
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
    ChangeofplanViewController *ChangeofplanView;
    ServisesDiaxeirisiViewController *ServisesDiaxeirisiView;
}

- (void)setServisesDiaxeirisiView:(id)fp8;
- (id)ServisesDiaxeirisiView;
- (void)setChangeofplanView:(id)fp8;
- (id)ChangeofplanView;
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
- (void)setJsonCampaignType:(id)fp8;
- (id)jsonCampaignType;
- (void)setLearnMoreURL:(id)fp8;
- (id)learnMoreURL;
- (void)setCamp_tick_exist:(BOOL)fp8;
- (BOOL)camp_tick_exist;
- (void)setCamp_tick_isOn:(BOOL)fp8;
- (BOOL)camp_tick_isOn;
- (void)setCamp_text_label:(id)fp8;
- (id)camp_text_label;
- (void)setCamp_tick_but:(id)fp8;
- (id)camp_tick_but;
- (void)setCamp_participate:(id)fp8;
- (id)camp_participate;
- (void)setCamp_learnMore:(id)fp8;
- (id)camp_learnMore;
- (void)setCamp_desc:(id)fp8;
- (id)camp_desc;
- (void)setCamp_image:(id)fp8;
- (id)camp_image;
- (void)setCamp_title:(id)fp8;
- (id)camp_title;
- (void).cxx_destruct;
- (void)deepLoginsResponse;
- (void)followUrl:(id)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
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
- (void)tickbut_ACT:(id)fp8;
- (void)learnMore_ACT:(id)fp8;
- (void)participate_Loyalty_ACT:(id)fp8;
- (void)participate_Provisioning_ACT:(id)fp8;
- (void)goBack:(id)fp8;
- (void)buildHeader;
- (void)makeHTTPConn_subbmit_learnMore;
- (void)makeHTTPConn_subbmit_tick;
- (void)makeHTTPConn_subbmit_Loyalty;
- (void)makeHTTPConn_subbmit_Provisioning;
- (void)makeHTTPConn;
- (void)GoToRoot;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

