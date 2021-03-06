/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKOverlayContext <NSObject>
@optional
-(BOOL)canSelectOverlayContextItem:(id)arg1 chartController:(id)arg2;
-(id)baseDisplayTypeForOverlay:(long long)arg1;
-(void)overlayStateWillChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(void)overlayStateDidChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
-(void)invalidateContextItem;

@required
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3;
-(id)contextItemForLastUpdate;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1;
-(id)sampleTypeForDateRangeUpdates;

@end

