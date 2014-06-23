/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:22 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineChannelInfo : NSObject {
	NSString* __channelId; 
	NSString* __name; 
	NSString* __entryPageUrl; 
	NSString* __descriptionText; 
	LineChannelProvider* __provider; 
	int __publicType; 
	NSString* __iconImage; 
	NSArray* __permissions; 
	NSString* __iconThumbnailImage; 
	NSArray* __channelConfigurations; 
	BOOL __lcsAllApiUsable; 
	NSSet* __allowedPermissions; 
	struct {
		unsigned int publicType:1;
		unsigned int lcsAllApiUsable:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* channelId; 				//@synthesize _channelId=__channelId - In the implementation block
@property (nonatomic,retain) NSString* name; 				//@synthesize _name=__name - In the implementation block
@property (nonatomic,retain) NSString* entryPageUrl; 				//@synthesize _entryPageUrl=__entryPageUrl - In the implementation block
@property (nonatomic,retain) NSString* descriptionText; 				//@synthesize _descriptionText=__descriptionText - In the implementation block
@property (nonatomic,retain) LineChannelProvider* provider; 				//@synthesize _provider=__provider - In the implementation block
@property (assign,nonatomic) int publicType; 				//@synthesize _publicType=__publicType - In the implementation block
@property (nonatomic,retain) NSString* iconImage; 				//@synthesize _iconImage=__iconImage - In the implementation block
@property (nonatomic,retain) NSArray* permissions; 				//@synthesize _permissions=__permissions - In the implementation block
@property (nonatomic,retain) NSString* iconThumbnailImage; 				//@synthesize _iconThumbnailImage=__iconThumbnailImage - In the implementation block
@property (nonatomic,retain) NSArray* channelConfigurations; 				//@synthesize _channelConfigurations=__channelConfigurations - In the implementation block
@property (assign,getter=isLcsAllApiUsable,nonatomic) BOOL lcsAllApiUsable; 				//@synthesize _lcsAllApiUsable=__lcsAllApiUsable - In the implementation block
@property (nonatomic,retain) NSSet* allowedPermissions; 				//@synthesize _allowedPermissions=__allowedPermissions - In the implementation block
-(void)setChannelId:(id)arg1;
-(void)read:(id)arg1;
-(void)setPublicType:(int)arg1;
-(void)setAllowedPermissions:(id)arg1;
-(void)setEntryPageUrl:(id)arg1;
-(void)setIconThumbnailImage:(id)arg1;
-(void)setChannelConfigurations:(id)arg1;
-(void)setLcsAllApiUsable:(BOOL)arg1;
-(void)setPermissions:(id)arg1;
-(void)setProvider:(id)arg1;
-(void)setName:(id)arg1;
-(void)setDescriptionText:(id)arg1;
-(void)setIconImage:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end