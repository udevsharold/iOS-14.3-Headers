/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARSessionMetricsReporting;
@class ARConfiguration, NSDate, ARFrame;

@interface ARSessionMetrics : NSObject {

	id<ARSessionMetricsReporting> _reporter;
	BOOL _isAutoFocusEnabled;
	BOOL _sessionWasThrottled;
	float _timeUntilThrottling;
	float _badFramePercentage10;
	float _badFramePercentage60;
	float _badFramePercentageMoreThan60;
	Class _configClass;
	ARConfiguration* _currentConfiguration;
	NSDate* _startDate;
	NSDate* _frameStartDate;
	double _sessionTimeForLastBadFrameRecording;
	BOOL _initializingVIO;
	unsigned long long _frameCount;
	unsigned long long _badFrameCount;
	double _vioInitializationTime;
	BOOL _positionInitialized;
	 _minPos;
	 _maxPos;
	ARFrame* _lastUpdatedFrame;
	unsigned long long _currentVIOMapSize;
	unsigned long long _numberOfCameraSwitches;
	unsigned long long _numberOfReinitializationAttempts;
	BOOL _hasInitialWorldMap;
	BOOL _relocalizingToInitialWorldMap;
	BOOL _sessionDidFailWithError;
	unsigned long long _raycastCount;
	long long _coachingOverlayGoal;
	unsigned long long _coachingOverlayActivationCount;
	BOOL _geoTrackingLocalized;
	double _geoTrackingInitializationTime;
	double _geoTrackingLocalizationTime;
	unsigned long long _geoTrackingLowAccuracyFrameCount;
	unsigned long long _geoTrackingMediumAccuracyFrameCount;
	unsigned long long _geoTrackingHighAccuracyFrameCount;
	unsigned long long _geoTrackingLocalizationCount;
	long long _geoTrackingFailureReason;

}
+(id)getRenderEngineString:(id)arg1 ;
+(void)setRenderType:(unsigned long long)arg1 ;
+(void)recordHitTest:(unsigned long long)arg1 ;
+(void)recordReplayMetrics:(id)arg1 ;
+(void)recordAltitudeLookupAttemptWithDuration:(double)arg1 andResult:(id)arg2 ;
-(id)init;
-(id)queue;
-(id)initWithReporter:(id)arg1 ;
-(void)_recordSessionEnd;
-(void)_recordBadFramePercentageFinal:(BOOL)arg1 ;
-(void)sessionStarted:(id)arg1 withConfiguration:(id)arg2 ;
-(void)sessionDidUpdateFrame:(id)arg1 ;
-(void)sessionUpdateThermalState:(long long)arg1 ;
-(void)recordSaveMap:(long long)arg1 numberOfFeaturePoints:(unsigned long long)arg2 ;
-(void)recordRaycast:(id)arg1 tracked:(BOOL)arg2 ;
-(void)recordCoachingOverlayUsage:(int)arg1 ;
-(void)reportSessionFailure:(id)arg1 ;
-(void)sessionStopped;
@end

