/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UILabel, NSArray, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarBadgeView : UIView <_UIStatusBarDisplayable> {

	UILabel* _label;
	NSArray* _constraintsWithConstant;

}

@property (nonatomic,retain) UILabel * label;                                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * constraintsWithConstant;                                      //@synthesize constraintsWithConstant=_constraintsWithConstant - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyStyleAttributes:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(NSArray *)constraintsWithConstant;
-(void)setConstraintsWithConstant:(NSArray *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

