/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class NSTimer, TermsViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIViewController, ePayWebViewController;

@interface ePay2ViewController : _ABAddressBookCopyArrayOfAllPeople
{
    BOOL terms_tick_isOn;
    BOOL terms_exist;
    BOOL notif_egain_open;
    BOOL notif_campaigns_open;
    BOOL side;
    BOOL side2;
    UILabel *lbl_epibebaivsh1;
    UILabel *lbl_epibebaivsh2;
    UILabel *lbl_onoma1;
    UILabel *lbl_onoma2;
    UILabel *lbl_arithmosLogariasmou1;
    UILabel *lbl_arithmosLogariasmou2;
    UILabel *lbl_poso1;
    UILabel *lbl_poso2;
    UIButton *btn_subbmitbut;
    UIButton *terms_tick_but;
    UILabel *terms_text_label;
    UILabel *terms_textund_label;
    UIButton *terms_text_but;
    UIButton *topL_services;
    UIButton *topR_msisdns;
    UILabel *numlb1;
    UILabel *numlb2;
    UIImageView *numlb2ImgView;
    UIViewController *rightview;
    UIViewController *leftview;
    NSTimer *mytimer;
    UIButton *transparentButton;
    UIActivityIndicatorView *spinner;
    UILabel *loading;
    ePayWebViewController *ePayWebView;
    TermsViewController *TermsView;
}

- (void)setTermsView:(id)fp8;
- (id)TermsView;
- (void)setEPayWebView:(id)fp8;
- (id)ePayWebView;
- (void)setLoading:(id)fp8;
- (id)loading;
- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void)setTransparentButton:(id)fp8;
- (id)transparentButton;
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
- (void)setTerms_exist:(BOOL)fp8;
- (BOOL)terms_exist;
- (void)setTerms_tick_isOn:(BOOL)fp8;
- (BOOL)terms_tick_isOn;
- (void)setTerms_text_but:(id)fp8;
- (id)terms_text_but;
- (void)setTerms_textund_label:(id)fp8;
- (id)terms_textund_label;
- (void)setTerms_text_label:(id)fp8;
- (id)terms_text_label;
- (void)setTerms_tick_but:(id)fp8;
- (id)terms_tick_but;
- (void)setBtn_subbmitbut:(id)fp8;
- (id)btn_subbmitbut;
- (void)setLbl_poso2:(id)fp8;
- (id)lbl_poso2;
- (void)setLbl_poso1:(id)fp8;
- (id)lbl_poso1;
- (void)setLbl_arithmosLogariasmou2:(id)fp8;
- (id)lbl_arithmosLogariasmou2;
- (void)setLbl_arithmosLogariasmou1:(id)fp8;
- (id)lbl_arithmosLogariasmou1;
- (void)setLbl_onoma2:(id)fp8;
- (id)lbl_onoma2;
- (void)setLbl_onoma1:(id)fp8;
- (id)lbl_onoma1;
- (void)setLbl_epibebaivsh2:(id)fp8;
- (id)lbl_epibebaivsh2;
- (void)setLbl_epibebaivsh1:(id)fp8;
- (id)lbl_epibebaivsh1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)opennotifications_campaigns:(id)fp8;
- (void)opennotifications_egain:(id)fp8;
- (void)removeleftview;
- (void)removerightview;
- (void)openleftside_code;
- (void)openleftside:(id)fp8;
- (void)openrightside_code;
- (void)openrightside:(id)fp8;
- (void)transparentButtonAct:(id)fp8;
- (void)terms_tick_but_ACT:(id)fp8;
- (void)terms_text_but_ACT:(id)fp8;
- (void)btn_subbmitbut_act:(id)fp8;
- (void)goBack:(id)fp8;
- (void)makeHTTPConn_subbmit;
- (void)makeHTTPConn;
- (void)GoToRoot;
- (void)buildHeader;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

