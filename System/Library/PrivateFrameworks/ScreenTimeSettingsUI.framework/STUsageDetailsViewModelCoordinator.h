/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class STUsageDetailsViewModel, NSArray, NSString;


@protocol STUsageDetailsViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STUsageDetailsViewModel * viewModel; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy) NSString * selectedDeviceIdentifier; 
@property (getter=isRefreshing,readonly) BOOL refreshing; 
@required
-(STUsageDetailsViewModel *)viewModel;
-(NSArray *)devices;
-(BOOL)isRefreshing;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;
-(void)refreshUsageData;
-(NSString *)selectedDeviceIdentifier;
-(void)setSelectedDeviceIdentifier:(id)arg1;

@end

