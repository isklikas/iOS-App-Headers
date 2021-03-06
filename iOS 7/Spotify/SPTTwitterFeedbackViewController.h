/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:04 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIViewControllerTransitioningDelegate.h>

@interface SPTTwitterFeedbackViewController : UIViewController <UIViewControllerTransitioningDelegate> {
	UILabel* _titleLabel; 
	UILabel* _textLabel; 
	UIImageView* _imageView; 
	SPTActionButton* _tweetButton; 
	SPTActionButton* _cancelButton; 
}
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel* textLabel; 				//@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) SPTActionButton* tweetButton; 				//@synthesize tweetButton=_tweetButton - In the implementation block
@property (nonatomic,retain) SPTActionButton* cancelButton; 				//@synthesize cancelButton=_cancelButton - In the implementation block
-(void)setTweetButton:(id)arg1;
-(void)tweetButtonTapped;
-(void)displayTwitterComposeViewController;
-(void)setTextLabel:(id)arg1;
-(void)setCancelButton:(id)arg1;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
-(id)animationControllerForDismissedController:(id)arg1;
-(void)setImageView:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)cancelButtonTapped;
-(void).cxx_destruct;
@end