/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwitchControl;
@class NSString, UIImpactFeedbackGenerator;

@interface UISwitchVisualElement : UIView {

	BOOL _enabled;
	NSString* _title;
	id<UISwitchControl> _switchControl;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	double _enabledAlpha;

}

@property (assign,nonatomic) double enabledAlpha;                                              //@synthesize enabledAlpha=_enabledAlpha - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<UISwitchControl> switchControl;                         //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;              //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
+(CGSize)preferredContentSize;
+(BOOL)isFixedSize;
+(UIEdgeInsets)preferredAlignmentRectInsets;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)tintColorDidChange;
-(CGSize)preferredContentSize;
-(BOOL)enabled;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOnImage:(id)arg1 ;
-(void)setSwitchControl:(id<UISwitchControl>)arg1 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)setEnabledAlpha:(double)arg1 ;
-(void)setThumbTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)enabledAlpha;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(id<UISwitchControl>)switchControl;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOffImage:(id)arg1 ;
-(NSString *)title;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
@end
