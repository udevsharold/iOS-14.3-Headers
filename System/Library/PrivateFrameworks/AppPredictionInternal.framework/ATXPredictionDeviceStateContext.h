/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXPredictionContextDomain.h>

@class NSString;

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain {

	BOOL _onWifi;
	BOOL _inAirplaneMode;
	NSString* _wifiSSID;

}

@property (nonatomic,readonly) BOOL onWifi;                      //@synthesize onWifi=_onWifi - In the implementation block
@property (nonatomic,readonly) NSString * wifiSSID;              //@synthesize wifiSSID=_wifiSSID - In the implementation block
@property (nonatomic,readonly) BOOL inAirplaneMode;              //@synthesize inAirplaneMode=_inAirplaneMode - In the implementation block
-(BOOL)onWifi;
-(id)encodeAsProto;
-(NSString *)wifiSSID;
-(id)jsonDict;
-(BOOL)isEqualToATXPredictionDeviceStateContext:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)inAirplaneMode;
-(id)initWithWifiSSID:(id)arg1 onWifi:(BOOL)arg2 inAirplaneMode:(BOOL)arg3 ;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
@end
