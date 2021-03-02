/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView;

@interface CAMCreativeCameraButton : UIButton {

	BOOL _useCompactLayout;
	BOOL __overContent;
	long long _layoutStyle;
	long long _orientation;
	UIImageView* __circleBackgroundView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (getter=_isOverContent,nonatomic,readonly) BOOL _overContent;                   //@synthesize _overContent=__overContent - In the implementation block
@property (nonatomic,retain) UIImageView * _circleBackgroundView;                         //@synthesize _circleBackgroundView=__circleBackgroundView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                       //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                             //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,setter=useCompactLayout:,nonatomic) BOOL useCompactLayout;              //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)_updateImages;
-(void)setLayoutStyle:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(long long)layoutStyle;
-(void)setActive:(BOOL)arg1 ;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(UIImageView *)_circleBackgroundView;
-(long long)orientation;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)isActive;
-(BOOL)_isOverContent;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)useCompactLayout;
-(id)initForOverContent;
-(void)_commonCAMCreativeCameraButtonInitializationWithStyle:(long long)arg1 overContent:(BOOL)arg2 ;
-(void)useCompactLayout:(BOOL)arg1 ;
@end
