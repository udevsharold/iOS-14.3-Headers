/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@class PPConnectionsMetricsTracker;

@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol> {

	PPConnectionsMetricsTracker* _metricsTracker;

}
-(id)init;
-(id)_locationForQuery:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 explanationSet:(id)arg4 ;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)criteriaFromQuery:(id)arg1 ;
@end
