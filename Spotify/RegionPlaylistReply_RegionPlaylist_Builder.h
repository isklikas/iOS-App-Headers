/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:44 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface RegionPlaylistReply_RegionPlaylist_Builder : PBGeneratedMessage_Builder {
	RegionPlaylistReply_RegionPlaylist* result; 
}
@property (retain) RegionPlaylistReply_RegionPlaylist* result; 
-(id)buildPartial;
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)internalGetResult;
-(id)clone;
-(BOOL)hasUri;
-(BOOL)hasCreator;
-(id)clearUri;
-(id)clearName;
-(id)clearCreator;
-(id)setSubscribers:(int)arg1;
-(BOOL)hasSubscribers;
-(int)subscribers;
-(id)clearSubscribers;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(id)setName:(id)arg1;
-(id)name;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)uri;
-(id)creator;
-(id)build;
-(id)setUri:(id)arg1;
-(BOOL)hasName;
-(id)setCreator:(id)arg1;
@end