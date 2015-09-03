/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

#import "ZBarReaderDelegate-Protocol.h"

@class NSString, NSTimer, ReaderSampleViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, UIViewController, ZBarReaderViewController;

@interface QRViewController : _ABAddressBookCopyArrayOfAllPeople <ZBarReaderDelegate>
{
    BOOL notif_egain_open;
    BOOL notif_campaigns_open;
    BOOL side;
    BOOL side2;
    ReaderSampleViewController *ReaderSampleView;
    ZBarReaderViewController *reader;
    UIView *overlayview;
    UILabel *redlb1;
    NSString *qrcode;
    NSString *qrcode_flow;
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
    UIButton *transparentButton;
}

- (void)setTransparentButton:(id)fp8;
- (id)transparentButton;
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
- (void)setQrcode_flow:(id)fp8;
- (id)qrcode_flow;
- (void)setQrcode:(id)fp8;
- (id)qrcode;
- (void)setRedlb1:(id)fp8;
- (id)redlb1;
- (void)setOverlayview:(id)fp8;
- (id)overlayview;
- (void)setReader:(id)fp8;
- (id)reader;
- (void)setReaderSampleView:(id)fp8;
- (id)ReaderSampleView;
- (void).cxx_destruct;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)imagePickerController:(id)fp8 didFinishPickingMediaWithInfo:(id)fp12;
- (void)openQRCodeReader;
- (void)animredlb1;
- (void)dismisreader:(id)fp8;
- (void)opennotifications_campaigns:(id)fp8;
- (void)opennotifications_egain:(id)fp8;
- (void)removeleftview;
- (void)removerightview;
- (void)openleftside_code;
- (void)openleftside:(id)fp8;
- (void)openrightside_code;
- (void)openrightside:(id)fp8;
- (void)transparentButtonAct:(id)fp8;
- (void)buildHeader;
- (void)GoToRoot;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

