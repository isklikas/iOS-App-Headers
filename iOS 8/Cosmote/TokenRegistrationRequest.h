/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UltiSingleton.h"

@class HTTPRequest;

@interface TokenRegistrationRequest : UltiSingleton
{
    HTTPRequest *request;
}

- (void).cxx_destruct;
- (BOOL)tokenRegistration;
- (void)execute;

@end

