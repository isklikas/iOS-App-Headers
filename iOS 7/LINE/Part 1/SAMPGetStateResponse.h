/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:50 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,retain) SAMPMediaItem* listeningToItem; 
@property (nonatomic,copy) NSNumber* listeningToMusicApplication; 
@property (nonatomic,copy) NSString* source; 
@property (assign,nonatomic) int state; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setState:(int)arg1;
-(void)setSource:(id)arg1;
-(id)encodedClassName;
-(void)setListeningToItem:(id)arg1;
-(void)setListeningToMusicApplication:(id)arg1;
@end