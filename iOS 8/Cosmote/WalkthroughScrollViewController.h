/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

#import "UIScrollViewDelegate-Protocol.h"

@class UIButton, UIScrollView;

@interface WalkthroughScrollViewController : _ABAddressBookCopyArrayOfAllPeople <UIScrollViewDelegate>
{
    UIScrollView *scrollView;
    UIButton *butLeft;
    UIButton *butRight;
    id savedParent;
    int curImageIndex;
}

- (void)setCurImageIndex:(int)fp8;
- (int)curImageIndex;
- (void)setSavedParent:(id)fp8;
- (id)savedParent;
- (void)setButRight:(id)fp8;
- (id)butRight;
- (void)setButLeft:(id)fp8;
- (id)butLeft;
- (void)setScrollView:(id)fp8;
- (id)scrollView;
- (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)next:(id)fp8;
- (void)back:(id)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

