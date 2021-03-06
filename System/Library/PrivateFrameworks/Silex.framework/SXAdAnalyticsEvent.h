/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@interface SXAdAnalyticsEvent : SXAnalyticsEvent {

	NSString* _adCampaign;
	NSString* _adLine;
	NSString* _adCreative;
	NSString* _impressionIdentifier;
	double _impressionThreshold;

}

@property (nonatomic,readonly) NSString * adCampaign;                        //@synthesize adCampaign=_adCampaign - In the implementation block
@property (nonatomic,readonly) NSString * adLine;                            //@synthesize adLine=_adLine - In the implementation block
@property (nonatomic,readonly) NSString * adCreative;                        //@synthesize adCreative=_adCreative - In the implementation block
@property (nonatomic,readonly) NSString * impressionIdentifier;              //@synthesize impressionIdentifier=_impressionIdentifier - In the implementation block
@property (nonatomic,readonly) double impressionThreshold;                   //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
-(NSString *)adLine;
-(double)impressionThreshold;
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 ;
-(NSString *)adCampaign;
-(NSString *)adCreative;
-(NSString *)impressionIdentifier;
@end

