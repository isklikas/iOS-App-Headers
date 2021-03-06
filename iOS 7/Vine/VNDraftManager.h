/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:22 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNDraftManager : NSObject {
	VNDraft* _current; 
	VNDraft* _messaging; 
	NSMutableArray* _drafts; 
	NSMutableArray* _uploads; 
}
@property (copy) NSArray* drafts; 
@property (copy) NSArray* uploads; 				//@synthesize uploads=_uploads - In the implementation block
+(id)sharedInstance;
-(void)removeDraft:(id)arg1 deleteFolder:(BOOL)arg2;
-(id)currentFolder;
-(id)draftsInFolder:(id)arg1;
-(id)extractUploadingDrafts:(id)arg1;
-(id)messagingFolder;
-(void)moveDraft:(id)arg1 toFolder:(id)arg2 completion:(id)arg3;
-(void)validateWorkingDirectory:(id)arg1 draftDirectory:(id)arg2;
-(void)clearCurrent;
-(BOOL)hasCurrent;
-(id)messaging;
-(void)clearMessaging;
-(void)saveDraft:(id)arg1 completion:(id)arg2;
-(void)replaceCurrent:(id)arg1;
-(id)init;
-(id)draftsFolder;
-(id)current;
-(void).cxx_destruct;
@end