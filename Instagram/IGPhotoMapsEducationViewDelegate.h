/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:48 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol MKMapViewDelegate
@optional
-(void)mapView(id):arg1 didAddAnnotationViews(id):arg2 ;
-(void)mapView(id):arg1 regionWillChangeAnimated(BOOL):arg2 ;
-(void)mapView(id):arg1 regionDidChangeAnimated(BOOL):arg2 ;
-(void)mapViewWillStartLoadingMap(id):arg1 ;
-(void)mapViewDidFinishLoadingMap(id):arg1 ;
-(void)mapViewDidFailLoadingMap(id):arg1 withError(id):arg2 ;
-(void)mapViewWillStartRenderingMap(id):arg1 ;
-(void)mapViewDidFinishRenderingMap(id):arg1 fullyRendered(BOOL):arg2 ;
-(id)mapView(id):arg1 viewForAnnotation(id):arg2 ;
-(void)mapView(id):arg1 annotationView(id):arg2 calloutAccessoryControlTapped(id):arg3 ;
-(void)mapView(id):arg1 didSelectAnnotationView(id):arg2 ;
-(void)mapView(id):arg1 didDeselectAnnotationView(id):arg2 ;
-(void)mapViewWillStartLocatingUser(id):arg1 ;
-(void)mapViewDidStopLocatingUser(id):arg1 ;
-(void)mapView(id):arg1 didUpdateUserLocation(id):arg2 ;
-(void)mapView(id):arg1 didFailToLocateUserWithError(id):arg2 ;
-(void)mapView(id):arg1 annotationView(id):arg2 didChangeDragState(unsigned):arg3 fromOldState(unsigned):arg4 ;
-(void)mapView(id):arg1 didChangeUserTrackingMode(int):arg2 animated(BOOL):arg3 ;
-(id)mapView(id):arg1 rendererForOverlay(id):arg2 ;
-(void)mapView(id):arg1 didAddOverlayRenderers(id):arg2 ;
-(id)mapView(id):arg1 viewForOverlay(id):arg2 ;
-(void)mapView(id):arg1 didAddOverlayViews(id):arg2 ;
@end

@protocol IGPhotoMapDataSourceDelegate
@required
-(void)onQuadtreeReceived(id):arg1 ;
-(void)onQuadtreeRequestFailed(id):arg1 ;
-(void)onQuadtreeReceived(id):arg1 ;
-(void)onQuadtreeRequestFailed(id):arg1 ;
@end

@protocol IGEditBubbleAnnotationDelegate
@required
-(void)editBubbleAnnotationView(id):arg1 onEditCluster(id):arg2 ;
-(void)editBubbleAnnotationView(id):arg1 onZoomToCluster(id):arg2 ;
-(BOOL)canZoomToCluster(id):arg1 ;
-(void)editBubbleAnnotationView(id):arg1 onEditCluster(id):arg2 ;
-(void)editBubbleAnnotationView(id):arg1 onZoomToCluster(id):arg2 ;
-(BOOL)canZoomToCluster(id):arg1 ;
@end

@protocol UIGestureRecognizerDelegate
@optional
-(BOOL)gestureRecognizerShouldBegin(id):arg1 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRequireFailureOfGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldBeRequiredToFailByGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldReceiveTouch(id):arg2 ;
@end

@protocol IGPhotoMapGridviewOverlayDelegate
@required
-(BOOL)hasPermanentlyDeletedMedia;
-(id)editManager;
-(BOOL)isInEditMode;
-(void)toggleEditMode;
-(void)didDismissPhotoMapGridView;
-(void)submitEditsAndPromptForConfirmation(BOOL):arg1 ;
-(void)didTapPhoto(id):arg1 ;
-(BOOL)canEditMap;
-(void)cancelEditMode;
-(BOOL)hasPermanentlyDeletedMedia;
-(id)editManager;
-(BOOL)isInEditMode;
-(void)toggleEditMode;
-(void)didDismissPhotoMapGridView;
-(void)submitEditsAndPromptForConfirmation(BOOL):arg1 ;
-(void)didTapPhoto(id):arg1 ;
-(BOOL)canEditMap;
-(void)cancelEditMode;
@end

@protocol IGClusterAnnotationViewDelegate
@required
-(void)clusterAnnotationView(id):arg1 explosionDidFinish(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 implosionDidFinish(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 fullScreenOpened(BOOL):arg2 withTouchedTile(id):arg3 ;
-(void)clusterAnnotationView(id):arg1 fullScreenClosed(BOOL):arg2 ;
-(BOOL)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)clusterAnnotationView(id):arg1 closeCluster(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 onDoubleTapFor(id):arg2 ;
-(void)clusterAnnotationView(id):arg1 restoreDidFinish(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 infoButtonTappedFor(id):arg2 ;
-(void)clusterAnnotationView(id):arg1 showAllPhotosInCluster(id):arg2 ;
-(BOOL)isInEditMode;
-(void)clusterAnnotationView(id):arg1 explosionDidFinish(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 implosionDidFinish(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 fullScreenOpened(BOOL):arg2 withTouchedTile(id):arg3 ;
-(void)clusterAnnotationView(id):arg1 fullScreenClosed(BOOL):arg2 ;
-(BOOL)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)clusterAnnotationView(id):arg1 closeCluster(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 onDoubleTapFor(id):arg2 ;
-(void)clusterAnnotationView(id):arg1 restoreDidFinish(BOOL):arg2 ;
-(void)clusterAnnotationView(id):arg1 infoButtonTappedFor(id):arg2 ;
-(void)clusterAnnotationView(id):arg1 showAllPhotosInCluster(id):arg2 ;
-(BOOL)isInEditMode;
@end

@protocol IGPhotoMapReviewDelegate
@required
-(void)onReviewModeCanceled;
-(void)onReviewModeCompleted(id):arg1 ;
-(id)user;
-(void)onReviewModeCanceled;
-(void)onReviewModeCompleted(id):arg1 ;
-(id)user;
@end

@protocol IGPhotoMapEditManagerDelegate
@required
-(void)photoMapEditManager(id):arg1 onDeleteRequestFailed(BOOL):arg2 ;
-(void)photoMapEditManager(id):arg1 onDeleteRequestFinished(id):arg2 ;
-(void)photoMapEditManager(id):arg1 onDeleteRequestStarted(int):arg2 ;
-(void)photoMapEditManager(id):arg1 onDeleteRequestFailed(BOOL):arg2 ;
-(void)photoMapEditManager(id):arg1 onDeleteRequestFinished(id):arg2 ;
-(void)photoMapEditManager(id):arg1 onDeleteRequestStarted(int):arg2 ;
@end

@protocol IGPhotoMapsEducationViewDelegate
@required
-(void)photoMapsEducationView(id):arg1 viewWasAccepted(BOOL):arg2 ;
-(void)photoMapsEducationView(id):arg1 viewWasAccepted(BOOL):arg2 ;
@end
