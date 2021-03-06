/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:02 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLTalkMessageEditManager : NSObject {
	unsigned _nonOBSMessageCount; 
	unsigned _OBSMessageCount; 
	unsigned _editModeCategory; 
	NSMutableSet* _talkMessageSet; 
	NLSafeUnretainedObject* _weakSelf; 
	unsigned _locationMessageCount; 
}
@property (nonatomic,copy) NSArray* sortedSharableObject; 
@property (nonatomic,copy) NSArray* sortedTalkMessages; 
@property (nonatomic,copy) NSSet* talkMessages; 
@property (nonatomic,copy) unsigned editModeCategory; 				//@synthesize editModeCategory=_editModeCategory - In the implementation block
@property (nonatomic,retain) NSMutableSet* talkMessageSet; 				//@synthesize talkMessageSet=_talkMessageSet - In the implementation block
@property (nonatomic,retain) NLSafeUnretainedObject* weakSelf; 				//@synthesize weakSelf=_weakSelf - In the implementation block
@property (nonatomic,copy) unsigned nonOBSMessageCount; 				//@synthesize nonOBSMessageCount=_nonOBSMessageCount - In the implementation block
@property (nonatomic,copy) unsigned OBSMessageCount; 				//@synthesize OBSMessageCount=_OBSMessageCount - In the implementation block
@property (nonatomic,copy) unsigned locationMessageCount; 				//@synthesize locationMessageCount=_locationMessageCount - In the implementation block
+(id)obsInfoForMediaTypeMessage:(id)arg1;
+(id)dataInfoForMediaTypeMessage:(id)arg1;
+(id)dataInfoForSharableMessage:(id)arg1;
+(id)fileInfoForFileMessage:(id)arg1;
+(BOOL)isOBSMessageForContentType:(short)arg1;
-(int)availableMessageCountForContentType:(short)arg1;
-(void)confirmSendableMessage:(id)arg1 withCompletionBlock:(id)arg2;
-(void)setWeakSelf:(id)arg1;
-(void)increseMessageCountWithContentType:(short)arg1;
-(void)decreaseMessageCountWithContentType:(short)arg1;
-(BOOL)needCheckSendableForMessage:(id)arg1;
-(id)noExistFileError;
-(void)processSendableMessage:(id)arg1 completionBlock:(id)arg2;
-(void)checkLocalFileWithMessage:(id)arg1 completionBlock:(id)arg2;
-(BOOL)findImageMessageFileWithMessage:(id)arg1;
-(BOOL)hasAssetFilePath:(id)arg1;
-(void)checkExistAssetFileWithMessage:(id)arg1 completionBlock:(id)arg2;
-(BOOL)findVideoMessageFileWithMessage:(id)arg1;
-(BOOL)findVoiceMessageFileWithMessage:(id)arg1;
-(BOOL)findFileWithFileMessage:(id)arg1;
-(BOOL)containsMessage:(id)arg1;
-(void)setTalkMessageSet:(id)arg1;
-(id)initWithCategory:(unsigned)arg1;
-(void)dealloc;
-(void)addMessage:(id)arg1;
-(void)removeAllMessages;
-(void)removeMessage:(id)arg1;
-(void).cxx_destruct;
@end