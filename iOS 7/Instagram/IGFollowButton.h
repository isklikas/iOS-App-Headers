/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:16 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGFollowButtonProtocol.h>

@interface IGFollowButton : IGSpringButton <IGFollowButtonProtocol> {
	BOOL _canShowFollowRequest; 
	IGUser* _user; 
	IGPendingRequestView* _pendingRequestView; 
	int _currentState; 
}
@property (nonatomic,retain) IGUser* user; 				//@synthesize user=_user - In the implementation block
@property (assign,nonatomic) int displayType; 
@property (assign,nonatomic) BOOL canShowFollowRequest; 				//@synthesize canShowFollowRequest=_canShowFollowRequest - In the implementation block
@property (nonatomic,retain) IGPendingRequestView* pendingRequestView; 				//@synthesize pendingRequestView=_pendingRequestView - In the implementation block
@property (assign,nonatomic) int currentState; 				//@synthesize currentState=_currentState - In the implementation block
-(BOOL)shouldShowTitle;
-(void)onFriendStatusReceived;
-(void)acceptFollowRequestWithCompletion:(id)arg1;
-(void)ignoreFollowRequestWithCompletion:(id)arg1;
-(BOOL)shouldShowPendingRequest;
-(void)toggleFollowStatus;
-(int)buttonStateForFollowStatus:(int)arg1;
-(id)backgroundImageForButtonState:(int)arg1;
-(id)accessoryImageForButtonState:(int)arg1;
-(id)iconImageForButtonState:(int)arg1;
-(id)titleForButtonState:(int)arg1;
-(id)titleColorForButtonState:(int)arg1;
-(void)setCanShowFollowRequest:(BOOL)arg1;
-(void)setPendingRequestView:(id)arg1;
-(void)setUser:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setTarget:(id)arg1 action:(SEL)arg2;
-(void)setCurrentState:(int)arg1;
-(void)updateState;
-(void).cxx_destruct;
@end