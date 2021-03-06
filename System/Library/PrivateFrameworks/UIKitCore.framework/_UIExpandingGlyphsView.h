/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSAttributedString, NSArray, UIAccessibilityHUDItem, NSString;

@interface _UIExpandingGlyphsView : UIView <_UIStatusBarDisplayable, CAAnimationDelegate> {

	BOOL _expandsFromLeftToRight;
	BOOL _fadesOut;
	int _remainingAnimationCount;
	NSAttributedString* _attributedString;
	double _baselineOffset;
	NSArray* _imageViews;
	/*^block*/id _completionBlock;
	CGSize _intrinsicSize;

}

@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * imageViews;                                                   //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) int remainingAnimationCount;                                            //@synthesize remainingAnimationCount=_remainingAnimationCount - In the implementation block
@property (assign,nonatomic) CGSize intrinsicSize;                                                   //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;                                  //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                                                //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) BOOL expandsFromLeftToRight;                                            //@synthesize expandsFromLeftToRight=_expandsFromLeftToRight - In the implementation block
@property (assign,nonatomic) BOOL fadesOut;                                                          //@synthesize fadesOut=_fadesOut - In the implementation block
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(double)baselineOffset;
-(CGSize)intrinsicContentSize;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSAttributedString *)attributedString;
-(void)setFadesOut:(BOOL)arg1 ;
-(id)completionBlock;
-(BOOL)fadesOut;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)imageViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicSize;
-(void)setIntrinsicSize:(CGSize)arg1 ;
-(int)remainingAnimationCount;
-(void)setRemainingAnimationCount:(int)arg1 ;
-(BOOL)expandsFromLeftToRight;
-(void)setImageViews:(NSArray *)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(void)setExpandsFromLeftToRight:(BOOL)arg1 ;
-(void)animateCompletionBlock:(/*^block*/id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

