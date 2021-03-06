/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:29 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTThemeConfigurationResolver : NSObject {
	NSMutableDictionary* _configuration; 
	NSMutableDictionary* _resolved; 
	NSMutableDictionary* _flags; 
}
@property (nonatomic,copy) NSDictionary* flags; 
-(void)setFlag:(id)arg1 enabled:(BOOL)arg2 priority:(unsigned)arg3;
-(id)configurationValueForKey:(id)arg1 suffix:(id)arg2 reportErrors:(BOOL)arg3;
-(void)registerConfigurationDictionary:(id)arg1;
-(void)registerConfigurationValue:(id)arg1 forKeyWithFlags:(id)arg2;
-(id)configurationValueForKey:(id)arg1 suffixInSet:(id)arg2 reportErrors:(BOOL)arg3;
-(id)lookUpEntry:(id)arg1;
-(int)scoreForFlags:(id)arg1;
-(void)registerConfigurationFromFileNamed:(id)arg1;
-(id)init;
-(void).cxx_destruct;
@end