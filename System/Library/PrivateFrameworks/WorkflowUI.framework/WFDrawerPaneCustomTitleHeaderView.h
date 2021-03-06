/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFDrawerPaneHeaderView.h>

@protocol WFDrawerPaneHeaderViewDelegate;
@class UIView, WFDrawerPaneCloseButton, NSString;

@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView> {

	id<WFDrawerPaneHeaderViewDelegate> _delegate;
	UIView* _titleView;
	WFDrawerPaneCloseButton* _closeButton;

}

@property (nonatomic,__weak,readonly) WFDrawerPaneCloseButton * closeButton;                  //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,__weak,readonly) UIView * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) id<WFDrawerPaneHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFDrawerPaneCloseButton *)closeButton;
-(id)layoutConstraints;
-(UIView *)titleView;
-(void)setDelegate:(id<WFDrawerPaneHeaderViewDelegate>)arg1 ;
-(id<WFDrawerPaneHeaderViewDelegate>)delegate;
-(id)initWithTitleView:(id)arg1 ;
-(void)closeButtonTouchedUp:(id)arg1 ;
@end

