/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@protocol UISpringLoadedInteractionEffect, SBFSpringLoadedInteractionEffectDelegate;
@class NSString;

@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect> {

	id<UISpringLoadedInteractionEffect> _blinkEffect;
	BOOL _useFastBlinkAnimation;
	id<SBFSpringLoadedInteractionEffectDelegate> _delegate;

}

@property (assign,nonatomic) BOOL useFastBlinkAnimation;                                                //@synthesize useFastBlinkAnimation=_useFastBlinkAnimation - In the implementation block
@property (assign,nonatomic,__weak) id<SBFSpringLoadedInteractionEffectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)useFastBlinkAnimation;
-(id)fastBlinkAnimation;
-(void)setDelegate:(id<SBFSpringLoadedInteractionEffectDelegate>)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(id<SBFSpringLoadedInteractionEffectDelegate>)delegate;
-(void)setUseFastBlinkAnimation:(BOOL)arg1 ;
@end

