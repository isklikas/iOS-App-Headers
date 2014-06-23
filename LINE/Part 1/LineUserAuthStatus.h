/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:56 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineUserAuthStatus : NSObject {
	BOOL __phoneNumberRegistered; 
	NSArray* __registeredSnsIdTypes; 
	int __accountMigrationCheckType; 
	struct {
		unsigned int phoneNumberRegistered:1;
		unsigned int accountMigrationCheckType:1;
	} __isSet; 
}
@property (assign,getter=isPhoneNumberRegistered,nonatomic) BOOL phoneNumberRegistered; 				//@synthesize _phoneNumberRegistered=__phoneNumberRegistered - In the implementation block
@property (nonatomic,retain) NSArray* registeredSnsIdTypes; 				//@synthesize _registeredSnsIdTypes=__registeredSnsIdTypes - In the implementation block
@property (assign,nonatomic) int accountMigrationCheckType; 				//@synthesize _accountMigrationCheckType=__accountMigrationCheckType - In the implementation block
-(void)read:(id)arg1;
-(void)setAccountMigrationCheckType:(int)arg1;
-(void)setPhoneNumberRegistered:(BOOL)arg1;
-(void)setRegisteredSnsIdTypes:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end