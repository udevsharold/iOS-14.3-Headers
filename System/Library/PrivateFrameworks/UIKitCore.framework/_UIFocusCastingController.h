/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusCastingControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusCastingController : NSObject {

	BOOL _isRememberingEntryPoint;
	id<_UIFocusCastingControllerDelegate> _delegate;
	unsigned long long _entryPointAxis;
	CGPoint _screenEntryPoint;

}

@property (assign,nonatomic) CGPoint screenEntryPoint;                                           //@synthesize screenEntryPoint=_screenEntryPoint - In the implementation block
@property (assign,nonatomic) unsigned long long entryPointAxis;                                  //@synthesize entryPointAxis=_entryPointAxis - In the implementation block
@property (assign,nonatomic) BOOL isRememberingEntryPoint;                                       //@synthesize isRememberingEntryPoint=_isRememberingEntryPoint - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusCastingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(unsigned long long)entryPointAxis;
-(unsigned long long)_axisForHeading:(unsigned long long)arg1 ;
-(void)_updateFocusItemFromGlobalFrame:(CGRect)arg1 toGlobalFrame:(CGRect)arg2 withHeading:(unsigned long long)arg3 ;
-(CGPoint)_castingPointInGlobalFrame:(CGRect)arg1 forHeading:(unsigned long long)arg2 ;
-(CGRect)_globalFrameForFocusItem:(id)arg1 ;
-(void)_forgetEntryPoint;
-(void)setIsRememberingEntryPoint:(BOOL)arg1 ;
-(void)setScreenEntryPoint:(CGPoint)arg1 ;
-(void)setEntryPointAxis:(unsigned long long)arg1 ;
-(BOOL)isRememberingEntryPoint;
-(CGPoint)screenEntryPoint;
-(CGPoint)_entryPointInGlobalFrame:(CGRect)arg1 forHeading:(unsigned long long)arg2 ;
-(CGPoint)_movementPointInGlobalFrame:(CGRect)arg1 ;
-(id)_focusEffectsControllerForFocusedItem;
-(void)_updateFocusFromItem:(id)arg1 toItem:(id)arg2 withHeading:(unsigned long long)arg3 ;
-(CGRect)castingFrameForFocusedGlobalFrame:(CGRect)arg1 heading:(unsigned long long)arg2 ;
-(void)setDelegate:(id<_UIFocusCastingControllerDelegate>)arg1 ;
-(void)updateFocusCastingWithContext:(id)arg1 ;
-(id<_UIFocusCastingControllerDelegate>)delegate;
@end

