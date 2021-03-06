/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:04 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAEmail : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSString* emailAddress; 
@property (nonatomic,copy) NSNumber* favoriteFacetime; 
@property (nonatomic,copy) NSNumber* favoriteFacetimeAudio; 
@property (nonatomic,copy) NSString* label; 
+(id)emailWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setLabel:(id)arg1;
-(void)setEmailAddress:(id)arg1;
-(id)encodedClassName;
-(void)setFavoriteFacetime:(id)arg1;
-(void)setFavoriteFacetimeAudio:(id)arg1;
@end