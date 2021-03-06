/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:11 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SASocialProfile : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSString* serviceType; 
@property (nonatomic,copy) NSString* url; 
@property (nonatomic,copy) NSString* userName; 
+(id)socialProfile;
+(id)socialProfileWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setUrl:(id)arg1;
-(void)setServiceType:(id)arg1;
-(void)setUserName:(id)arg1;
-(id)encodedClassName;
@end