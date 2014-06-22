/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:41 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAMPMediaItem : SAMPMediaEntity {
}
@property (nonatomic,copy) NSString* album; 
@property (nonatomic,copy) NSString* artist; 
@property (nonatomic,retain) SACalendar* dateAdded; 
@property (nonatomic,retain) SACalendar* datePurchased; 
@property (nonatomic,copy) NSString* genre; 
@property (nonatomic,retain) SAMPPlaybackInfo* playbackInfo; 
@property (nonatomic,retain) SAMPReleaseInfo* releaseInfo; 
@property (nonatomic,copy) NSString* sortAlbum; 
@property (nonatomic,copy) NSString* sortArtist; 
+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setArtist:(id)arg1;
-(void)setReleaseInfo:(id)arg1;
-(void)setAlbum:(id)arg1;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
-(void)setSortArtist:(id)arg1;
-(void)setDateAdded:(id)arg1;
-(void)setDatePurchased:(id)arg1;
-(void)setPlaybackInfo:(id)arg1;
-(void)setSortAlbum:(id)arg1;
-(void)setGenre:(id)arg1;
@end