/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:57 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBPhotoCloseViewController : MBViewController {
	id mImageView; 
	int mPhotoIndex; 
	CGRect mStartFrame; 
	UIImage* mImage; 
	UIImageView* mFirstHalfImageView; 
	UIImageView* mSecondHalfImageView; 
	int mPhotoCount; 
	MBPhotoViewerViewController* mPhotoViewController; 
}
-(id)initWithContentView:(id)arg1 parent:(id)arg2 photoIndex:(int)arg3 photoCount:(int)arg4 startFrame:(CGRect)arg5 image:(id)arg6;
-(id)resizeImage:(id)arg1 to:(CGSize)arg2;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)close;
-(void).cxx_destruct;
@end