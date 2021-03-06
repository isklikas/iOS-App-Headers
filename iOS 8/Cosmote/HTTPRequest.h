/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface HTTPRequest : _ABAddressBookCopyArrayOfAllPeople <UIAlertViewDelegate>
{
    BOOL ExceptionJSON_downtime;
    BOOL ExceptionJSON_exception;
    BOOL ExceptionJSON_newVersionAvailable;
    BOOL ExceptionJSON_sessionTimeout;
    BOOL showNetPopup;
    BOOL showJsonPopup;
    id <HTTPRequestDelegate> delegate;
    NSObject *parserObject;
    int parserObject_type;
    NSString *stringReply;
    NSMutableDictionary *_parserObject_dic;
    NSMutableArray *_parserObject_arr;
}

- (void)setParserObject_arr:(id)fp8;
- (id)parserObject_arr;
- (void)setParserObject_dic:(id)fp8;
- (id)parserObject_dic;
- (void)setShowJsonPopup:(BOOL)fp8;
- (BOOL)showJsonPopup;
- (void)setShowNetPopup:(BOOL)fp8;
- (BOOL)showNetPopup;
- (void)setExceptionJSON_sessionTimeout:(BOOL)fp8;
- (BOOL)ExceptionJSON_sessionTimeout;
- (void)setExceptionJSON_newVersionAvailable:(BOOL)fp8;
- (BOOL)ExceptionJSON_newVersionAvailable;
- (void)setExceptionJSON_exception:(BOOL)fp8;
- (BOOL)ExceptionJSON_exception;
- (void)setExceptionJSON_downtime:(BOOL)fp8;
- (BOOL)ExceptionJSON_downtime;
- (void)setStringReply:(id)fp8;
- (id)stringReply;
- (void)setParserObject_type:(int)fp8;
- (int)parserObject_type;
- (void)setParserObject:(id)fp8;
- (id)parserObject;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)clearSessionStorage;
- (BOOL)ajaxResponseValidation;
- (BOOL)parsing_requestWithActionUrl:(id)fp8 withPostBody:(id)fp12 withHTTPMethod:(id)fp16 shouldCheckReach:(BOOL)fp20 withShowNetPopup:(BOOL)fp24 withShowJsonPopup:(BOOL)fp28 forSender:(id)fp32 withOnResponse:(SEL)fp36;
- (void)customAlert:(id)fp8;

@end

