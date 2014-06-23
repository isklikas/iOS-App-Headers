/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:08 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineBuddyProfile : NSObject {
	NSString* __buddyId; 
	NSString* __mid; 
	NSString* __searchId; 
	NSString* __displayName; 
	NSString* __statusMessage; 
	long long __contactCount; 
	struct {
		unsigned int contactCount:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* buddyId; 				//@synthesize _buddyId=__buddyId - In the implementation block
@property (nonatomic,retain) NSString* mid; 				//@synthesize _mid=__mid - In the implementation block
@property (nonatomic,retain) NSString* searchId; 				//@synthesize _searchId=__searchId - In the implementation block
@property (nonatomic,retain) NSString* displayName; 				//@synthesize _displayName=__displayName - In the implementation block
@property (nonatomic,retain) NSString* statusMessage; 				//@synthesize _statusMessage=__statusMessage - In the implementation block
@property (assign,nonatomic) long long contactCount; 				//@synthesize _contactCount=__contactCount - In the implementation block
-(void)setMid:(id)arg1;
-(void)read:(id)arg1;
-(void)setBuddyId:(id)arg1;
-(void)setSearchId:(id)arg1;
-(void)setContactCount:(long long)arg1;
-(void)setStatusMessage:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end