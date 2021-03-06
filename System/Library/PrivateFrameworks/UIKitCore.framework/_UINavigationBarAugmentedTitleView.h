/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UINavigationBarAugmentedTitleView <NSObject>
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) double _navigationBarBackButtonAlpha; 
@property (nonatomic,readonly) double _navigationBarLeadingBarButtonsAlpha; 
@property (nonatomic,readonly) double _navigationBarTrailingBarButtonsAlpha; 
@property (nonatomic,readonly) long long _preferredAlignment; 
@required
-(double)_navigationBarBackButtonMaximumWidth;
-(BOOL)_hideNavigationBarStandardTitle;
-(BOOL)_underlayNavigationBarContent;
-(double)_navigationBarLeadingBarButtonsAlpha;
-(BOOL)_hideNavigationBarBackButton;
-(double)_navigationBarBackButtonAlpha;
-(void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(long long)_preferredAlignment;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg1;
-(void)_contentDidChange;
-(BOOL)_wantsTwoPartTransition;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2;
-(double)_navigationBarContentHeight;
-(double)_navigationBarTrailingBarButtonsAlpha;
-(long long)_preferredContentSizeForSize:(long long)arg1;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;

@end

