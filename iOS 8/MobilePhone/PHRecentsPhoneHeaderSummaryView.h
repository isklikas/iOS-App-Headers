//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PHRecentsHeaderSummaryView.h"

@class UILabel;

@interface PHRecentsPhoneHeaderSummaryView : UIView <PHRecentsHeaderSummaryView>
{
    UILabel *_topmostLabel;
    UILabel *_bottommostLabel;
    double _intrinsicContentHeight;
}

@property double intrinsicContentHeight; // @synthesize intrinsicContentHeight=_intrinsicContentHeight;
@property UILabel *bottommostLabel; // @synthesize bottommostLabel=_bottommostLabel;
@property UILabel *topmostLabel; // @synthesize topmostLabel=_topmostLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 recentCall:(id)arg2 occurrenceDate:(id)arg3 status:(unsigned int)arg4 duration:(double)arg5 type:(unsigned int)arg6;

@end

