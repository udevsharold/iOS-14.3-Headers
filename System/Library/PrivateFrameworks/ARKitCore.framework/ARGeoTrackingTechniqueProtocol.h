/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARGeoTrackingTechniqueProtocol <ARTechniqueProtocol>
@property (assign) double visualLocalizationCallInterval; 
@property (assign) double posteriorVisualLocalizationCallInterval; 
@property (assign) double visualLocalizationCallIntervalTimeThreshold; 
@property (assign) BOOL visualLocalizationUpdatesRequested; 
@property (assign) unsigned long long supportEnablementOptions; 
@required
-(double)visualLocalizationCallInterval;
-(void)setVisualLocalizationCallInterval:(double)arg1;
-(void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
-(BOOL)visualLocalizationUpdatesRequested;
-(void)setVisualLocalizationUpdatesRequested:(BOOL)arg1;
-(unsigned long long)supportEnablementOptions;
-(void)setSupportEnablementOptions:(unsigned long long)arg1;
-(id);
-(void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
-(double)posteriorVisualLocalizationCallInterval;
-(double)visualLocalizationCallIntervalTimeThreshold;

@end

