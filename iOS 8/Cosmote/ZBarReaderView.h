/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class CALayer, UIColor, UILabel, UIPinchGestureRecognizer, UIView, ZBarCaptureReader;

@interface ZBarReaderView : _ABAddressBookCopyArrayOfAllPeople
{
    id <ZBarReaderViewDelegate> readerDelegate;
    ZBarCaptureReader *captureReader;
    struct CGRect scanCrop;
    struct CGRect effectiveCrop;
    struct CGAffineTransform previewTransform;
    float zoom;
    float zoom0;
    float maxZoom;
    UIColor *trackingColor;
    BOOL tracksSymbols;
    BOOL showsFPS;
    int torchMode;
    int interfaceOrientation;
    double animationDuration;
    CALayer *preview;
    CALayer *overlay;
    CALayer *tracking;
    CALayer *cropLayer;
    UIView *fpsView;
    UILabel *fpsLabel;
    UIPinchGestureRecognizer *pinch;
    float imageScale;
    struct CGSize imageSize;
    BOOL started;
    BOOL running;
}

+ (id)alloc;
- (void)initSubviews;
- (void)_initWithImageScanner:(id)fp8;
- (id)initWithImageScanner:(id)fp8;
- (id)init;
- (id)initWithCoder:(id)fp8;
- (void)dealloc;
- (void)resetTracking;
- (void)updateCrop;
- (void)layoutSubviews;
- (void)setImageSize:(struct CGSize)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)setScanCrop:(struct CGRect)fp8;
- (void)setTracksSymbols:(BOOL)fp8;
- (BOOL)allowsPinchZoom;
- (void)setAllowsPinchZoom:(BOOL)fp8;
- (void)setTrackingColor:(id)fp8;
- (void)setShowsFPS:(BOOL)fp8;
- (void)setZoom:(float)fp8;
- (void)setZoom:(float)fp8 animated:(BOOL)fp12;
- (void)setPreviewTransform:(struct CGAffineTransform)fp8;
- (void)start;
- (void)stop;
- (void)flushCache;
- (void)handlePinch;
- (void)updateTracking:(id)fp8 withSymbol:(id)fp12;
- (void)didTrackSymbols:(id)fp8;
- (id)captureReader;
- (struct CGAffineTransform)previewTransform;
- (struct CGRect)scanCrop;
- (float)maxZoom;
- (void)setMaxZoom:(float)fp8;
- (float)zoom;
- (BOOL)showsFPS;
- (int)torchMode;
- (void)setTorchMode:(int)fp8;
- (id)trackingColor;
- (BOOL)tracksSymbols;
- (id)readerDelegate;
- (void)setReaderDelegate:(id)fp8;

@end

