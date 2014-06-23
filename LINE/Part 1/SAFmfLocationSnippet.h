/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAFmfLocationSnippet : SAUISnippet {
}
@property (nonatomic,copy) NSNumber* atRequestedLocation; 
@property (nonatomic,copy) NSArray* locations; 
@property (nonatomic,copy) NSString* proximity; 
@property (nonatomic,copy) NSURL* searchContext; 
+(id)locationSnippet;
+(id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;
-(void)setProximity:(id)arg1;
-(id)groupIdentifier;
-(void)setLocations:(id)arg1;
-(void)setSearchContext:(id)arg1;
-(id)encodedClassName;
-(void)setAtRequestedLocation:(id)arg1;
@end