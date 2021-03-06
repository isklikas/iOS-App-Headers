/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:45 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NLGrowingTextViewDelegate.h>

@interface NLMessageInputBarForRecallUsers : NSObject <NLGrowingTextViewDelegate> {
	NLMessageInputBar* mMessageInputBar; 
	struct _NSRange mSearchRange; 
	BOOL _recallState; 
}
@property (assign,nonatomic) BOOL recallState; 				//@synthesize recallState=_recallState - In the implementation block
-(id)textMetadataArray;
-(void)addRecallUser:(id)arg1 mid:(id)arg2;
-(BOOL)isExceedMaxUsers;
-(BOOL)isExistEqualRecallUser:(id)arg1;
-(id)initWithMessageInputBar:(id)arg1;
-(void)restoreFromBackup:(id)arg1;
-(id)searchKeywordForSuggest;
-(void)resetRecallUsers;
-(id)recallUsers;
-(void)addRecallUserFromComment:(id)arg1 mid:(id)arg2;
-(void)setRecallState:(BOOL)arg1;
-(void)dealloc;
@end