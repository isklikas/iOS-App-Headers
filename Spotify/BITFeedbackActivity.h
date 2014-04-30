/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:36 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <BITFeedbackComposeViewControllerDelegate.h>

@interface BITFeedbackActivity : UIActivity <BITFeedbackComposeViewControllerDelegate> {
	UIViewController* _activityViewController; 
	UIImage* _customActivityImage; 
	NSString* _customActivityTitle; 
	NSMutableArray* _items; 
}
@property (nonatomic,retain) UIImage* customActivityImage; 				//@synthesize customActivityImage=_customActivityImage - In the implementation block
@property (nonatomic,retain) NSString* customActivityTitle; 				//@synthesize customActivityTitle=_customActivityTitle - In the implementation block
@property (nonatomic,retain) NSMutableArray* items; 				//@synthesize items=_items - In the implementation block
-(void)feedbackComposeViewController:(id)arg1 didFinishWithResult:(unsigned)arg2;
-(void)setCustomActivityImage:(id)arg1;
-(void)setCustomActivityTitle:(id)arg1;
-(id)init;
-(void)setItems:(id)arg1;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1;
-(id)activityImage;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1;
-(void).cxx_destruct;
@end