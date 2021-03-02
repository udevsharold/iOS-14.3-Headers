/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface JFXEffectAnimationDelegate : NSObject <CAAnimationDelegate> {

	BOOL _animationDidBegin;
	BOOL _animationDidEnd;
	/*^block*/id _completion;

}

@property (assign,nonatomic) BOOL animationDidBegin;                //@synthesize animationDidBegin=_animationDidBegin - In the implementation block
@property (assign,nonatomic) BOOL animationDidEnd;                  //@synthesize animationDidEnd=_animationDidEnd - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)animateWithCompletion:(/*^block*/id)arg1 ;
-(void)setAnimationDidBegin:(BOOL)arg1 ;
-(void)setAnimationDidEnd:(BOOL)arg1 ;
-(BOOL)animationDidBegin;
-(BOOL)animationDidEnd;
@end
