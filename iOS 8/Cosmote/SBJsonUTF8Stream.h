/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyArrayOfAllPeople.h"

@class NSMutableData;

@interface SBJsonUTF8Stream : _ABAddressBookCopyArrayOfAllPeople
{
    const char *_bytes;
    NSMutableData *_data;
    unsigned int _length;
    unsigned int _index;
}

- (void)setIndex:(unsigned int)fp8;
- (unsigned int)index;
- (void).cxx_destruct;
- (id)stringWithRange:(struct _NSRange)fp8;
- (BOOL)skipCharacters:(const char *)fp8 length:(unsigned int)fp12;
- (BOOL)haveRemainingCharacters:(unsigned int)fp8;
- (void)skipWhitespace;
- (void)skip;
- (BOOL)getStringFragment:(id *)fp8;
- (BOOL)getNextUnichar:(unsigned short *)fp8;
- (BOOL)getUnichar:(unsigned short *)fp8;
- (void)appendData:(id)fp8;
- (id)init;

@end

