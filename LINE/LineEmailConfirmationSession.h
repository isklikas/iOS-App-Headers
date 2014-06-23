/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:39 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineEmailConfirmationSession : NSObject {
	int __emailConfirmationType; 
	NSString* __verifier; 
	NSString* __targetEmail; 
	struct {
		unsigned int emailConfirmationType:1;
	} __isSet; 
}
@property (assign,nonatomic) int emailConfirmationType; 				//@synthesize _emailConfirmationType=__emailConfirmationType - In the implementation block
@property (nonatomic,retain) NSString* verifier; 				//@synthesize _verifier=__verifier - In the implementation block
@property (nonatomic,retain) NSString* targetEmail; 				//@synthesize _targetEmail=__targetEmail - In the implementation block
-(void)read:(id)arg1;
-(void)setVerifier:(id)arg1;
-(void)setEmailConfirmationType:(int)arg1;
-(void)setTargetEmail:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end