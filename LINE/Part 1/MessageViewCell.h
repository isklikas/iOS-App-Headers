/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:42 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NMAttributedLabelDelegate.h>

@interface MessageViewCell : UITableViewCell <NMAttributedLabelDelegate> {
	id<MessageViewCellActionDelegate> actionSheetDelegate_; 
	float profileImageOffsetFromLeftEdge; 
	float timeLabelOffsetFromBottom; 
	BOOL hasUnreadMark; 
	BOOL _editMode; 
	short contentType; 
	short sendStatus; 
	unsigned messageCellType; 
	float topMargin; 
	NSAttributedString* attributedString; 
	UIImage* contentImage; 
	NLInformationDateView* _dateView; 
	NLInformationSystemMessageView* _systemView; 
	ProfileImageView* _profileImageView; 
	UILabel* _userNameLabel; 
	UILabel* _timeLabel; 
	UIView* _statusView; 
	UILabel* _sendTimeLabel; 
	UILabel* _readCountLabel; 
	UIButton* _failureButton; 
	NLInformationUnreadView* _unreadMarkView; 
	UIImageView* _soundImageView; 
	NLMessageCouponView* _couponView; 
	NLMessagePresentView* _presentView; 
	NLMessageCallView* _callBubbleView; 
	NLMessageAudioView* _audioBubbleView; 
	NLMessageVideoView* _videoBubbleView; 
	NLMessageGroupBoardView* _groupBoardView; 
	NLMessageAppLinkView* _appLinkView; 
	NLMessageContactView* _contactView; 
	NLMessageTextView* _textView; 
	NLMessageLocationView* _locationView; 
	NLMessagePictureView* _pictureView; 
	NLMessageStickerView* _stickerView; 
	NLMessageImageMapView* _imageMapView; 
	UIImageView* _autoResendIndicator; 
	NLMessageFileView* _fileView; 
	UIButton* _editCheckButton; 
	int _currentSkinType; 
	CGRect mTextBounds; 
}
@property (assign,nonatomic) CGRect textBounds; 
@property (nonatomic,retain) UILabel* userNameLabel; 				//@synthesize userNameLabel=_userNameLabel - In the implementation block
@property (nonatomic,retain) UILabel* timeLabel; 				//@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIView* statusView; 				//@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) UILabel* sendTimeLabel; 				//@synthesize sendTimeLabel=_sendTimeLabel - In the implementation block
@property (nonatomic,retain) UIImageView* autoResendIndicator; 				//@synthesize autoResendIndicator=_autoResendIndicator - In the implementation block
@property (nonatomic,retain) UILabel* readCountLabel; 				//@synthesize readCountLabel=_readCountLabel - In the implementation block
@property (nonatomic,retain) UIButton* failureButton; 				//@synthesize failureButton=_failureButton - In the implementation block
@property (nonatomic,retain) ProfileImageView* profileImageView; 				//@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,retain) NLMessageGroupBoardView* groupBoardView; 				//@synthesize groupBoardView=_groupBoardView - In the implementation block
@property (nonatomic,retain) NLMessageAppLinkView* appLinkView; 				//@synthesize appLinkView=_appLinkView - In the implementation block
@property (nonatomic,retain) NLMessageCouponView* couponView; 				//@synthesize couponView=_couponView - In the implementation block
@property (nonatomic,retain) NLMessageCallView* callBubbleView; 				//@synthesize callBubbleView=_callBubbleView - In the implementation block
@property (nonatomic,retain) NLMessageAudioView* audioBubbleView; 				//@synthesize audioBubbleView=_audioBubbleView - In the implementation block
@property (nonatomic,retain) NLMessageVideoView* videoBubbleView; 				//@synthesize videoBubbleView=_videoBubbleView - In the implementation block
@property (nonatomic,retain) NLMessagePresentView* presentView; 				//@synthesize presentView=_presentView - In the implementation block
@property (nonatomic,retain) NLMessageContactView* contactView; 				//@synthesize contactView=_contactView - In the implementation block
@property (nonatomic,retain) NLMessageTextView* textView; 				//@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NLMessageLocationView* locationView; 				//@synthesize locationView=_locationView - In the implementation block
@property (nonatomic,retain) NLMessagePictureView* pictureView; 				//@synthesize pictureView=_pictureView - In the implementation block
@property (nonatomic,retain) NLMessageImageMapView* imageMapView; 				//@synthesize imageMapView=_imageMapView - In the implementation block
@property (nonatomic,retain) NLMessageStickerView* stickerView; 				//@synthesize stickerView=_stickerView - In the implementation block
@property (nonatomic,retain) NLMessageFileView* fileView; 				//@synthesize fileView=_fileView - In the implementation block
@property (nonatomic,retain) NLInformationDateView* dateView; 				//@synthesize dateView=_dateView - In the implementation block
@property (nonatomic,retain) NLInformationUnreadView* unreadMarkView; 				//@synthesize unreadMarkView=_unreadMarkView - In the implementation block
@property (nonatomic,retain) NLInformationSystemMessageView* systemView; 				//@synthesize systemView=_systemView - In the implementation block
@property (assign,nonatomic) float topMargin; 
@property (assign,nonatomic) unsigned messageCellType; 
@property (assign,nonatomic) short contentType; 
@property (assign,nonatomic) short sendStatus; 
@property (nonatomic,retain) NSAttributedString* attributedString; 
@property (nonatomic,retain) UIImage* contentImage; 
@property (assign,nonatomic) BOOL hasUnreadMark; 
@property (assign,nonatomic) BOOL editMode; 				//@synthesize editMode=_editMode - In the implementation block
@property (nonatomic,retain) UIButton* editCheckButton; 				//@synthesize editCheckButton=_editCheckButton - In the implementation block
@property (nonatomic,retain) UIImageView* soundImageView; 				//@synthesize soundImageView=_soundImageView - In the implementation block
@property (assign,nonatomic) int currentSkinType; 				//@synthesize currentSkinType=_currentSkinType - In the implementation block
@property (assign,nonatomic) id<MessageViewCellActionDelegate> actionSheetDelegate; 
@property (getter=isLandscape,copy) BOOL landscape; 
+(CGSize)sizeForNoImageTypeWithMessageType:(unsigned)arg1;
+(id)noNameLabelType;
+(BOOL)isMessageContentView:(id)arg1;
+(id)noProfileViewType;
-(void)setTextBounds:(CGRect)arg1;
-(id)contentViewForMessageType:(short)arg1;
-(void)setContentImage:(id)arg1;
-(void)setSendStatus:(short)arg1;
-(void)setActionSheetDelegate:(id)arg1;
-(void)setHasUnreadMark:(BOOL)arg1;
-(void)attributedLabel:(id)arg1 linkTapped:(id)arg2 url:(id)arg3 type:(unsigned)arg4;
-(void)attributedLabel:(id)arg1 linkLongTapped:(id)arg2 url:(id)arg3 type:(unsigned)arg4;
-(void)setProfileImageView:(id)arg1;
-(void)setTimeLabel:(id)arg1;
-(unsigned)messageTypeFromIdentifier:(id)arg1;
-(void)setMessageCellType:(unsigned)arg1;
-(void)setCurrentSkinType:(int)arg1;
-(void)setUserNameLabel:(id)arg1;
-(void)setSoundImageView:(id)arg1;
-(void)setSendTimeLabel:(id)arg1;
-(void)setAutoResendIndicator:(id)arg1;
-(void)setReadCountLabel:(id)arg1;
-(void)setEditCheckButton:(id)arg1;
-(void)layoutSubviewsForSystemMessage;
-(void)layoutSubviewsForSentMessage;
-(void)layoutSubviewsForReceivedMessage;
-(void)layoutEditModeIfNeeded;
-(float)adjustUnreadMarkOrigin:(float)arg1;
-(id)layoutSubviewsForMessageType:(short)arg1 bubbleDirection:(unsigned)arg2;
-(id)usingContentViews;
-(float)textWidthForCurrentOrientation;
-(void)setSystemView:(id)arg1;
-(void)setUnreadMarkView:(id)arg1;
-(void)setCouponView:(id)arg1;
-(void)setPresentView:(id)arg1;
-(void)setCallBubbleView:(id)arg1;
-(void)setAudioBubbleView:(id)arg1;
-(void)setVideoBubbleView:(id)arg1;
-(void)setGroupBoardView:(id)arg1;
-(void)setAppLinkView:(id)arg1;
-(void)setContactView:(id)arg1;
-(void)setLocationView:(id)arg1;
-(void)setPictureView:(id)arg1;
-(void)setStickerView:(id)arg1;
-(void)setImageMapView:(id)arg1;
-(void)setFileView:(id)arg1;
-(void)setStatusView:(id)arg1;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
-(void)setFrame:(CGRect)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void)prepareForReuse;
-(void)setTextView:(id)arg1;
-(void)setAttributedString:(id)arg1;
-(void)setFailureButton:(id)arg1;
-(void)setContentType:(short)arg1;
-(void)setTopMargin:(float)arg1;
-(void)setTheme:(unsigned)arg1;
-(void)setEditMode:(BOOL)arg1;
-(void)setDateView:(id)arg1;
-(void).cxx_destruct;
@end