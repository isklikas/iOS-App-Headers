/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:07 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PSTCollectionReusableView : UIView {
	PSTCollectionViewLayoutAttributes* _layoutAttributes; 
	NSString* _reuseIdentifier; 
	PSTCollectionView* _collectionView; 
	struct {
		unsigned int inUpdateAnimation:1;
	} _reusableViewFlags; 
	BOOL[50] filler; 
}
@property (nonatomic,copy) NSString* reuseIdentifier; 				//@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) PSTCollectionView* collectionView; 				//@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PSTCollectionViewLayoutAttributes* layoutAttributes; 				//@synthesize layoutAttributes=_layoutAttributes - In the implementation block
-(BOOL)isInUpdateAnimation;
-(void)setInUpdateAnimation:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(id)initWithCoder:(id)arg1;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(id)arg1;
-(void)applyLayoutAttributes:(id)arg1;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
-(void)setCollectionView:(id)arg1;
-(void)setLayoutAttributes:(id)arg1;
-(void).cxx_destruct;
@end