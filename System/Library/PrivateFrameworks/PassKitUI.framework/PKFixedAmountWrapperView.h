/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UITableView, UIPickerView;

@interface PKFixedAmountWrapperView : UIView {

	UITableView* _tableView;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
-(void)setPickerView:(UIPickerView *)arg1 ;
-(void)layoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UIPickerView *)pickerView;
-(UITableView *)tableView;
@end

