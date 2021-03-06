/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class PTOutlet;

@interface SBHIconEditingSettings : PTSettings {

	BOOL _showIndexLabels;
	BOOL _showDragPlatterIconBorder;
	BOOL _waitForPause;
	PTOutlet* _resetHomeScreenLayoutOutlet;
	double _editingLiftDelay;
	double _longPressToEditDuration;
	double _defaultPauseDuration;
	double _fastEditingPauseDuration;
	double _defaultSpringDampingRatio;
	double _defaultSpringDuration;
	double _clusterFastestDuration;
	double _clusterSlowestDuration;
	double _clusterMiddleFastDuration;
	double _clusterMiddleSlowDuration;
	long long _overrideAnimationType;

}

@property (nonatomic,retain) PTOutlet * resetHomeScreenLayoutOutlet;              //@synthesize resetHomeScreenLayoutOutlet=_resetHomeScreenLayoutOutlet - In the implementation block
@property (assign,nonatomic) BOOL showIndexLabels;                                //@synthesize showIndexLabels=_showIndexLabels - In the implementation block
@property (assign,nonatomic) BOOL showDragPlatterIconBorder;                      //@synthesize showDragPlatterIconBorder=_showDragPlatterIconBorder - In the implementation block
@property (assign,nonatomic) double editingLiftDelay;                             //@synthesize editingLiftDelay=_editingLiftDelay - In the implementation block
@property (assign,nonatomic) double longPressToEditDuration;                      //@synthesize longPressToEditDuration=_longPressToEditDuration - In the implementation block
@property (assign,nonatomic) BOOL waitForPause;                                   //@synthesize waitForPause=_waitForPause - In the implementation block
@property (assign,nonatomic) double defaultPauseDuration;                         //@synthesize defaultPauseDuration=_defaultPauseDuration - In the implementation block
@property (assign,nonatomic) double fastEditingPauseDuration;                     //@synthesize fastEditingPauseDuration=_fastEditingPauseDuration - In the implementation block
@property (assign,nonatomic) double defaultSpringDampingRatio;                    //@synthesize defaultSpringDampingRatio=_defaultSpringDampingRatio - In the implementation block
@property (assign,nonatomic) double defaultSpringDuration;                        //@synthesize defaultSpringDuration=_defaultSpringDuration - In the implementation block
@property (assign,nonatomic) double clusterFastestDuration;                       //@synthesize clusterFastestDuration=_clusterFastestDuration - In the implementation block
@property (assign,nonatomic) double clusterSlowestDuration;                       //@synthesize clusterSlowestDuration=_clusterSlowestDuration - In the implementation block
@property (assign,nonatomic) double clusterMiddleFastDuration;                    //@synthesize clusterMiddleFastDuration=_clusterMiddleFastDuration - In the implementation block
@property (assign,nonatomic) double clusterMiddleSlowDuration;                    //@synthesize clusterMiddleSlowDuration=_clusterMiddleSlowDuration - In the implementation block
@property (assign,nonatomic) long long overrideAnimationType;                     //@synthesize overrideAnimationType=_overrideAnimationType - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setDefaultSpringDuration:(double)arg1 ;
-(long long)overrideAnimationType;
-(void)setShowDragPlatterIconBorder:(BOOL)arg1 ;
-(double)defaultSpringDuration;
-(PTOutlet *)resetHomeScreenLayoutOutlet;
-(void)setWaitForPause:(BOOL)arg1 ;
-(void)setFastEditingPauseDuration:(double)arg1 ;
-(void)setDefaultPauseDuration:(double)arg1 ;
-(double)defaultPauseDuration;
-(void)setLongPressToEditDuration:(double)arg1 ;
-(void)setOverrideAnimationType:(long long)arg1 ;
-(void)setClusterMiddleFastDuration:(double)arg1 ;
-(double)clusterSlowestDuration;
-(double)longPressToEditDuration;
-(void)setClusterFastestDuration:(double)arg1 ;
-(void)setShowIndexLabels:(BOOL)arg1 ;
-(BOOL)showDragPlatterIconBorder;
-(void)setClusterMiddleSlowDuration:(double)arg1 ;
-(BOOL)waitForPause;
-(double)fastEditingPauseDuration;
-(double)clusterFastestDuration;
-(BOOL)showIndexLabels;
-(void)setResetHomeScreenLayoutOutlet:(PTOutlet *)arg1 ;
-(double)editingLiftDelay;
-(void)setEditingLiftDelay:(double)arg1 ;
-(double)clusterMiddleFastDuration;
-(void)setDefaultSpringDampingRatio:(double)arg1 ;
-(double)defaultSpringDampingRatio;
-(void)setClusterSlowestDuration:(double)arg1 ;
-(double)clusterMiddleSlowDuration;
@end

