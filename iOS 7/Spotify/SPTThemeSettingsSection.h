/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:22 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTThemeSettingsSection : SettingsSection {
	NSArray* _cells; 
}
@property (nonatomic,retain) NSArray* cells; 				//@synthesize cells=_cells - In the implementation block
-(id)initWithSettingsViewController:(id)arg1;
-(id)cellForRow:(int)arg1;
-(void)switchChanged:(id)arg1;
-(void)setCells:(id)arg1;
-(int)numberOfRows;
-(id)footerText;
-(void).cxx_destruct;
@end