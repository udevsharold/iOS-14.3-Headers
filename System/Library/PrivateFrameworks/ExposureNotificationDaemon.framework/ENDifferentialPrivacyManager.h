/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DPBitValueRecorder, NSDictionary;

@interface ENDifferentialPrivacyManager : NSObject {

	_DPBitValueRecorder* _userRiskRecorder;
	_DPBitValueRecorder* _userRiskParametersRecorder;
	_DPBitValueRecorder* _userBeaconCountRecorder;
	_DPBitValueRecorder* _userNotificationRecorder;
	_DPBitValueRecorder* _userNotificationInteractionRecorder;
	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)hashForServerExposureConfiguration:(id)arg1 ;
+(unsigned short)userRiskScoreForExposureDetectionSummary:(id)arg1 ;
-(NSDictionary *)metadata;
-(void)reportUserExposureNotificationTapped:(BOOL)arg1 classificationIndex:(unsigned char)arg2 ;
-(void)updatedServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2 ;
-(id)initWithServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2 ;
-(void)reportUserRiskScoreWithSummary:(id)arg1 ;
-(void)reportUserRiskParameters:(id)arg1 ;
-(void)reportUserBeaconCount:(id)arg1 ;
-(void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)arg1 ;
-(void)_submitValue:(id)arg1 toRecorder:(id)arg2 description:(const char*)arg3 ;
@end
