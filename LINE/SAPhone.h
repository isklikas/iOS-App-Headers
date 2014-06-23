/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:18 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAPhone : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSNumber* favoriteFacetime; 
@property (nonatomic,copy) NSNumber* favoriteFacetimeAudio; 
@property (nonatomic,copy) NSNumber* favoriteVoice; 
@property (nonatomic,copy) NSString* label; 
@property (nonatomic,copy) NSString* number; 
+(id)phone;
+(id)phoneWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setLabel:(id)arg1;
-(void)setNumber:(id)arg1;
-(id)encodedClassName;
-(void)setFavoriteFacetime:(id)arg1;
-(void)setFavoriteFacetimeAudio:(id)arg1;
-(void)setFavoriteVoice:(id)arg1;
@end