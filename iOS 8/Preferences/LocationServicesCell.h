/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AAUIDeviceLocatorStateDidChangeNotification.h"

@class LocationUsageMixin;

@interface LocationServicesCell : _AAUIDeviceLocatorStateDidChangeNotification
{
    LocationUsageMixin *_location;
}

- (id)location;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12 specifier:(id)fp16;

@end

