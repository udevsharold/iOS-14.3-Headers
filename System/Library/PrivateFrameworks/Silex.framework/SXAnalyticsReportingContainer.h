/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAnalyticsReportingContainer.h>

@protocol SXAnalyticsReportingContainer <SXAnalyticsReportingProvider>
@required
-(void)registerAnalyticsReporting:(id)arg1;

@end


@protocol SXAnalyticsReporting;
@class NSString;

@interface SXAnalyticsReportingContainer : NSObject <SXAnalyticsReportingContainer> {

	id<SXAnalyticsReporting> _analyticsReporting;

}

@property (nonatomic,readonly) id<SXAnalyticsReporting> analyticsReporting;              //@synthesize analyticsReporting=_analyticsReporting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerAnalyticsReporting:(id)arg1 ;
-(id<SXAnalyticsReporting>)analyticsReporting;
@end
