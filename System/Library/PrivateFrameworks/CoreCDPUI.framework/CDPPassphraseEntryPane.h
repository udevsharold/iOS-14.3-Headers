/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <Preferences/DevicePINPane.h>

@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {

	UIScrollView* _containerView;
	CDPPaneHeaderView* _headerView;
	double _keyboardOffset;

}

@property (nonatomic,readonly) CGRect availableHeaderRect; 
-(BOOL)isSmallScreen;
-(void)_layoutSubviews;
-(id)headerView;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContainerView;
-(double)desiredMinPinHeight;
-(void)startListeningForKeyboardEvents;
-(void)_keyboardLayoutChanged;
-(CGRect)availableHeaderRect;
-(double)keyboardHeightOffset;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(void)didFinishResizingHeaderView;
-(BOOL)isVerySmallScreen;
-(void)didFinishResizingPinView;
@end

