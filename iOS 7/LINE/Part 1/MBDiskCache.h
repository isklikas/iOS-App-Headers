/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:39 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBDiskCache : NSObject {
	NSString* mCacheDir; 
	NSMutableSet* mScopes; 
	NSMutableDictionary* mItemMaxCounts; 
}
+(id)sharedDiskCache;
+(id)allocWithZone:(NSZone*)arg1;
-(id)pathForRemoteURL:(id)arg1 scope:(id)arg2;
-(id)pathForRemoteURL:(id)arg1 scope:(id)arg2 temp:(BOOL)arg3;
-(BOOL)addScope:(id)arg1;
-(BOOL)setData:(id)arg1 forRemoteURL:(id)arg2 scope:(id)arg3;
-(void)removeContentsOfScope:(id)arg1;
-(id)pathForScope:(id)arg1;
-(void)removeItemOverMaxNum:(id)arg1 maxNum:(int)arg2 timeLimit:(long)arg3;
-(void)emptyCacheThreadWithParam:(id)arg1;
-(void)emptyScope:(id)arg1;
-(BOOL)setImage:(id)arg1 forRemoteURL:(id)arg2 scope:(id)arg3;
-(id)dataForRemoteURL:(id)arg1 scope:(id)arg2;
-(id)imageForRemoteURL:(id)arg1 scope:(id)arg2;
-(id)cacheDirectory;
-(BOOL)isValidScope:(id)arg1;
-(void)emptyScopeThreadWithParam:(id)arg1;
-(BOOL)addScope:(id)arg1 itemMaxCount:(int)arg2;
-(id)scopes;
-(void)resetRepository;
-(void)emptyScope:(id)arg1 before:(id)arg2 duration:(long)arg3;
-(void)emptyCacheBefore:(id)arg1 duration:(long)arg2;
-(id)contentsOfScope:(id)arg1;
-(BOOL)removeExpiredItemAtPath:(id)arg1 expiredTime:(int)arg2 timeLimit:(long)arg3;
-(void)updateAccessTime:(id)arg1;
-(id)commonProxyURL:(id)arg1;
-(void)setupExistingScope;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(void).cxx_destruct;
@end