/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:35 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTGaiaDeviceStateManagerObserver.h>

@interface GaiaDestinationPickerViewController : SPTableViewController <SPTGaiaDeviceStateManagerObserver> {
	id<GaiaDestinationPickerViewControllerDelegate> _delegate; 
	GaiaSettings* _gaiaSettings; 
	GaiaDestinationPickerPlaceholderView* _placeholderView; 
	SPTableHeaderFooterView* _footerView; 
	SPTGaiaDeviceManager* _gaiaDeviceManager; 
	SPTGaiaIconView* _iconView; 
}
@property (assign,nonatomic) id<GaiaDestinationPickerViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GaiaSettings* gaiaSettings; 				//@synthesize gaiaSettings=_gaiaSettings - In the implementation block
@property (nonatomic,retain) GaiaDestinationPickerPlaceholderView* placeholderView; 				//@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) SPTableHeaderFooterView* footerView; 				//@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) SPTGaiaDeviceManager* gaiaDeviceManager; 				//@synthesize gaiaDeviceManager=_gaiaDeviceManager - In the implementation block
@property (nonatomic,retain) SPTGaiaIconView* iconView; 				//@synthesize iconView=_iconView - In the implementation block
-(void)deviceStateManager:(id)arg1 availableDevicesDidChange:(id)arg2;
-(void)deviceStateManager:(id)arg1 activeDeviceDidChange:(id)arg2;
-(void)productStateDidChangeNotification:(id)arg1;
-(BOOL)shouldHideVolumeToolbar;
-(void)updatePlaceholderViewText;
-(void)doneButtonAction:(id)arg1;
-(id)initWithDeviceManager:(id)arg1 volumeController:(id)arg2 gaiaSettings:(id)arg3;
-(void)setGaiaDeviceManager:(id)arg1;
-(void)setGaiaSettings:(id)arg1;
-(void)setIconView:(id)arg1;
-(void)setPlaceholderView:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)setFooterView:(id)arg1;
-(void).cxx_destruct;
@end