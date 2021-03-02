/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/TKTonePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>

@class TKTonePickerViewController, TKVibrationPickerViewController, NSString;

@interface SHSToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {

	TKTonePickerViewController* _tonePickerViewController;
	TKVibrationPickerViewController* _vibrationPickerViewController;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePickerViewController;                        //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (nonatomic,retain) TKVibrationPickerViewController * vibrationPickerViewController;              //@synthesize vibrationPickerViewController=_vibrationPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(void)_handleAlertOverridePolicyDidChangeNotification:(id)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(id)_defaultToneIdentifierForTonePickerWithAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(void)_insertTonePickerView;
-(void)_updateReloadSpecifierInParentController;
-(id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setVibrationPickerViewController:(TKVibrationPickerViewController *)arg1 ;
-(TKVibrationPickerViewController *)vibrationPickerViewController;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
@end
