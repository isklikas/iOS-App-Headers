/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:53 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBRichTextContentView : MBBaseChildCellView {
	MBTextLocation* mTextLocation; 
	int mPostViewType; 
	NMAttributedLabel* mTextView; 
	MBCellAttributedLabelDelegate* mTextDelegate; 
}
@property (nonatomic,copy) MBTextLocation* textLocation; 
+(float)heightWithType:(int)arg1 activity:(id)arg2 width:(float)arg3;
-(void)setupWithType:(int)arg1 activity:(id)arg2;
-(void)setCellData:(id)arg1;
-(void).cxx_destruct;
@end