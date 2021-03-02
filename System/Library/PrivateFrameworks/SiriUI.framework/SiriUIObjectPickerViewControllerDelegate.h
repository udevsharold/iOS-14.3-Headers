/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
@optional
-(void)pickerViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
-(void)pickerViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;

@required
-(id)viewControllerForPickerPresentation:(id)arg1;

@end
