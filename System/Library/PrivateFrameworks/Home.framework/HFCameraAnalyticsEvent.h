/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, HMCameraClip;

@interface HFCameraAnalyticsEvent : NSObject {

	NSDate* _startDate;
	HMCameraClip* _cameraClip;

}

@property (nonatomic,readonly) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic,__weak) HMCameraClip * cameraClip;              //@synthesize cameraClip=_cameraClip - In the implementation block
-(id)initWithCameraClip:(id)arg1 ;
-(NSDate *)startDate;
-(HMCameraClip *)cameraClip;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(void)sendEventForState:(unsigned long long)arg1 ;
@end

