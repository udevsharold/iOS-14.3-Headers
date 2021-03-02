/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKMedicalIDEditorSwitchDelegate;
@class UISwitch;

@interface HKMedicalIDEditorSwitchCell : UITableViewCell {

	UISwitch* _switch;
	id<HKMedicalIDEditorSwitchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HKMedicalIDEditorSwitchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<HKMedicalIDEditorSwitchDelegate>)arg1 ;
-(id<HKMedicalIDEditorSwitchDelegate>)delegate;
-(void)_switchSwitched:(id)arg1 ;
-(id)initWithTitle:(id)arg1 defaultState:(BOOL)arg2 ;
-(void)setUIDisabled;
@end
