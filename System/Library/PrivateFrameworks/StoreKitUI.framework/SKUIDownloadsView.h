/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIDownloadsView : UIView {

	UIView* _contentView;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(UIView *)overlayView;
-(void)layoutSubviews;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end
