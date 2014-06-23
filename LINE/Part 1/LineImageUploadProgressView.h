/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:26 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineImageUploadProgressView : LineProgressInterface {
	UIImageView* bgImageView_; 
	UIImageView* thumbView_; 
	UIImageView* thumbCoverView_; 
	UIProgressView* progressBar_; 
	UILabel* stateLabel_; 
	UIButton* cancelButton_; 
	UIButton* failedButton_; 
	BOOL isSendable_; 
	id<LineImageUploadProgressViewDelegate> uploadDelegate; 
}
@property (assign,nonatomic) BOOL isSendable; 
@property (assign,nonatomic) id<LineImageUploadProgressViewDelegate> uploadDelegate; 
-(void)actionCancel:(id)arg1;
-(void)actionFailed:(id)arg1;
-(void)setIsSendable:(BOOL)arg1;
-(void)setUploadDelegate:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setProgress:(float)arg1;
-(void)setThumbnail:(id)arg1;
-(void).cxx_destruct;
@end