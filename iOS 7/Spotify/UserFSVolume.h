/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:33 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UserFSVolume : NSObject {
	BOOL _isLocked; 
	NSString* _deviceName; 
	NSObject<OS_xpc_object>* _connection; 
}
@property (nonatomic,copy) NSString* deviceName; 				//@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) BOOL isLocked; 				//@synthesize isLocked=_isLocked - In the implementation block
@property (nonatomic,retain) NSObject<OS_xpc_object>* connection; 				//@synthesize connection=_connection - In the implementation block
+(id)volumeWithDeviceName:(id)arg1 error:(id*)arg2;
+(BOOL)prepareToAccessDeviceName:(id)arg1 error:(id*)arg2;
-(id)itemAtPath:(id)arg1 error:(id*)arg2;
-(id)initWithDeviceName:(id)arg1 error:(id*)arg2;
-(BOOL)closeAndReturnError:(id*)arg1;
-(void)dealloc;
-(void)setConnection:(id)arg1;
-(id)rootDirectoryAndReturnError:(id*)arg1;
-(BOOL)deleteFiles:(id)arg1 error:(id*)arg2;
-(BOOL)flushAndReturnError:(id*)arg1;
-(void).cxx_destruct;
@end