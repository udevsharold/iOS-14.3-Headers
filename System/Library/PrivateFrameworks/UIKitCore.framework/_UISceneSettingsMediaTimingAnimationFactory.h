/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* __timingFunctionForAnimation;

}

@property (getter=_timingFunctionForAnimation,nonatomic,retain) CAMediaTimingFunction * _timingFunctionForAnimation;              //@synthesize _timingFunctionForAnimation=__timingFunctionForAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(CAMediaTimingFunction *)_timingFunctionForAnimation;
-(void)set_timingFunctionForAnimation:(CAMediaTimingFunction *)arg1 ;
@end
