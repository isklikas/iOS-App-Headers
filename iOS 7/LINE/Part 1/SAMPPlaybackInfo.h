/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:20 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable> {
}
@property (nonatomic,retain) SACalendar* lastPlayedDate; 
@property (assign,nonatomic) int playbackPositionMillis; 
@property (assign,nonatomic) int plays; 
@property (assign,nonatomic) BOOL rememberPlaybackPosition; 
+(id)playbackInfo;
+(id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setLastPlayedDate:(id)arg1;
-(id)encodedClassName;
-(void)setPlaybackPositionMillis:(int)arg1;
-(void)setPlays:(int)arg1;
-(void)setRememberPlaybackPosition:(BOOL)arg1;
@end