/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:51 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface RegistrationSession : NSObject {
	BOOL _hasAccount; 
	BOOL _allowAddressbook; 
	BOOL _isNeedTermsAfterUpdatingPhone; 
	BOOL _isAgreedTermsAfterUpdatingPhone; 
	BOOL _anotherVerificationRequired; 
	BOOL _shouldSyncSnsFriends; 
	BOOL _profileNameUploaded; 
	BOOL _registered; 
	BOOL _skipHandlingError; 
	LineVerificationSessionData* _sessionData; 
	NSArray* _userCountry; 
	NSArray* _userCarrier; 
	NSString* _userPhonenumber; 
	int _provider; 
	NSString* _accountID; 
	NSString* _password; 
	int _initialMethod; 
	int _currentMethod; 
	int _verificationResult; 
	NSString* _enteredPinCode; 
	LineUserAuthStatus* _userAuthStatus; 
	int _anotherVerificationMethod; 
	int _snsType; 
	NSString* _snsAccessToken; 
	LineSnsIdUserStatus* _snsUserStatus; 
	LineSnsProfile* _snsProfile; 
	NSString* _profileName; 
	NSData* _profileImageData; 
	int _profileImageUploadingState; 
	NSError* _error; 
	int _errorState; 
	unsigned _deviceStatus; 
	NSString* _migrationPincodeSessionId; 
	NSString* _enteredMigrationPinCode; 
}
@property (nonatomic,retain) LineVerificationSessionData* sessionData; 				//@synthesize sessionData=_sessionData - In the implementation block
@property (nonatomic,retain) NSArray* userCountry; 				//@synthesize userCountry=_userCountry - In the implementation block
@property (nonatomic,retain) NSArray* userCarrier; 				//@synthesize userCarrier=_userCarrier - In the implementation block
@property (nonatomic,retain) NSString* userPhonenumber; 				//@synthesize userPhonenumber=_userPhonenumber - In the implementation block
@property (assign,nonatomic) int provider; 				//@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString* accountID; 				//@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSString* password; 				//@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL hasAccount; 				//@synthesize hasAccount=_hasAccount - In the implementation block
@property (assign,nonatomic) BOOL allowAddressbook; 				//@synthesize allowAddressbook=_allowAddressbook - In the implementation block
@property (assign,nonatomic) BOOL isNeedTermsAfterUpdatingPhone; 				//@synthesize isNeedTermsAfterUpdatingPhone=_isNeedTermsAfterUpdatingPhone - In the implementation block
@property (assign,nonatomic) BOOL isAgreedTermsAfterUpdatingPhone; 				//@synthesize isAgreedTermsAfterUpdatingPhone=_isAgreedTermsAfterUpdatingPhone - In the implementation block
@property (assign,nonatomic) int initialMethod; 				//@synthesize initialMethod=_initialMethod - In the implementation block
@property (assign,nonatomic) int currentMethod; 				//@synthesize currentMethod=_currentMethod - In the implementation block
@property (assign,nonatomic) int verificationResult; 				//@synthesize verificationResult=_verificationResult - In the implementation block
@property (nonatomic,retain) NSString* enteredPinCode; 				//@synthesize enteredPinCode=_enteredPinCode - In the implementation block
@property (nonatomic,retain) LineUserAuthStatus* userAuthStatus; 				//@synthesize userAuthStatus=_userAuthStatus - In the implementation block
@property (assign,nonatomic) BOOL anotherVerificationRequired; 				//@synthesize anotherVerificationRequired=_anotherVerificationRequired - In the implementation block
@property (assign,nonatomic) int anotherVerificationMethod; 				//@synthesize anotherVerificationMethod=_anotherVerificationMethod - In the implementation block
@property (assign,nonatomic) int snsType; 				//@synthesize snsType=_snsType - In the implementation block
@property (nonatomic,retain) NSString* snsAccessToken; 				//@synthesize snsAccessToken=_snsAccessToken - In the implementation block
@property (nonatomic,retain) LineSnsIdUserStatus* snsUserStatus; 				//@synthesize snsUserStatus=_snsUserStatus - In the implementation block
@property (nonatomic,retain) LineSnsProfile* snsProfile; 				//@synthesize snsProfile=_snsProfile - In the implementation block
@property (assign,nonatomic) BOOL shouldSyncSnsFriends; 				//@synthesize shouldSyncSnsFriends=_shouldSyncSnsFriends - In the implementation block
@property (nonatomic,retain) NSString* profileName; 				//@synthesize profileName=_profileName - In the implementation block
@property (nonatomic,retain) NSData* profileImageData; 				//@synthesize profileImageData=_profileImageData - In the implementation block
@property (assign,nonatomic) BOOL profileNameUploaded; 				//@synthesize profileNameUploaded=_profileNameUploaded - In the implementation block
@property (assign,nonatomic) int profileImageUploadingState; 				//@synthesize profileImageUploadingState=_profileImageUploadingState - In the implementation block
@property (assign,nonatomic) BOOL registered; 				//@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) NSError* error; 				//@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int errorState; 				//@synthesize errorState=_errorState - In the implementation block
@property (assign,nonatomic) BOOL skipHandlingError; 				//@synthesize skipHandlingError=_skipHandlingError - In the implementation block
@property (assign,nonatomic) unsigned deviceStatus; 				//@synthesize deviceStatus=_deviceStatus - In the implementation block
@property (nonatomic,retain) NSString* migrationPincodeSessionId; 				//@synthesize migrationPincodeSessionId=_migrationPincodeSessionId - In the implementation block
@property (assign,nonatomic) int accountMigrationCheckType; 
@property (nonatomic,retain) NSString* enteredMigrationPinCode; 				//@synthesize enteredMigrationPinCode=_enteredMigrationPinCode - In the implementation block
+(void)findSnsIdUserStatusWithSnsIdType:(int)arg1 snsAccessToken:(id)arg2 migrationPincodeSessionId:(id)arg3 completionBlock:(id)arg4 errorBlock:(id)arg5;
+(void)createAccountMigrationPincodeSessionWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
+(void)verifyAccountMigrationPincode:(id)arg1 migrationPincodeSessionId:(id)arg2 completionBlock:(id)arg3 errorBlock:(id)arg4;
+(void)registerWithSnsIdWithSnsIdType:(int)arg1 accessToken:(id)arg2 region:(id)arg3 mid:(id)arg4 migrationPincodeSessionId:(id)arg5 completionBlock:(id)arg6 errorBlock:(id)arg7;
+(void)verifyIdentityCredentialWithProvider:(int)arg1 accountId:(id)arg2 accountPassword:(id)arg3 completionBlock:(id)arg4 errorBlock:(id)arg5;
+(void)registerDeviceWithoutPhoneNumberWithIdentityCredentialWithRegion:(id)arg1 provider:(int)arg2 accountId:(id)arg3 accountPassword:(id)arg4 mid:(id)arg5 migrationPincodeSessionId:(id)arg6 completionBlock:(id)arg7 errorBlock:(id)arg8;
+(void)verifyIdentityCredentialWithResult:(int)arg1 accountID:(id)arg2 password:(id)arg3 migrationPincodeSessionId:(id)arg4 completionBlock:(id)arg5;
+(void)registerWithExistingSnsIdAndIdentityCredentialWithIdentityCredentialProvider:(int)arg1 accountId:(id)arg2 accountPassword:(id)arg3 region:(id)arg4 migrationPincodeSessionId:(id)arg5 completionBlock:(id)arg6 errorBlock:(id)arg7;
+(void)registerWithSnsIdAndIdentityCredentialWithSnsIdType:(int)arg1 snsAccessToken:(id)arg2 provider:(int)arg3 accountId:(id)arg4 accountPassword:(id)arg5 region:(id)arg6 migrationPincodeSessionId:(id)arg7 completionBlock:(id)arg8 errorBlock:(id)arg9;
+(void)registerDeviceWithoutPhoneNumberWithRegion:(id)arg1 completionBlock:(id)arg2 errorBlock:(id)arg3;
+(void)verifyWithProvider:(int)arg1 accountID:(id)arg2 password:(id)arg3 completionBlock:(id)arg4 errorBlock:(id)arg5;
+(void)registerDeviceCredentialWithoutPhoneNumberWithProvider:(int)arg1 accountID:(id)arg2 password:(id)arg3 region:(id)arg4 mid:(id)arg5 migrationPincodeSessionId:(id)arg6 completionBlock:(id)arg7 errorBlock:(id)arg8;
+(void)unregisterDeviceWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
+(void)updateDeviceUUIDIfNecessary;
+(void)getCountryWithRequestIpWithCompletionBlock:(id)arg1;
-(void)setEnteredMigrationPinCode:(id)arg1;
-(void)setInitialMethod:(int)arg1;
-(void)setCurrentMethod:(int)arg1;
-(int)carrierCode;
-(void)setEnteredPinCode:(id)arg1;
-(void)setUserCountry:(id)arg1;
-(void)setUserCarrier:(id)arg1;
-(void)setAnotherVerificationMethod:(int)arg1;
-(void)setSnsType:(int)arg1;
-(void)setUserPhonenumber:(id)arg1;
-(BOOL)availableTTS;
-(void)resendPinCodeWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
-(void)setSessionData:(id)arg1;
-(void)changeVerificationMethod:(int)arg1 completionBlock:(id)arg2 errorBlock:(id)arg3;
-(void)setProfileImageUploadingState:(int)arg1;
-(void)setProfileName:(id)arg1;
-(void)setProfileImageData:(id)arg1;
-(void)setIsAgreedTermsAfterUpdatingPhone:(BOOL)arg1;
-(void)setMigrationPincodeSessionId:(id)arg1;
-(void)setAccountMigrationCheckType:(int)arg1;
-(id)userCountryCode;
-(void)phoneSetWithRegion:(id)arg1 phone:(id)arg2 navigationController:(id)arg3;
-(void)setErrorState:(int)arg1;
-(void)setSkipHandlingError:(BOOL)arg1;
-(void)verifyUserWithRegion:(id)arg1 phone:(id)arg2 mid:(id)arg3 completionBlock:(id)arg4 errorBlock:(id)arg5;
-(void)setVerificationResult:(int)arg1;
-(void)verifyPhoneWithConfirmationCode:(id)arg1 completionBlock:(id)arg2 errorBlock:(id)arg3;
-(id)networkCode;
-(void)verifyUserWithRegion:(id)arg1 phone:(id)arg2 mid:(id)arg3 update:(BOOL)arg4 completionBlock:(id)arg5 errorBlock:(id)arg6;
-(void)registerDeviceWithIdentityCredentialWithProvider:(int)arg1 accountId:(id)arg2 accountPassword:(id)arg3 migrationPincodeSessionId:(id)arg4 completionBlock:(id)arg5 errorBlock:(id)arg6;
-(void)registerDeviceCredentialWithPhoneNumberWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
-(void)registerDeviceWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
-(id)userCountryNumber;
-(void)verifyPhoneNumber;
-(void)verifyPhoneWithPinCode:(id)arg1 navigationController:(id)arg2;
-(void)verifyAccountMigrationPincode:(id)arg1 navigationController:(id)arg2;
-(void)startUpdateVerificationWithRegion:(id)arg1 phone:(id)arg2 completionBlock:(id)arg3 errorBlock:(id)arg4;
-(void)finishUpdateVerificationWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
-(void)verifyIdentityCredentialWithResultWithCompletionBlock:(id)arg1;
-(void)registerAndSyncWithCompletionBlock:(id)arg1 errorBlock:(id)arg2;
-(void)setHasAccount:(BOOL)arg1;
-(void)setAllowAddressbook:(BOOL)arg1;
-(void)setIsNeedTermsAfterUpdatingPhone:(BOOL)arg1;
-(void)setUserAuthStatus:(id)arg1;
-(void)setAnotherVerificationRequired:(BOOL)arg1;
-(void)setSnsAccessToken:(id)arg1;
-(void)setSnsUserStatus:(id)arg1;
-(void)setSnsProfile:(id)arg1;
-(void)setShouldSyncSnsFriends:(BOOL)arg1;
-(void)setProfileNameUploaded:(BOOL)arg1;
-(void)setDeviceStatus:(unsigned)arg1;
-(void)setPassword:(id)arg1;
-(void)setError:(id)arg1;
-(void)setProvider:(int)arg1;
-(void)setRegistered:(BOOL)arg1;
-(void)setAccountID:(id)arg1;
-(void).cxx_destruct;
@end