/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponents, NSDate, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject {

	NSDateComponents* _previousTodayViewAppearDateComponents;
	NSDate* _previousTodayViewAppearanceDate;
	NSMutableDictionary* _previousWidgetAppearanceDateByIdentifier;
	unsigned long long _location;
	PETDistributionEventTracker* _widgetLingerTracker;
	PETScalarEventTracker* _widgetShownTracker;
	PETScalarEventTracker* _widgetStatusTracker;
	PETDistributionEventTracker* _widgetListLingerTracker;
	PETScalarEventTracker* _widgetToggleContractTracker;
	PETScalarEventTracker* _widgetToggleExpandTracker;
	PETScalarEventTracker* _widgetListShownTracker;
	PETScalarEventTracker* _widgetToggleContract;
	PETScalarEventTracker* _widgetToggleExpand;
	BOOL _authenticated;

}
+(id)sharedInstance;
-(id)_widgetStatusTracker;
-(id)_locationProperty;
-(id)init;
-(id)_widgetListLingerTracker;
-(id)_widgetShownTracker;
-(void)dealloc;
-(void)_lockedStateDidChange;
-(void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 ;
-(id)_statusProperty;
-(id)widgetToggleExpandTracker;
-(void)_trackWidgetContractEventForWidget:(id)arg1 ;
-(void)widgetViewDidDisappearWithWidget:(id)arg1 ;
-(id)_widgetProperty;
-(void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(BOOL)arg2 ;
-(void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 duration:(double)arg5 ;
-(id)_widgetToggleContractTracker;
-(void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 duration:(double)arg3 ;
-(void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3 ;
-(void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 ;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2 ;
-(void)widget:(id)arg1 didDisappearInMode:(long long)arg2 ;
-(void)_trackWidgetExpandEventForWidget:(id)arg1 ;
-(void)widgetListDidDisappearAtLocation:(unsigned long long)arg1 ;
-(id)_widgetLingerTracker;
-(void)widgetViewDidAppearWithWidget:(id)arg1 ;
-(id)widgetListShownTracker;
-(id)_authenticationProperty;
-(void)widget:(id)arg1 didAppearInMode:(long long)arg2 ;
-(id)_modeProperty;
@end

