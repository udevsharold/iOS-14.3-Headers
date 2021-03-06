/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>

@class BSAnimationSettings, PTPointSettings, NSString;

@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver> {

	BSAnimationSettings* _exportedSettings;
	long long _animationType;
	double _delay;
	unsigned long long _frameRate;
	unsigned long long _curve;
	PTPointSettings* _controlPoint1Settings;
	PTPointSettings* _controlPoint2Settings;
	double _duration;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _speed;

}

@property (assign,nonatomic) long long animationType;                              //@synthesize animationType=_animationType - In the implementation block
@property (assign,nonatomic) double delay;                                         //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) unsigned long long frameRate;                         //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned long long curve;                             //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) PTPointSettings * controlPoint1Settings;              //@synthesize controlPoint1Settings=_controlPoint1Settings - In the implementation block
@property (nonatomic,retain) PTPointSettings * controlPoint2Settings;              //@synthesize controlPoint2Settings=_controlPoint2Settings - In the implementation block
@property (assign,nonatomic) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double mass;                                          //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                     //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                       //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                                       //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) double calculatedDuration; 
@property (assign,nonatomic) double speed;                                         //@synthesize speed=_speed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
+(id)_moduleWithSectionTitle:(id)arg1 delay:(BOOL)arg2 frameRate:(BOOL)arg3 ;
+(id)_moduleWithSectionTitle:(id)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setEpsilon:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(double)stiffness;
-(double)damping;
-(id)initWithDefaultValues;
-(void)setDefaultValues;
-(void)setControlPoint2Settings:(PTPointSettings *)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)epsilon;
-(double)mass;
-(id)BSAnimationSettings;
-(void)setAnimationType:(long long)arg1 ;
-(PTPointSettings *)controlPoint2Settings;
-(void)setDuration:(double)arg1 ;
-(double)calculatedDuration;
-(void)dealloc;
-(double)speed;
-(double)delay;
-(long long)animationType;
-(unsigned long long)frameRate;
-(PTPointSettings *)controlPoint1Settings;
-(unsigned long long)curve;
-(void)setSpeed:(double)arg1 ;
-(void)setControlPoint1Settings:(PTPointSettings *)arg1 ;
-(void)setFrameRate:(unsigned long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setCurve:(unsigned long long)arg1 ;
-(double)duration;
@end

