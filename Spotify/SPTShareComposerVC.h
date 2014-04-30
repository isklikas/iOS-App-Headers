/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:56 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UITextViewDelegate.h>
#import <SPTHTTPImageLoaderDelegate.h>
#import <SPTShareHandlerDelegate.h>

@interface SPTShareComposerVC : UIViewController <UITextViewDelegate, SPTHTTPImageLoaderDelegate, SPTShareHandlerDelegate> {
	id _didSendBlock; 
	NSURL* _itemURL; 
	NSString* _description; 
	NSURL* _imageLink; 
	NSString* _shareTypeString; 
	SPTShareHandler* _shareHandler; 
	SPGradientView* _gradient; 
	SPTImageBlurView* _blurView; 
	UIImageView* _imageView; 
	UILabel* _descriptionLabel; 
	UITextView* _messageTextView; 
	UILabel* _messagePlaceholder; 
	UILabel* _charCountLabel; 
	SPTHTTPImageLoader* _imageLoader; 
	UIImage* _itemImage; 
}
@property (nonatomic,copy) id didSendBlock; 				//@synthesize didSendBlock=_didSendBlock - In the implementation block
@property (nonatomic,retain) NSURL* itemURL; 				//@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSString* description; 				//@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSURL* imageLink; 				//@synthesize imageLink=_imageLink - In the implementation block
@property (nonatomic,retain) NSString* shareTypeString; 				//@synthesize shareTypeString=_shareTypeString - In the implementation block
@property (nonatomic,retain) SPTShareHandler* shareHandler; 				//@synthesize shareHandler=_shareHandler - In the implementation block
@property (nonatomic,retain) SPGradientView* gradient; 				//@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) SPTImageBlurView* blurView; 				//@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel* descriptionLabel; 				//@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UITextView* messageTextView; 				//@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) UILabel* messagePlaceholder; 				//@synthesize messagePlaceholder=_messagePlaceholder - In the implementation block
@property (nonatomic,retain) UILabel* charCountLabel; 				//@synthesize charCountLabel=_charCountLabel - In the implementation block
@property (nonatomic,retain) SPTHTTPImageLoader* imageLoader; 				//@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) UIImage* itemImage; 				//@synthesize itemImage=_itemImage - In the implementation block
-(void)applyTheme;
-(void)sendButtonTapped;
-(id)imageToShow;
-(void)setMessageTextView:(id)arg1;
-(void)setMessagePlaceholder:(id)arg1;
-(void)setCharCountLabel:(id)arg1;
-(void)updateCharCountTextColor;
-(void)imageLoader:(id)arg1 didFinishLoadingImage:(id)arg2 forURL:(id)arg3 context:(id)arg4 loadedSynchronously:(BOOL)arg5;
-(void)setDidSendBlock:(id)arg1;
-(void)setItemURL:(id)arg1;
-(void)setImageLink:(id)arg1;
-(void)setShareTypeString:(id)arg1;
-(void)setImageLoader:(id)arg1;
-(void)shareHandlerDidSucceed:(id)arg1;
-(void)shareHandler:(id)arg1 didFailWithError:(id)arg2;
-(void)showAlertOfType:(unsigned)arg1;
-(id)initWithURL:(id)arg1 description:(id)arg2 image:(id)arg3 imageLink:(id)arg4 shareHandler:(id)arg5 shareType:(id)arg6;
-(void)setShareHandler:(id)arg1;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)setImageView:(id)arg1;
-(void)send;
-(void)setGradient:(id)arg1;
-(void)setBlurView:(id)arg1;
-(void)setDescriptionLabel:(id)arg1;
-(void)setItemImage:(id)arg1;
-(void)setDescription:(id)arg1;
-(void).cxx_destruct;
@end