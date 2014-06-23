/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:52 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBShareDialogParams : FBDialogsParams {
	BOOL _dataFailuresFatal; 
	NSURL* _link; 
	NSString* _name; 
	NSString* _caption; 
	NSString* _description; 
	NSURL* _picture; 
	NSArray* _friends; 
	id _place; 
	NSString* _ref; 
}
@property (nonatomic,copy) NSURL* link; 				//@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString* caption; 				//@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString* description; 				//@synthesize description=_description - In the implementation block
@property (nonatomic,copy) NSURL* picture; 				//@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSArray* friends; 				//@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) id place; 				//@synthesize place=_place - In the implementation block
@property (nonatomic,copy) NSString* ref; 				//@synthesize ref=_ref - In the implementation block
@property (assign,nonatomic) BOOL dataFailuresFatal; 				//@synthesize dataFailuresFatal=_dataFailuresFatal - In the implementation block
-(BOOL)isSupportedScheme:(id)arg1;
-(id)dictionaryMethodArgs;
-(id)appBridgeVersion;
-(void)setDataFailuresFatal:(BOOL)arg1;
-(void)setFriends:(id)arg1;
-(void)dealloc;
-(void)setName:(id)arg1;
-(void)setLink:(id)arg1;
-(void)setPicture:(id)arg1;
-(void)setPlace:(id)arg1;
-(void)setDescription:(id)arg1;
-(void)setRef:(id)arg1;
-(void)setCaption:(id)arg1;
@end