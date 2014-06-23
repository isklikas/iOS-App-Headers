/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:32 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIGestureRecognizerDelegate.h>

@interface ImageMapView : UIView <UIGestureRecognizerDelegate> {
	ImageMapSceneObject* currentScene_; 
	UIView* contentView_; 
	UIImage* rootImage_; 
	struct CGAffineTransform affineTransform_; 
	struct CGAffineTransform lastAffineTransform_; 
	NSMutableDictionary* drawList_; 
	NSMutableDictionary* listenerList_; 
	UIImageView* backGroundImage_; 
	CALayer* contentMaskLayer_; 
	UIActivityIndicatorView* act_; 
	NSArray* _actionList; 
}
@property (nonatomic,retain,copy) NSArray* actionList; 				//@synthesize actionList=_actionList - In the implementation block
-(void)setScene:(id)arg1;
-(void)setRootImage:(id)arg1;
-(void)updateImageViewFrame:(id)arg1;
-(void)setLoading:(BOOL)arg1;
-(void)layoutSubviews;
-(void)setAffineTransform:(struct CGAffineTransform)arg1;
-(BOOL)hasImage;
-(void).cxx_destruct;
@end