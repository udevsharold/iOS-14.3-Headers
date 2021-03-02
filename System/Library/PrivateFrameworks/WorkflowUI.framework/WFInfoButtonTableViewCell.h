/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFInfoButtonTableViewCellDelegate;
@class UIButton, UIImageView, NSArray;

@interface WFInfoButtonTableViewCell : UITableViewCell {

	unsigned long long _accessoryMode;
	id<WFInfoButtonTableViewCellDelegate> _delegate;
	UIButton* _infoButton;
	UIImageView* _checkmarkView;

}

@property (assign,nonatomic) unsigned long long accessoryMode;                                   //@synthesize accessoryMode=_accessoryMode - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (assign,nonatomic,__weak) id<WFInfoButtonTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                            //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryViews; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)checkmarkView;
-(unsigned long long)accessibilityTraits;
-(BOOL)isChecked;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(void)setChecked:(BOOL)arg1 ;
-(void)setDelegate:(id<WFInfoButtonTableViewCellDelegate>)arg1 ;
-(NSArray *)accessoryViews;
-(void)infoButtonPressed:(id)arg1 ;
-(id<WFInfoButtonTableViewCellDelegate>)delegate;
-(void)setAccessoryMode:(unsigned long long)arg1 ;
-(unsigned long long)accessoryMode;
@end
