/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:01 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <FBKeychainStoreDelegate.h>

@interface FBKeychainMultiItemController : NSObject <FBKeychainStoreDelegate> {
	NSString* _serviceID; 
	NSString* _accessGroup; 
}
@property (nonatomic,copy) NSString* serviceID; 				//@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString* accessGroup; 				//@synthesize accessGroup=_accessGroup - In the implementation block
-(id)keychainDictionaryForData:(id)arg1;
-(BOOL)supportsServicesWithMultipleAccounts;
-(BOOL)limitToOneResult;
-(id)dataForKeychainResult:(id)arg1;
-(id)initWithServiceID:(id)arg1 accessGroup:(id)arg2;
-(void)loadItemsWithTargetQueue:(id)arg1 onSuccess:(id)arg2 onError:(id)arg3;
-(id)loadItems:(id*)arg1;
-(id)userID;
-(void).cxx_destruct;
@end