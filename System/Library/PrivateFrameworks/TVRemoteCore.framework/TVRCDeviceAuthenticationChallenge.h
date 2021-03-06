/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVRCDeviceAuthenticationChallenge : NSObject {

	long long _challengeType;
	long long _challengeAttributes;
	long long _throttleSeconds;
	NSString* _codeToEnterOnDevice;
	NSString* _deviceIdentifier;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) long long challengeType;                          //@synthesize challengeType=_challengeType - In the implementation block
@property (assign,nonatomic) long long challengeAttributes;                      //@synthesize challengeAttributes=_challengeAttributes - In the implementation block
@property (assign,nonatomic) long long throttleSeconds;                          //@synthesize throttleSeconds=_throttleSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeToEnterOnDevice;              //@synthesize codeToEnterOnDevice=_codeToEnterOnDevice - In the implementation block
-(NSString *)deviceIdentifier;
-(void)cancel;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)_initWithDeviceIdentifier:(id)arg1 challengeType:(long long)arg2 codeToEnterOnDevice:(id)arg3 ;
-(void)userEnteredCodeLocally:(id)arg1 ;
-(long long)challengeType;
-(long long)challengeAttributes;
-(void)setChallengeAttributes:(long long)arg1 ;
-(long long)throttleSeconds;
-(void)setThrottleSeconds:(long long)arg1 ;
-(NSString *)codeToEnterOnDevice;
@end

