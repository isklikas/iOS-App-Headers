/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:17 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ShuffleManager.h>

@interface ShuffleManagerImplementation : NSObject <ShuffleManager> {
	SessionController* _sessionController; 
}
@property (nonatomic,retain) SessionController* sessionController; 				//@synthesize sessionController=_sessionController - In the implementation block
@property (getter=isShuffleEnabled,nonatomic,copy) BOOL shuffleEnabled; 
@property (getter=isNoTrialTestEnabled,nonatomic,copy) BOOL noTrialTestEnabled; 
@property (getter=isCellBEnabled,nonatomic,copy) BOOL cellBEnabled; 
@property (getter=isTabletFreeEnabled,nonatomic,copy) BOOL tabletFreeEnabled; 
@property (getter=isFreeTierEnabled,nonatomic,copy) BOOL freeTierEnabled; 
-()setShuffleForceMode:(id)arg1;
-(id)initWithSessionController:(id)arg1;
-(void)setSessionController:(id)arg1;
-(void).cxx_destruct;
@end