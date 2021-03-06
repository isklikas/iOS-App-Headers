/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class NSTimer, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface ServicesEInvoiceConfirmViewController : _ABAddressBookCopyArrayOfAllPeople
{
    UIActivityIndicatorView *spinner;
    UILabel *loading;
    UIImageView *loadingBack;
    UILabel *lbMessage1;
    UILabel *lbMessage2;
    UILabel *lbOption1;
    UILabel *lbOption2;
    UILabel *lbOption3;
    UILabel *lbCheck1;
    UIButton *btnChangeAddress;
    UIButton *btnOption1;
    UIButton *btnOption2;
    UIButton *btnOption3;
    UIButton *btnCheck1;
    NSTimer *mytimer;
}

- (void)setMytimer:(id)fp8;
- (id)mytimer;
- (void)setBtnCheck1:(id)fp8;
- (id)btnCheck1;
- (void)setBtnOption3:(id)fp8;
- (id)btnOption3;
- (void)setBtnOption2:(id)fp8;
- (id)btnOption2;
- (void)setBtnOption1:(id)fp8;
- (id)btnOption1;
- (void)setBtnChangeAddress:(id)fp8;
- (id)btnChangeAddress;
- (void)setLbCheck1:(id)fp8;
- (id)lbCheck1;
- (void)setLbOption3:(id)fp8;
- (id)lbOption3;
- (void)setLbOption2:(id)fp8;
- (id)lbOption2;
- (void)setLbOption1:(id)fp8;
- (id)lbOption1;
- (void)setLbMessage2:(id)fp8;
- (id)lbMessage2;
- (void)setLbMessage1:(id)fp8;
- (id)lbMessage1;
- (void)setLoadingBack:(id)fp8;
- (id)loadingBack;
- (void)setLoading:(id)fp8;
- (id)loading;
- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void).cxx_destruct;
- (void)goBack:(id)fp8;
- (void)onSaveConfirm:(id)fp8;
- (void)onChangeAddress:(id)fp8;
- (void)radioClicked:(id)fp8;
- (void)getCurrentAddress;
- (void)onJSONCurrentAddress;
- (void)showAddress;
- (void)showSpinner:(BOOL)fp8;
- (void)initView:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

