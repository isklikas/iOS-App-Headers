/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:46 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAGetDeferredObjectResponse : SABaseClientBoundCommand {
}
@property (nonatomic,retain) id<SAAceSerializable> object; 
+(id)getDeferredObjectResponse;
+(id)getDeferredObjectResponseWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setObject:(id)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end