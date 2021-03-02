/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPRTCReportingEvent : NSObject {

	unsigned short _rtcReportingCategory;
	unsigned short _rtcReportingType;
	long long _networkInterfaceType;

}

@property (nonatomic,readonly) unsigned short rtcReportingCategory;              //@synthesize rtcReportingCategory=_rtcReportingCategory - In the implementation block
@property (nonatomic,readonly) unsigned short rtcReportingType;                  //@synthesize rtcReportingType=_rtcReportingType - In the implementation block
@property (assign,nonatomic) long long networkInterfaceType;                     //@synthesize networkInterfaceType=_networkInterfaceType - In the implementation block
-(id)newRTCReportingMessageDictionary;
-(id)newRTCReportingPayloadDictionary;
-(long long)networkInterfaceType;
-(void)setNetworkInterfaceType:(long long)arg1 ;
-(unsigned short)rtcReportingType;
-(unsigned short)rtcReportingCategory;
@end
