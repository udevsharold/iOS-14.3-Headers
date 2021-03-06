/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerButtonInput.h>

@class GCControllerAxisInput;

@interface _GCControllerAxisButtonInput : GCControllerButtonInput {

	BOOL _positive;
	GCControllerAxisInput* _axis;

}

@property (assign,nonatomic,__weak) GCControllerAxisInput * axis;              //@synthesize axis=_axis - In the implementation block
@property (getter=isPositive,nonatomic,readonly) BOOL positive;                //@synthesize positive=_positive - In the implementation block
-(id)collection;
-(float)value;
-(GCControllerAxisInput *)axis;
-(void)setAxis:(GCControllerAxisInput *)arg1 ;
-(BOOL)_setValue:(float)arg1 ;
-(BOOL)isAnalog;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)_setValueFromAxisButton:(float)arg1 queue:(id)arg2 ;
-(BOOL)_commitPendingValueOnQueue:(id)arg1 ;
-(id)initWithAxis:(id)arg1 positive:(BOOL)arg2 ;
-(BOOL)_setValueFromAxisButton:(float)arg1 ;
-(void)_setPendingValue:(float)arg1 ;
-(BOOL)isPositive;
@end

