/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:58 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineChannelDomains : NSObject {
	NSArray* __channelDomains; 
	long long __revision; 
	struct {
		unsigned int revision:1;
	} __isSet; 
}
@property (nonatomic,retain) NSArray* channelDomains; 				//@synthesize _channelDomains=__channelDomains - In the implementation block
@property (assign,nonatomic) long long revision; 				//@synthesize _revision=__revision - In the implementation block
-(void)read:(id)arg1;
-(void)setRevision:(long long)arg1;
-(void)setChannelDomains:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end