/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIStatusBar;

@interface SBZoomView : UIView {

	UIView* _contentView;
	UIStatusBar* _statusBar;

}

@property (assign,nonatomic,__weak) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
+(id)_chromeStatusBarImageForInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)dealloc;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(id)_initWithFrame:(CGRect)arg1 ;
@end
