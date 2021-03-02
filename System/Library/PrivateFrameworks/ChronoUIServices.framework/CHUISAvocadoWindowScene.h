/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIWindowScene.h>

@class CHSWidget, CHSWidgetMetrics, NSString;

@interface CHUISAvocadoWindowScene : UIWindowScene {

	BOOL _visibleEntryShouldSnapshot;

}

@property (nonatomic,copy,readonly) CHSWidget * widget; 
@property (nonatomic,copy,readonly) CHSWidgetMetrics * metrics; 
@property (nonatomic,readonly) unsigned long long style; 
@property (nonatomic,copy,readonly) NSString * widgetConfigurationIdentifier; 
@property (getter=isVisiblySettled,nonatomic,readonly) BOOL visiblySettled; 
@property (getter=isPrivateModeEnabled,nonatomic,readonly) BOOL privateModeEnabled; 
@property (getter=areAnimationsDisabled,nonatomic,readonly) BOOL animationsDisabled; 
@property (assign,getter=shouldVisibleEntrySnapshot,nonatomic) BOOL visibleEntryShouldSnapshot;              //@synthesize visibleEntryShouldSnapshot=_visibleEntryShouldSnapshot - In the implementation block
-(CHSWidget *)widget;
-(BOOL)isPrivateModeEnabled;
-(unsigned long long)style;
-(BOOL)areAnimationsDisabled;
-(BOOL)isVisiblySettled;
-(CHSWidgetMetrics *)metrics;
-(id)_sceneSettings;
-(NSString *)widgetConfigurationIdentifier;
-(BOOL)shouldVisibleEntrySnapshot;
-(void)setVisibleEntryShouldSnapshot:(BOOL)arg1 ;
@end
