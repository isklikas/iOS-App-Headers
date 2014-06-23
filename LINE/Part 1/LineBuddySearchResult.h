/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:50 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineBuddySearchResult : NSObject {
	NSString* __mid; 
	NSString* __displayName; 
	NSString* __pictureStatus; 
	NSString* __picturePath; 
	NSString* __statusMessage; 
	BOOL __businessAccount; 
	struct {
		unsigned int businessAccount:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* mid; 				//@synthesize _mid=__mid - In the implementation block
@property (nonatomic,retain) NSString* displayName; 				//@synthesize _displayName=__displayName - In the implementation block
@property (nonatomic,retain) NSString* pictureStatus; 				//@synthesize _pictureStatus=__pictureStatus - In the implementation block
@property (nonatomic,retain) NSString* picturePath; 				//@synthesize _picturePath=__picturePath - In the implementation block
@property (nonatomic,retain) NSString* statusMessage; 				//@synthesize _statusMessage=__statusMessage - In the implementation block
@property (assign,getter=isBusinessAccount,nonatomic) BOOL businessAccount; 				//@synthesize _businessAccount=__businessAccount - In the implementation block
-(void)setMid:(id)arg1;
-(void)setPictureStatus:(id)arg1;
-(void)read:(id)arg1;
-(void)setPicturePath:(id)arg1;
-(void)setBusinessAccount:(BOOL)arg1;
-(void)setStatusMessage:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end