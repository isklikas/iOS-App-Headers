//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPeoplePickerNavigationControllerDelegate.h"

@class ABPeoplePickerNavigationController, UIView;

@protocol ABPeoplePickerNavigationControllerPrivateMemberCellDelegate <ABPeoplePickerNavigationControllerDelegate>

@optional
- (_Bool)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(UIView *)arg5;
- (_Bool)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 withLinkedPeople:(struct __CFArray *)arg3 memberCell:(UIView *)arg4;
@end

