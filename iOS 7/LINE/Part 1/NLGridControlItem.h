/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:59 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLGridControlItem : NSObject {
	BOOL _enabled; 
	NSString* _title; 
	UIImage* _image; 
	UIImage* _highlightedImage; 
	UIImage* _disabledImage; 
	int _tag; 
	id _target; 
	SEL _action; 
}
@property (nonatomic,retain) NSString* title; 				//@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage* highlightedImage; 				//@synthesize highlightedImage=_highlightedImage - In the implementation block
@property (nonatomic,retain) UIImage* disabledImage; 				//@synthesize disabledImage=_disabledImage - In the implementation block
@property (assign,nonatomic) BOOL enabled; 				//@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int tag; 				//@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) id target; 				//@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action; 				//@synthesize action=_action - In the implementation block
-(void)setDisabledImage:(id)arg1;
-(void)setImage:(id)arg1;
-(id)init;
-(void)setTitle:(id)arg1;
-(id)description;
-(void)setTarget:(id)arg1;
-(void)setTag:(int)arg1;
-(void)setEnabled:(BOOL)arg1;
-(void)setAction:(SEL)arg1;
-(void)setHighlightedImage:(id)arg1;
-(void).cxx_destruct;
@end