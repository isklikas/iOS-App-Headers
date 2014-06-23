/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:10 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAPerson : SADomainObject {
}
@property (nonatomic,copy) NSArray* addresses; 
@property (nonatomic,copy) NSDate* birthday; 
@property (nonatomic,copy) NSString* company; 
@property (nonatomic,copy) NSArray* emails; 
@property (nonatomic,copy) NSString* firstName; 
@property (nonatomic,copy) NSDictionary* firstNameAPGs; 
@property (nonatomic,copy) NSString* firstNamePhonetic; 
@property (nonatomic,copy) NSString* fullName; 
@property (nonatomic,copy) NSNumber* isBlocked; 
@property (nonatomic,copy) NSString* lastName; 
@property (nonatomic,copy) NSDictionary* lastNameAPGs; 
@property (nonatomic,copy) NSString* lastNamePhonetic; 
@property (nonatomic,copy) NSNumber* me; 
@property (nonatomic,copy) NSString* middleName; 
@property (nonatomic,copy) NSString* nickName; 
@property (nonatomic,copy) NSDictionary* nickNameAPGs; 
@property (nonatomic,copy) NSString* phonemeData; 
@property (nonatomic,copy) NSArray* phones; 
@property (nonatomic,copy) NSString* prefix; 
@property (nonatomic,copy) NSArray* relatedNames; 
@property (nonatomic,copy) NSArray* socialProfiles; 
@property (nonatomic,copy) NSString* suffix; 
+(id)person;
+(id)personWithDictionary:(id)arg1 context:(id)arg2;
-(void)setMiddleName:(id)arg1;
-(void)setBirthday:(id)arg1;
-(void)setRelatedNames:(id)arg1;
-(void)setSocialProfiles:(id)arg1;
-(id)groupIdentifier;
-(void)setCompany:(id)arg1;
-(void)setNickName:(id)arg1;
-(void)setSuffix:(id)arg1;
-(void)setEmails:(id)arg1;
-(void)setPhones:(id)arg1;
-(void)setFirstName:(id)arg1;
-(void)setLastName:(id)arg1;
-(void)setFullName:(id)arg1;
-(void)setAddresses:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setMe:(id)arg1;
-(void)setFirstNameAPGs:(id)arg1;
-(void)setFirstNamePhonetic:(id)arg1;
-(void)setIsBlocked:(id)arg1;
-(void)setLastNameAPGs:(id)arg1;
-(void)setLastNamePhonetic:(id)arg1;
-(void)setNickNameAPGs:(id)arg1;
-(void)setPhonemeData:(id)arg1;
-(void)setPrefix:(id)arg1;
@end