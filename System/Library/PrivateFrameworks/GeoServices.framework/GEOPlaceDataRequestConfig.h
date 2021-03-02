/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {

	double _timeout;
	unsigned long long _urlType;
	NSNumber* _requestPriority;
	unsigned long long _multipathServiceType;

}
-(unsigned long long)urlType;
-(unsigned long long)multipathServiceType;
-(double)timeout;
-(id)serviceTypeNumber;
-(SCD_Struct_GE91)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3 ;
-(id)additionalHTTPHeaders;
@end
