/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:19:00 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITAppVersionMetaInfo : NSObject {
	NSString* _name; 
	NSString* _version; 
	NSString* _shortVersion; 
	NSString* _minOSVersion; 
	NSString* _notes; 
	NSDate* _date; 
	NSNumber* _size; 
	NSNumber* _mandatory; 
	NSNumber* _versionID; 
	NSDictionary* _uuids; 
}
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString* version; 				//@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString* shortVersion; 				//@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSString* minOSVersion; 				//@synthesize minOSVersion=_minOSVersion - In the implementation block
@property (nonatomic,copy) NSString* notes; 				//@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSDate* date; 				//@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSNumber* size; 				//@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSNumber* mandatory; 				//@synthesize mandatory=_mandatory - In the implementation block
@property (nonatomic,copy) NSNumber* versionID; 				//@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,copy) NSDictionary* uuids; 				//@synthesize uuids=_uuids - In the implementation block
+(id)appVersionMetaInfoFromDict:(id)arg1;
-(void)setShortVersion:(id)arg1;
-(void)setMinOSVersion:(id)arg1;
-(void)setDateWithTimestamp:(double)arg1;
-(void)setMandatory:(id)arg1;
-(BOOL)isEqualToAppVersionMetaInfo:(id)arg1;
-(BOOL)isEqualComparingString:(id)arg1 withString:(id)arg2;
-(BOOL)isEqualComparingDate:(id)arg1 withDate:(id)arg2;
-(BOOL)isEqualComparingNumber:(id)arg1 withNumber:(id)arg2;
-(BOOL)isEqualComparingDictionary:(id)arg1 withDate:(id)arg2;
-(id)nameAndVersionString;
-(id)sizeInMB;
-(id)notesOrEmptyString;
-(BOOL)hasUUID:(id)arg1;
-(void)setNotes:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(BOOL)isValid;
-(void)setSize:(id)arg1;
-(void)setName:(id)arg1;
-(void)setDate:(id)arg1;
-(void)setVersion:(id)arg1;
-(void)setVersionID:(id)arg1;
-(id)versionString;
-(void)setUuids:(id)arg1;
-(id)dateString;
-(void).cxx_destruct;
@end