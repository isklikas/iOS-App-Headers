/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "LocationServicesListController.h"

@class NSBundle, NSDictionary, NSString;

@interface LocationServicesAuthorizationLevelController : LocationServicesListController
{
    NSString *_serviceKey;
    NSDictionary *_details;
    NSString *_displayName;
    NSBundle *_entityBundle;
}

- (void)setEntityBundle:(id)fp8;
- (id)entityBundle;
- (void)setDisplayName:(id)fp8;
- (id)displayName;
- (void)setDetails:(id)fp8;
- (id)details;
- (void)setServiceKey:(id)fp8;
- (id)serviceKey;
- (void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned int)fp8;
- (void)_setLocationAuthorizationLevelForSpecifier:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)_usageTextForAuthorizationLevel:(unsigned int)fp8;
- (id)_purposeStringForAuthorizationLevel:(unsigned int)fp8;
- (id)_constructFooterForAuthorizationLevel:(unsigned int)fp8;
- (id)specifiers;
- (void)dealloc;
- (void)setSpecifier:(id)fp8;

@end

