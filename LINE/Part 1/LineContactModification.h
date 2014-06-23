/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:09 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineContactModification : NSObject {
	int __type; 
	NSString* __luid; 
	NSArray* __phones; 
	NSArray* __emails; 
	NSArray* __userids; 
	struct {
		unsigned int type:1;
	} __isSet; 
}
@property (assign,nonatomic) int type; 				//@synthesize _type=__type - In the implementation block
@property (nonatomic,retain) NSString* luid; 				//@synthesize _luid=__luid - In the implementation block
@property (nonatomic,retain) NSArray* phones; 				//@synthesize _phones=__phones - In the implementation block
@property (nonatomic,retain) NSArray* emails; 				//@synthesize _emails=__emails - In the implementation block
@property (nonatomic,retain) NSArray* userids; 				//@synthesize _userids=__userids - In the implementation block
-(void)read:(id)arg1;
-(void)setLuid:(id)arg1;
-(void)setUserids:(id)arg1;
-(void)setType:(int)arg1;
-(void)setEmails:(id)arg1;
-(void)setPhones:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end