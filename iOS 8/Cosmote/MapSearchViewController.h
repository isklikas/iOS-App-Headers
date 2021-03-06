/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class MapNoGPSListViewController, NSTimer, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIPickerView, UIViewController;

@interface MapSearchViewController : _ABAddressBookCopyArrayOfAllPeople <UIPickerViewDataSource, UIPickerViewDelegate>
{
    BOOL notif_egain_open;
    BOOL notif_campaigns_open;
    BOOL side;
    BOOL side2;
    UIPickerView *picker;
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
    MapNoGPSListViewController *MapNoGPSListView;
}

- (void)setMapNoGPSListView:(id)fp8;
- (id)MapNoGPSListView;
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
- (void)setPicker:(id)fp8;
- (id)picker;
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
- (void)goBack:(id)fp8;
- (void)storelistact:(id)fp8;
- (float)pickerView:(id)fp8 heightForComponent:(int)fp12;
- (float)pickerView:(id)fp8 widthForComponent:(int)fp12;
- (void)pickerView:(id)fp8 didSelectRow:(int)fp12 inComponent:(int)fp16;
- (id)pickerView:(id)fp8 titleForRow:(int)fp12 forComponent:(int)fp16;
- (int)pickerView:(id)fp8 numberOfRowsInComponent:(int)fp12;
- (int)numberOfComponentsInPickerView:(id)fp8;
- (void)makeHTTPConn_reload;
- (void)makeHTTPConn;
- (void)GoToRoot;
- (void)buildHeader;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

