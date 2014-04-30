/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:26 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CoverArtView : UIView {
	BOOL _drawDropShadow; 
	BOOL _overrideTrackWithDefaultImage; 
	BOOL _animateTrackImageChange; 
	UIImageView* glossImageView; 
	SPTrack* _track; 
	UIImageView* _imageView; 
	SPAsyncImage* _asyncImage; 
	UIImage* _defaultImage; 
}
@property (nonatomic,retain) SPTrack* track; 				//@synthesize track=_track - In the implementation block
@property (nonatomic,retain) UIImage* defaultImage; 				//@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) UIImage* glossImage; 
@property (assign,nonatomic) BOOL drawDropShadow; 
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) SPAsyncImage* asyncImage; 				//@synthesize asyncImage=_asyncImage - In the implementation block
@property (nonatomic,retain) UIImageView* glossImageView; 
@property (assign,nonatomic) BOOL animateTrackImageChange; 				//@synthesize animateTrackImageChange=_animateTrackImageChange - In the implementation block
-(void)setDrawDropShadow:(BOOL)arg1;
-(void)setGlossImage:(id)arg1;
-(void)setFromTrack:(id)arg1 animated:(BOOL)arg2 showImage:(BOOL)arg3;
-(id)getImageView;
-(void)setAsyncImage:(id)arg1;
-(void)setupGloss;
-(void)setupShadow;
-(void)asyncImageChanged:(id)arg1;
-(void)setAnimateTrackImageChange:(BOOL)arg1;
-(void)swapToImage:(id)arg1 animated:(BOOL)arg2;
-(void)setFromImage:(id)arg1 animated:(BOOL)arg2;
-(void)setGlossImageView:(id)arg1;
-(void)setFromImageLink:(id)arg1 animated:(BOOL)arg2;
-(void)setFromImageURL:(id)arg1 animated:(BOOL)arg2;
-(void)showDefaultImageAnimated:(BOOL)arg1;
-(void)setDefaultImage:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1;
-(void)setImageView:(id)arg1;
-(void)setTrack:(id)arg1;
-(void).cxx_destruct;
@end