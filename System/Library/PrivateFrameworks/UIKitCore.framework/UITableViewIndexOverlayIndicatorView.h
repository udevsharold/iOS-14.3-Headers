/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UITapGestureRecognizer, UITableView, NSString;

@interface UITableViewIndexOverlayIndicatorView : UIView {

	UILabel* _label;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITableView* _table;

}

@property (nonatomic,copy) NSString * currentText; 
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(void)_tapGestureChanged:(id)arg1 ;
-(void)layoutSubviews;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
@end
