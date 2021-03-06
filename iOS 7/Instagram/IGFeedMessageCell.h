/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:34 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGFeedMessageCell : IGPlainTableViewCell {
	UIView* _overlayView; 
	IGImageView* _thumbnailView; 
	UIImageView* _badgeImageView; 
	UILabel* _badgeLabel; 
	UILabel* _topLabel; 
	UILabel* _subLabel; 
	IGFeedMessage* _feedMessage; 
}
@property (nonatomic,retain) IGFeedMessage* feedMessage; 				//@synthesize feedMessage=_feedMessage - In the implementation block
+(id)labelForTopLinePhotoMapsPromo:(id)arg1;
+(id)labelForBottomLinePhotoMapsPromo:(id)arg1;
+(float)heightForFeedMessage:(id)arg1;
-(void)buildBackground;
-(void)buildThumbnail;
-(void)setFeedMessage:(id)arg1;
-(id)initWithReuseIdentifier:(id)arg1;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void).cxx_destruct;
@end