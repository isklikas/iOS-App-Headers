/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:36 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGMotionManager : NSObject {
	CMMotionManager* _motionManager; 
	NSOperationQueue* _gravityQueue; 
	BOOL _gravityActive; 
	struct {
		double x;
		double y;
		double z;
	} _gravity; 
}
@property (getter=isGravityActive,nonatomic,copy) BOOL gravityActive; 				//@synthesize gravityActive=_gravityActive - In the implementation block
@property (assign,nonatomic) struct gravity; 				//@synthesize gravity=_gravity - In the implementation block
-(void)stopGravityUpdates;
-(void)startGravityUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
-(id)init;
-(void)setGravity:(struct )arg1;
-(void).cxx_destruct;
@end