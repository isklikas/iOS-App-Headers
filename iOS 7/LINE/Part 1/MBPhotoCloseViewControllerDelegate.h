/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:05 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIScrollViewDelegate
@optional
-(void)scrollViewDidScroll(id):arg1 ;
-(void)scrollViewDidZoom(id):arg1 ;
-(void)scrollViewWillBeginDragging(id):arg1 ;
-(void)scrollViewWillEndDragging(id):arg1 withVelocity({):arg2 targetContentOffset(unsigned char):arg3 ;
-(void)scrollViewDidEndDragging(id):arg1 willDecelerate(BOOL):arg2 ;
-(void)scrollViewWillBeginDecelerating(id):arg1 ;
-(void)scrollViewDidEndDecelerating(id):arg1 ;
-(void)scrollViewDidEndScrollingAnimation(id):arg1 ;
-(id)viewForZoomingInScrollView(id):arg1 ;
-(void)scrollViewWillBeginZooming(id):arg1 withView(id):arg2 ;
-(void)scrollViewDidEndZooming(id):arg1 withView(id):arg2 atScale(float):arg3 ;
-(BOOL)scrollViewShouldScrollToTop(id):arg1 ;
-(void)scrollViewDidScrollToTop(id):arg1 ;
@end

@protocol MBPhotoCloseViewControllerDelegate
@required
-(id)imageWithIndex(int):arg1 ;
-(void)setVisiblePhotoIndex(int):arg1 ;
-(void)showAllImageButtonImageView;
-(id)imageWithIndex(int):arg1 ;
-(void)setVisiblePhotoIndex(int):arg1 ;
-(void)showAllImageButtonImageView;
@end
