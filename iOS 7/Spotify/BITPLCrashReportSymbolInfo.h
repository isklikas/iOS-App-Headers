/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:08 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITPLCrashReportSymbolInfo : NSObject {
	NSString* _symbolName; 
	unsigned long long _startAddress; 
	unsigned long long _endAddress; 
}
@property (nonatomic,copy) NSString* symbolName; 				//@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,copy) unsigned long long startAddress; 				//@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,copy) unsigned long long endAddress; 				//@synthesize endAddress=_endAddress - In the implementation block
-(id)initWithSymbolName:(id)arg1 startAddress:(unsigned long long)arg2 endAddress:(unsigned long long)arg3;
-(void)dealloc;
@end