/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:15 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MBURLImageObserving.h>
#import <MBLikeLayerViewDelegate.h>

@interface MBPhotoViewerViewController : MBActivityEndViewController <MBURLImageObserving, MBLikeLayerViewDelegate> {
	id postImageView; 
	UIWindow* window; 
	UIWindow* keyWindow; 
	UIView* backgroundView; 
	MBPhotoPageScrollView* pagingScrollView; 
	MBPhotoRetryView* retryView; 
	MBLoadingIndicatorView* loadingIndicator; 
	int currentStatusBarStyle; 
	int statusOrientation; 
	MBActivity* photoOwner; 
	NSArray* photos; 
	CGRect thumbnailFrame; 
	int photoIndex; 
	int initPhotoIndex; 
	NSMutableDictionary* urlImages; 
	CGPoint photoScrollOffset; 
	int draggingClose; 
	BOOL willDraggingClose; 
	BOOL willDismiss; 
	BOOL isRotating; 
	BOOL navigationBarHiddenByDoubleTap; 
	BOOL isPostStatusNormal; 
	BOOL statusBarHidden; 
	MBPhotoViewerActions* photoViewerActions; 
	BOOL _shouldRotate; 
	MBActivity* _activity; 
	MBPhotoPostDetailContentView* _postDetailContentView; 
	MBPhotoCommentViewer* _photoCommentViewer; 
	int _statusBarStyle; 
}
@property (nonatomic,copy) MBActivity* activity; 				//@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy) MBPhotoPostDetailContentView* postDetailContentView; 				//@synthesize postDetailContentView=_postDetailContentView - In the implementation block
@property (nonatomic,retain) MBPhotoCommentViewer* photoCommentViewer; 				//@synthesize photoCommentViewer=_photoCommentViewer - In the implementation block
@property (nonatomic,copy) int statusBarStyle; 				//@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldRotate; 				//@synthesize shouldRotate=_shouldRotate - In the implementation block
@property (nonatomic,copy) MBIndicatorLayerView* indicatorLayer; 
-(void)statusBarOrientationDidChanged:(id)arg1;
-(void)hideInAppBrowser:(id)arg1;
-(void)setStatusBarStyleForiOS7:(int)arg1;
-(void)photoViewSetHidden:(id)arg1;
-(void)showRetryMessage;
-(void)postManager:(id)arg1 didFinishCreatingLikeWithError:(id)arg2;
-(id)initWithPhotoOwner:(id)arg1 sourceType:(id)arg2 photoIndex:(int)arg3 photoFrame:(CGRect)arg4 contentView:(id)arg5;
-(void)showPhotoViewController;
-(void)closeButtonAction;
-(void)activityDidUpdate:(id)arg1;
-(void)didEnterBackground:(id)arg1;
-(void)viewWillShowWithPhotoViewer:(id)arg1;
-(void)viewWillHideWithPhotoViewer:(id)arg1;
-(void)hidePhotoViewController;
-(void)removeURLImageObserver;
-(void)setupPagingScrollView;
-(void)loadPostStatusWithLoadingIndicator:(BOOL)arg1;
-(void)setupPostContentView;
-(CGRect)frameForPagingScrollView;
-(void)updateTitleWithPageIndex:(int)arg1;
-(void)registerActions;
-(void)layoutPagingScrollView;
-(void)layoutPostContentView;
-(BOOL)forbiddenSavingPhotoWithIndex:(int)arg1;
-(void)clearTitle;
-(void)setStatusBarForiOS7:(BOOL)arg1;
-(void)hideActivityIndicator;
-(void)hideRetryMessage;
-(void)updateNavigationBar;
-(void)hideNavigationBarWithAnimation:(BOOL)arg1;
-(void)hideDetailContentViewWithAnimation:(BOOL)arg1;
-(void)hideTargetImageView;
-(void)photoImageScrollViewDidScroll:(id)arg1;
-(void)showNavigationBar;
-(void)showDetailContentView;
-(void)imageDidFinishSavingWithError:(id)arg1;
-(int)photoIndexForURL:(id)arg1;
-(BOOL)savingPhotoAvailable;
-(void)saveImage:(id)arg1;
-(void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
-(void)showErrorAlert:(id)arg1;
-(void)setShouldRotate:(BOOL)arg1;
-(void)URLImage:(id)arg1 didLoadImage:(id)arg2 error:(id)arg3;
-(void)likeLayerView:(id)arg1 didLikeButtonActionWithLikeType:(id)arg2;
-(CGSize)contentSizeForPagingScrollView;
-(id)photoPageScrollView:(id)arg1 photoForPageIndex:(int)arg2;
-(void)photoImageScrollViewDidEndScrolling:(id)arg1;
-(BOOL)photoPageScrollViewShouldTile;
-(void)photoPageScrollView:(id)arg1 willScrollAtIndex:(int)arg2;
-(void)photoPageScrollViewDidBeginScrolling:(id)arg1;
-(void)photoPageScrollViewDidEndScrolling:(id)arg1;
-(void)photoPageScrollViewDidTap:(id)arg1;
-(void)photoPageScrollViewDidDoubleTapZoomIn:(id)arg1;
-(void)photoPageScrollViewDidDoubleTapZoomOut:(id)arg1;
-(void)photoPageScrollView:(id)arg1 requestImageAtIndex:(int)arg2;
-(id)photoPageScrollView:(id)arg1 imageAtIndex:(int)arg2;
-(void)photoPageScrollViewClose;
-(void)photoViewer:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3;
-(void)setPhotoCommentViewer:(id)arg1;
-(void)save;
-(void)controllerDidChangeContent:(id)arg1;
-(void)controllerWillChangeContent:(id)arg1;
-(void)showActivityIndicator:(BOOL)arg1;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1;
-(int)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)layout;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(int)arg1;
-(void)attemptRotationToDeviceOrientation;
-(void)close;
-(void)update;
-(void).cxx_destruct;
@end