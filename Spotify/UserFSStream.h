/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:41 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UserFSStream : NSObject {
	UserFSItem* _item; 
	NSObject<OS_xpc_object>* _connection; 
	unsigned long long _length; 
}
@property (nonatomic,retain) UserFSItem* item; 				//@synthesize item=_item - In the implementation block
@property (nonatomic,copy) BOOL writable; 
@property (assign,nonatomic) unsigned long long length; 				//@synthesize length=_length - In the implementation block
@property (nonatomic,retain) NSObject<OS_xpc_object>* connection; 				//@synthesize connection=_connection - In the implementation block
-(long)readBytesOfLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4;
-(BOOL)closeAndReturnError:(id*)arg1;
-(void)setItem:(id)arg1;
-(void)dealloc;
-(void)setLength:(unsigned long long)arg1;
-(void)setConnection:(id)arg1;
-(void)_cancelConnection;
-(id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3;
-(long)_readBytesUpToLength:(unsigned long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4;
-(void).cxx_destruct;
@end