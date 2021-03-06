/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface UISwipeActionDeleteScanlineView : UIView {

	UIView* _bottomLineWrapper;
	UIView* _topLine;
	UIView* _bottomLine;

}

@property (nonatomic,copy) UIColor * deleteLineColor; 
+(double)lineHeight;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)deleteLineColor;
-(void)setDeleteLineColor:(UIColor *)arg1 ;
@end

