/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CEKBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView {

	long long _shallowDepthOfFieldStatus;
	CEKBadgeTextView* __enabledTextView;
	CEKBadgeTextView* __disabledTextView;

}

@property (nonatomic,readonly) CEKBadgeTextView * _enabledTextView;               //@synthesize _enabledTextView=__enabledTextView - In the implementation block
@property (nonatomic,readonly) CEKBadgeTextView * _disabledTextView;              //@synthesize _disabledTextView=__disabledTextView - In the implementation block
@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                 //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateForShallowDepthOfFieldStatusAnimated:(BOOL)arg1 ;
-(CEKBadgeTextView *)_enabledTextView;
-(CEKBadgeTextView *)_disabledTextView;
@end

