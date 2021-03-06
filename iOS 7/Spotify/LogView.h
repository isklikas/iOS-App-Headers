/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:34 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPIOSLogObserver.h>

@interface LogView : UIView <SPIOSLogObserver> {
	NSMutableArray* lines; 
	unsigned countMax; 
	UIFont* font; 
	int _maxLogLevel; 
}
@property (assign) int maxLogLevel; 				//@synthesize maxLogLevel=_maxLogLevel - In the implementation block
-(void)log:(id)arg1 wroteLine:(id)arg2 fromModule:(id)arg3 file:(id)arg4 line:(int)arg5 at:(id)arg6 logLevel:(int)arg7;
-(void)readLinesFromFile;
-(void)setMaxLogLevel:(int)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)drawRect:(CGRect)arg1;
-(void).cxx_destruct;
@end