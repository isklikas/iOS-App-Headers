/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineContactReport : NSObject {
	NSString* __mid; 
	BOOL __exists; 
	LineContact* __contact; 
	struct {
		unsigned int exists:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* mid; 				//@synthesize _mid=__mid - In the implementation block
@property (assign,getter=isExists,nonatomic) BOOL exists; 				//@synthesize _exists=__exists - In the implementation block
@property (nonatomic,retain) LineContact* contact; 				//@synthesize _contact=__contact - In the implementation block
-(void)setMid:(id)arg1;
-(void)read:(id)arg1;
-(void)setContact:(id)arg1;
-(void)setExists:(BOOL)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end