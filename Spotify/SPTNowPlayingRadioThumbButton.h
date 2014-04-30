/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:29 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTNowPlayingRadioThumbButton : UIButton <SPTThemableView> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	unsigned _type; 
}
@property (assign,nonatomic) unsigned type; 				//@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)buttonWithType:(unsigned)arg1;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(id)initWithFrame:(CGRect)arg1 andType:(unsigned)arg2;
-(void)dealloc;
-(void)setType:(unsigned)arg1;
-(void).cxx_destruct;
@end