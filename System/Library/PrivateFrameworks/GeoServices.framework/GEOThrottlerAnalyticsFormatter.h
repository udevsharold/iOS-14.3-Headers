/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject {

	NSMutableDictionary* _throttlerAggregatedInfo;

}
+(id)sharedThrottlerFormatter;
-(id)init;
-(void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(SCD_Struct_GE91)arg3 appId:(id)arg4 ;
-(BOOL)hasThrottledInfoForKeyPath:(id)arg1 ;
-(void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3 ;
-(int)networkServiceForRequestKind:(SCD_Struct_GE91)arg1 ;
-(int)throttleTypeForString:(id)arg1 ;
-(BOOL)hasInitialInfoForKeyPath:(id)arg1 ;
-(void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2 ;
-(int)throttleModeForString:(id)arg1 ;
@end

