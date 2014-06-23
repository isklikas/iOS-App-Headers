/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:12 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineContactTransition : NSObject {
	NSString* __ownerMid; 
	NSString* __targetMid; 
	int __previousStatus; 
	int __resultStatus; 
	struct {
		unsigned int previousStatus:1;
		unsigned int resultStatus:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* ownerMid; 				//@synthesize _ownerMid=__ownerMid - In the implementation block
@property (nonatomic,retain) NSString* targetMid; 				//@synthesize _targetMid=__targetMid - In the implementation block
@property (assign,nonatomic) int previousStatus; 				//@synthesize _previousStatus=__previousStatus - In the implementation block
@property (assign,nonatomic) int resultStatus; 				//@synthesize _resultStatus=__resultStatus - In the implementation block
-(void)read:(id)arg1;
-(void)setOwnerMid:(id)arg1;
-(void)setTargetMid:(id)arg1;
-(void)setPreviousStatus:(int)arg1;
-(void)setResultStatus:(int)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end