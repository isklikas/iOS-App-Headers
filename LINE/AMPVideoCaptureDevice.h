/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:08:45 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AMPVideoCaptureDevice : NSObject {
}
@property (nonatomic,copy) NSString* name; 
@property (nonatomic,copy) NSString* uniqueID; 
@property (nonatomic,copy) int position; 
@property (nonatomic,copy) NSArray* supportedPresets; 
@property (nonatomic,copy) BOOL canCapture; 
+(id)availableDevices;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(id)description;
@end