/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:04 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNLike : NSObject {
	NSString* _likeId; 
	VNUser* _user; 
}
@property (nonatomic,retain) NSString* likeId; 				//@synthesize likeId=_likeId - In the implementation block
@property (nonatomic,retain) VNUser* user; 				//@synthesize user=_user - In the implementation block
-(id)initWithJSON:(id)arg1;
-(void)setLikeId:(id)arg1;
-(void)setUser:(id)arg1;
-(void).cxx_destruct;
@end