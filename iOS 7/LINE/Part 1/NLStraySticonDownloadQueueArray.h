/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:53 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLStraySticonDownloadQueueArray : NSObject {
	NSMutableArray* _data; 
}
-(void)addSticonDataIfNotExist:(unsigned)arg1 code:(unsigned)arg2;
-(int)sticonDataCount;
-(void)getSticonDataToDownload:(unsigned*)arg1 code:(unsigned*)arg2;
-(void)removeSticonData:(unsigned)arg1 code:(unsigned)arg2;
-(id)init;
-(void).cxx_destruct;
@end