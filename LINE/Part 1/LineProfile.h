/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:41 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineProfile : NSObject {
	NSString* __mid; 
	NSString* __userid; 
	NSString* __regionCode; 
	NSString* __phone; 
	NSString* __email; 
	NSString* __displayName; 
	NSString* __phoneticName; 
	NSString* __pictureStatus; 
	NSString* __thumbnailUrl; 
	NSString* __statusMessage; 
	BOOL __allowSearchByUserid; 
	BOOL __allowSearchByEmail; 
	NSString* __picturePath; 
	struct {
		unsigned int allowSearchByUserid:1;
		unsigned int allowSearchByEmail:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* mid; 				//@synthesize _mid=__mid - In the implementation block
@property (nonatomic,retain) NSString* userid; 				//@synthesize _userid=__userid - In the implementation block
@property (nonatomic,retain) NSString* regionCode; 				//@synthesize _regionCode=__regionCode - In the implementation block
@property (nonatomic,retain) NSString* phone; 				//@synthesize _phone=__phone - In the implementation block
@property (nonatomic,retain) NSString* email; 				//@synthesize _email=__email - In the implementation block
@property (nonatomic,retain) NSString* displayName; 				//@synthesize _displayName=__displayName - In the implementation block
@property (nonatomic,retain) NSString* phoneticName; 				//@synthesize _phoneticName=__phoneticName - In the implementation block
@property (nonatomic,retain) NSString* pictureStatus; 				//@synthesize _pictureStatus=__pictureStatus - In the implementation block
@property (nonatomic,retain) NSString* thumbnailUrl; 				//@synthesize _thumbnailUrl=__thumbnailUrl - In the implementation block
@property (nonatomic,retain) NSString* statusMessage; 				//@synthesize _statusMessage=__statusMessage - In the implementation block
@property (assign,getter=isAllowSearchByUserid,nonatomic) BOOL allowSearchByUserid; 				//@synthesize _allowSearchByUserid=__allowSearchByUserid - In the implementation block
@property (assign,getter=isAllowSearchByEmail,nonatomic) BOOL allowSearchByEmail; 				//@synthesize _allowSearchByEmail=__allowSearchByEmail - In the implementation block
@property (nonatomic,retain) NSString* picturePath; 				//@synthesize _picturePath=__picturePath - In the implementation block
-(void)setMid:(id)arg1;
-(void)setPictureStatus:(id)arg1;
-(void)setRegionCode:(id)arg1;
-(void)read:(id)arg1;
-(void)setPicturePath:(id)arg1;
-(void)setUserid:(id)arg1;
-(void)setAllowSearchByUserid:(BOOL)arg1;
-(void)setThumbnailUrl:(id)arg1;
-(void)setAllowSearchByEmail:(BOOL)arg1;
-(void)setEmail:(id)arg1;
-(void)setPhone:(id)arg1;
-(void)setPhoneticName:(id)arg1;
-(void)setStatusMessage:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end