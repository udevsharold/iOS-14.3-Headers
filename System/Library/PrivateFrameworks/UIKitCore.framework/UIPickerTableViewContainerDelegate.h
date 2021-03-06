/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPickerTableViewContainerDelegate
@optional
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1;

@required
-(void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;
-(void)setAllowsMultipleSelection:(BOOL)arg1;

@end

