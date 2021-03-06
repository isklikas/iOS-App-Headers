/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:55 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UpsellShuffleTrialMessageViewController : UpsellStandardViewController {
	NSString* _secondaryButtonTitle; 
	UIButton* _secondaryButton; 
	DeferredTrialController* _deferredTrialController; 
}
@property (nonatomic,copy) NSString* secondaryButtonTitle; 				//@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,retain) UIButton* secondaryButton; 				//@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) DeferredTrialController* deferredTrialController; 				//@synthesize deferredTrialController=_deferredTrialController - In the implementation block
-(id)initWithTitle:(id)arg1 withMessage:(id)arg2 withPrimaryButtonTitle:(id)arg3 withSecondaryButtonTitle:(id)arg4 withViewEventURI:(id)arg5 withLogCenter:(id)arg6 withDeferredTrialController:(id)arg7;
-(id)loadButtonContainerView;
-(id)loadImageContainerViewBelowView:(id)arg1;
-(void)setDeferredTrialController:(id)arg1;
-(void)setSecondaryButton:(id)arg1;
-(void).cxx_destruct;
@end