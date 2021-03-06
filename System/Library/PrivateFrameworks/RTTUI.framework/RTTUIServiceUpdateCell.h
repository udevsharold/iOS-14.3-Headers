/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIServiceCellDelegate;
@class UITextView, RTTServiceUpdate;

@interface RTTUIServiceUpdateCell : UITableViewCell {

	UITextView* _titleView;
	UITextView* _subtitleView;
	RTTServiceUpdate* _serviceUpdate;
	id<RTTUIServiceCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIServiceCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForWidth:(double)arg1 delegate:(id)arg2 serviceUpdate:(id)arg3 ;
-(void)updateLayout;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(void)setDelegate:(id<RTTUIServiceCellDelegate>)arg1 ;
-(id<RTTUIServiceCellDelegate>)delegate;
-(BOOL)isAccessibilityElement;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 serviceUpdate:(id)arg3 ;
-(void)adjustTextViewSize;
-(id)serviceTitle;
-(id)serviceMessage;
@end

