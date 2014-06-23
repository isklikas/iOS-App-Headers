/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:53 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineLoginResult : NSObject {
	NSString* __authToken; 
	NSString* __certificate; 
	NSString* __verifier; 
	NSString* __pinCode; 
	int __type; 
	struct {
		unsigned int type:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* authToken; 				//@synthesize _authToken=__authToken - In the implementation block
@property (nonatomic,retain) NSString* certificate; 				//@synthesize _certificate=__certificate - In the implementation block
@property (nonatomic,retain) NSString* verifier; 				//@synthesize _verifier=__verifier - In the implementation block
@property (nonatomic,retain) NSString* pinCode; 				//@synthesize _pinCode=__pinCode - In the implementation block
@property (assign,nonatomic) int type; 				//@synthesize _type=__type - In the implementation block
-(void)read:(id)arg1;
-(void)setVerifier:(id)arg1;
-(void)setPinCode:(id)arg1;
-(void)setAuthToken:(id)arg1;
-(void)setType:(int)arg1;
-(void)setCertificate:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end