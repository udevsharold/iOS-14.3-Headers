/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTAvatarAttributeEditorLayout.h>

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {

	BOOL _showSideGroupPicker;
	double _avatarContainerAlpha;
	double _attributesContentViewExtraHeight;
	CGRect _avatarContainerFrame;

}

@property (nonatomic,readonly) double attributesContentViewExtraHeight;              //@synthesize attributesContentViewExtraHeight=_attributesContentViewExtraHeight - In the implementation block
-(BOOL)showSideGroupPicker;
-(UIEdgeInsets)attributesContentViewInsets;
-(CGRect)groupDialContainerFrame;
-(CGRect)sideGroupContainerFrame;
-(double)attributesContentViewExtraHeight;
-(CGRect)attributesContentViewFrame;
-(CGRect)avatarContainerFrame;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 screenScale:(double)arg3 RTL:(BOOL)arg4 avatarViewContainerFrame:(CGRect)arg5 attributesContentViewFrameExtraHeight:(double)arg6 avatarViewAlpha:(double)arg7 showSideGroupPicker:(BOOL)arg8 ;
-(unsigned long long)supportedLayoutOrientation;
-(CGRect)userInfoFrame;
-(double)headerMaskingViewAlpha;
-(CGRect)headerMaskingViewFrame;
-(double)verticalRuleAlpha;
-(CGRect)verticalRuleFrame;
-(UIEdgeInsets)attributesContentViewScrollIndicatorInsets;
-(double)avatarContainerAlpha;
-(id)backgroundColor;
@end
