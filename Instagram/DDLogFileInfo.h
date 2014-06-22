/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:24 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface DDLogFileInfo : NSObject {
	NSString* filePath; 
	NSString* fileName; 
	NSDictionary* fileAttributes; 
	NSDate* creationDate; 
	NSDate* modificationDate; 
	unsigned long long fileSize; 
}
@property (nonatomic,copy) NSString* filePath; 
@property (nonatomic,@dynamic,copy) NSString* fileName; 
@property (nonatomic,@dynamic,copy) NSDictionary* fileAttributes; 
@property (nonatomic,@dynamic,copy) NSDate* creationDate; 
@property (nonatomic,@dynamic,copy) NSDate* modificationDate; 
@property (nonatomic,@dynamic,copy) unsigned long long fileSize; 
@property (nonatomic,@dynamic,copy) double age; 
@property (assign,nonatomic,@dynamic) BOOL isArchived; 
+(id)logFileWithPath:(id)arg1;
-(int)reverseCompareByCreationDate:(id)arg1;
-(void)setIsArchived:(BOOL)arg1;
-(BOOL)hasExtendedAttributeWithName:(id)arg1;
-(void)addExtendedAttributeWithName:(id)arg1;
-(void)removeExtendedAttributeWithName:(id)arg1;
-(void)renameFile:(id)arg1;
-(int)reverseCompareByModificationDate:(id)arg1;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1;
-(id)description;
-(void)reset;
-(id)initWithFilePath:(id)arg1;
@end