/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:24 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGImageViewDelegate.h>

@interface IGMediaThumbnailView : IGImageView <IGImageViewDelegate> {
	UIView* _playGlyphView; 
	UIImageView* _playGlyphImageView; 
	BOOL _showPlayGlyph; 
	BOOL _pendingShowPlayGlyph; 
}
-(void)showPlayGlyph:(BOOL)arg1;
-(void)notifyDelegateOfSuccess;
-(id)initWithFrame:(CGRect)arg1;
-(void)setFrame:(CGRect)arg1;
-(void).cxx_destruct;
@end