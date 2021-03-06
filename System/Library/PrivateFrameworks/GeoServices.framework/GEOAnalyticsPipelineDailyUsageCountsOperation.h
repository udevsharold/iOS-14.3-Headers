/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSString, NSNumber;

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {

	int _countType;
	NSString* _usageString;
	NSNumber* _usageBool;
	NSString* _appId;

}
-(id)initWithDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 remoteProxy:(id)arg5 runQueue:(id)arg6 completionQueue:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)main;
@end

