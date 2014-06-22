/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:08 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBKeychainStoreDelegate.h>

@interface FBKeychainItemController : NSObject <FBKeychainStoreDelegate> {
	NSString* _serviceID; 
	NSString* _userID; 
	NSString* _accessGroup; 
}
@property (nonatomic,copy) NSString* serviceID; 				//@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString* userID; 				//@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString* accessGroup; 				//@synthesize accessGroup=_accessGroup - In the implementation block
+(id)keychainWithService:(id)arg1;
+(id)keychainWithService:(id)arg1 appBundle:(id)arg2;
+(id)sessionKeychainWithAppBundle:(id)arg1;
+(id)mainAppSessionKeychain;
-(id)loadItem:(id*)arg1;
-(BOOL)updateItem:(id)arg1 error:(id*)arg2;
-(id)initWithService:(id)arg1 appBundle:(id)arg2;
-(id)keychainDictionaryForData:(id)arg1;
-(BOOL)supportsServicesWithMultipleAccounts;
-(BOOL)limitToOneResult;
-(id)dataForKeychainResult:(id)arg1;
-(id)initWithServiceID:(id)arg1 accessGroup:(id)arg2 userID:(id)arg3;
-(id)initWithService:(id)arg1 appBundle:(id)arg2 userID:(id)arg3;
-(id)initWithServiceID:(id)arg1 accessGroup:(id)arg2;
-(void)createItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(id)arg3 onError:(id)arg4;
-(void)loadItemWithTargetQueue:(id)arg1 onSuccess:(id)arg2 onError:(id)arg3;
-(void)saveItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(id)arg3 onError:(id)arg4;
-(void)updateItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(id)arg3 onError:(id)arg4;
-(void)removeItemWithTargetQueue:(id)arg1 onSuccess:(id)arg2 onError:(id)arg3;
-(BOOL)createItem:(id)arg1 error:(id*)arg2;
-(BOOL)saveItem:(id)arg1 error:(id*)arg2;
-(BOOL)removeItem:(id*)arg1;
-(void).cxx_destruct;
@end