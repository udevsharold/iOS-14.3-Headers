/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider.h>

@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_deviceModel;
-(id)_percentageOfFreeSpaceOnDevice;
-(id)_osVersion;
-(void)registerSystemProperties:(id)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(id)_deviceFreeSpaceDescription;
-(id)_process;
-(id)_lowPowerModeEnabled;
@end

