/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class HUQuickControlViewController, HUQuickControlCollectionViewCellContainerView;

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController {

	unsigned long long _titlePosition;
	HUQuickControlViewController* _contentViewController;
	UIEdgeInsets _preferredContentLayoutFrameInset;

}

@property (nonatomic,retain) HUQuickControlCollectionViewCellContainerView * view; 
@property (nonatomic,readonly) HUQuickControlCollectionViewCellContainerView * viewIfLoaded; 
@property (assign,nonatomic) unsigned long long titlePosition;                                            //@synthesize titlePosition=_titlePosition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentLayoutFrameInset;                               //@synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset - In the implementation block
@property (nonatomic,readonly) HUQuickControlViewController * contentViewController;                      //@synthesize contentViewController=_contentViewController - In the implementation block
+(id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg1 titlePosition:(unsigned long long)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(HUQuickControlViewController *)contentViewController;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(unsigned long long)titlePosition;
-(UIEdgeInsets)preferredContentLayoutFrameInset;
-(void)setPreferredContentLayoutFrameInset:(UIEdgeInsets)arg1 ;
@end

