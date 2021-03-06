/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL useDuetRecommendations; 
@property (getter=isBatteryWidgetAlwaysAvailable,nonatomic,readonly) BOOL batteryWidgetAlwaysAvailable; 
@property (nonatomic,readonly) BOOL showInternalWidgets; 
@property (getter=isWidgetSnapshottingEnabled,nonatomic,readonly) BOOL widgetSnapshottingEnabled; 
@property (assign,nonatomic) BOOL didPurgeNonCAMLSnapshots; 
@property (assign,nonatomic) BOOL didPurgeNonASTCSnapshots; 
@property (getter=isWidgetLoggingEnabled,nonatomic,readonly) BOOL widgetLoggingEnabled; 
@property (nonatomic,readonly) BOOL showWidgetSnapshotDebugLabels; 
-(void)setDidPurgeNonCAMLSnapshots:(BOOL)arg1 ;
-(BOOL)didPurgeNonCAMLSnapshots;
-(void)setDidPurgeNonASTCSnapshots:(BOOL)arg1 ;
-(BOOL)didPurgeNonASTCSnapshots;
-(void)setShowWidgetSnapshotDebugLabels:(BOOL)arg1 ;
-(BOOL)showWidgetSnapshotDebugLabels;
-(void)setWidgetLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetLoggingEnabled;
-(void)setWidgetSnapshottingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetSnapshottingEnabled;
-(void)setUseDuetRecommendations:(BOOL)arg1 ;
-(BOOL)useDuetRecommendations;
-(void)setShowInternalWidgets:(BOOL)arg1 ;
-(BOOL)showInternalWidgets;
-(void)setBatteryWidgetAlwaysAvailable:(BOOL)arg1 ;
-(BOOL)isBatteryWidgetAlwaysAvailable;
-(void)_bindAndRegisterDefaults;
@end

