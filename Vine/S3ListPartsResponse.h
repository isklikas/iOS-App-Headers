/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:44 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3ListPartsResponse : S3Response {
	S3ListPartsResult* listPartsResult; 
}
@property (nonatomic,retain) S3ListPartsResult* listPartsResult; 
-(void)processBody;
-(void)setListPartsResult:(id)arg1;
-(void)dealloc;
@end