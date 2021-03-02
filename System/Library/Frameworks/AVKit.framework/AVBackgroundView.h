/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVLayoutView;

@interface AVBackgroundView : UIView {

	BOOL _automaticallyDrawsRoundedCorners;
	BOOL _prefersLowQualityEffects;
	BOOL _circular;
	AVLayoutView* _layoutView;

}

@property (nonatomic,retain) AVLayoutView * layoutView;                          //@synthesize layoutView=_layoutView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDrawsRoundedCorners;              //@synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL prefersLowQualityEffects;                      //@synthesize prefersLowQualityEffects=_prefersLowQualityEffects - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                    //@synthesize circular=_circular - In the implementation block
-(void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3 ;
-(void)setAutomaticallyDrawsRoundedCorners:(BOOL)arg1 ;
-(BOOL)_isContainedInOverlappingBackgroundView;
-(void)_ensureOrRemoveLayoutView;
-(void)_updateBackdropShape;
-(AVLayoutView *)layoutView;
-(BOOL)isCircular;
-(void)layoutSubviews;
-(BOOL)prefersLowQualityEffects;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(BOOL)automaticallyDrawsRoundedCorners;
-(void)setLayoutView:(AVLayoutView *)arg1 ;
-(void)didMoveToSuperview;
-(void)setCircular:(BOOL)arg1 ;
-(void)setPrefersLowQualityEffects:(BOOL)arg1 ;
@end
