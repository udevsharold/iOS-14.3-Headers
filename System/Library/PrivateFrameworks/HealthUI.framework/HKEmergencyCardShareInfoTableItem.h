/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorSwitchDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class HKMedicalIDEditorSwitchCell, UITableView, NSString;

@interface HKEmergencyCardShareInfoTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate, UITextViewDelegate> {

	HKMedicalIDEditorSwitchCell* _cell;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(UIEdgeInsets)separatorInset;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(UITableView *)tableView;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(void)switchWasChanged:(BOOL)arg1 ;
-(id)titleForFooter;
-(id)_editCell;
-(id)_viewCellForTableView:(id)arg1 ;
-(id)footerTextViewString;
@end

