/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:12 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ArtistInfoModel : NSObject {
	NSURL* _imageURL; 
	NSString* _name; 
	NSString* _subtitle; 
	NSString* _year; 
	NSString* _textBio; 
	NSArray* _pictures; 
	SPURL* _mainPictureLink; 
	NSString* _htmlBio; 
}
@property (nonatomic,copy) NSURL* imageURL; 				//@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString* subtitle; 				//@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString* year; 				//@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSString* textBio; 				//@synthesize textBio=_textBio - In the implementation block
@property (nonatomic,copy) NSArray* pictures; 				//@synthesize pictures=_pictures - In the implementation block
@property (nonatomic,retain) SPURL* mainPictureLink; 				//@synthesize mainPictureLink=_mainPictureLink - In the implementation block
@property (nonatomic,copy) NSString* htmlBio; 				//@synthesize htmlBio=_htmlBio - In the implementation block
-(void)setPictures:(id)arg1;
-(void)setTextBio:(id)arg1;
-(void)setHtmlBio:(id)arg1;
-(void)setMainPictureLink:(id)arg1;
-(void)setName:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(void)setYear:(id)arg1;
-(void)setImageURL:(id)arg1;
-(void).cxx_destruct;
@end