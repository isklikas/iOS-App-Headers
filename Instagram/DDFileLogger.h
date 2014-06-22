/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:20 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <DDLogger.h>

@interface DDFileLogger : DDAbstractLogger <DDLogger> {
	id<DDLogFileManager> logFileManager; 
	DDLogFileInfo* currentLogFileInfo; 
	NSFileHandle* currentLogFileHandle; 
	NSTimer* rollingTimer; 
	unsigned long long maximumFileSize; 
	double rollingFrequency; 
}
@property (assign) unsigned long long maximumFileSize; 
@property (assign) double rollingFrequency; 
@property (nonatomic,copy) id<DDLogFileManager> logFileManager; 
-(id)initWithLogFileManager:(id)arg1;
-(void)rollLogFile;
-(void)logMessage:(id)arg1;
-(id)loggerName;
-(void)maybeRollLogFileDueToSize;
-(void)maybeRollLogFileDueToAge:(id)arg1;
-(void)rollLogFileNow;
-(void)scheduleTimerToRollLogFileDueToAge;
-(id)currentLogFileInfo;
-(id)currentLogFileHandle;
-(void)setMaximumFileSize:(unsigned long long)arg1;
-(void)setRollingFrequency:(double)arg1;
-(void)dealloc;
-(id)init;
@end