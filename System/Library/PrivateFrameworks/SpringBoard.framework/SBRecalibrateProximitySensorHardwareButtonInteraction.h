/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBProximitySensorManagerObserver.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@class SBProximitySensorManager, NSString;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction> {

	BOOL _didResetProxCalibration;
	SBProximitySensorManager* _sensorManager;

}

@property (nonatomic,retain) SBProximitySensorManager * sensorManager;              //@synthesize sensorManager=_sensorManager - In the implementation block
@property (assign,nonatomic) BOOL didResetProxCalibration;                          //@synthesize didResetProxCalibration=_didResetProxCalibration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(id)hardwareButtonGestureParameters;
-(BOOL)consumeSinglePressUp;
-(BOOL)consumeInitialPressDown;
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(id)initWithProximitySensorManager:(id)arg1 ;
-(BOOL)_disallowsAnyPressForReason:(id*)arg1 ;
-(SBProximitySensorManager *)sensorManager;
-(void)setSensorManager:(SBProximitySensorManager *)arg1 ;
-(BOOL)didResetProxCalibration;
-(void)setDidResetProxCalibration:(BOOL)arg1 ;
@end
