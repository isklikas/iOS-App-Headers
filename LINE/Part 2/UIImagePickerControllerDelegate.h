/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:52 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UINavigationControllerDelegate
@optional
-(void)navigationController(id):arg1 willShowViewController(id):arg2 animated(BOOL):arg3 ;
-(void)navigationController(id):arg1 didShowViewController(id):arg2 animated(BOOL):arg3 ;
-(id)navigationController(id):arg1 animationControllerForOperation(int):arg2 fromViewController(id):arg3 toViewController(id):arg4 ;
-(id)navigationController(id):arg1 interactionControllerForAnimationController(id):arg2 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations(id):arg1 ;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation(id):arg1 ;
@end

@protocol UIImagePickerControllerDelegate
@optional
-(void)imagePickerControllerDidCancel(id):arg1 ;
-(void)imagePickerController(id):arg1 didFinishPickingMediaWithInfo(id):arg2 ;
-(void)imagePickerController(id):arg1 didFinishPickingImage(id):arg2 editingInfo(id):arg3 ;
@end
