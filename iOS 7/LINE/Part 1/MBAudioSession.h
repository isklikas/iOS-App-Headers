/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:20 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBAudioSession : NSObject {
	BOOL _checkedPluggedHeadphone; 
	BOOL _pluggedHeadphone; 
	BOOL _isSnapMovieSoundOn; 
}
@property (assign,nonatomic) BOOL checkedPluggedHeadphone; 				//@synthesize checkedPluggedHeadphone=_checkedPluggedHeadphone - In the implementation block
@property (assign,nonatomic) BOOL pluggedHeadphone; 				//@synthesize pluggedHeadphone=_pluggedHeadphone - In the implementation block
@property (assign,nonatomic) BOOL isSnapMovieSoundOn; 				//@synthesize isSnapMovieSoundOn=_isSnapMovieSoundOn - In the implementation block
+(id)sharedAudioSession;
+(BOOL)isPluggedHeadphone;
+(id)allocWithZone:(NSZone*)arg1;
-(void)setAudioSesstionCategoryByVolume:(float)arg1;
-(void)setIsSnapMovieSoundOn:(BOOL)arg1;
-(void)setCheckedPluggedHeadphone:(BOOL)arg1;
-(void)setPluggedHeadphone:(BOOL)arg1;
-(void)allowMixing:(BOOL)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
@end