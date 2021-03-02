/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVRXDeviceAuthenticationChallenge : NSObject {

	/*^block*/id _continuation;
	/*^block*/id _cancellationHandler;
	long long _challengeType;
	long long _challengeAttributes;
	long long _throttleSeconds;
	NSString* _codeToEnterOnDevice;

}

@property (nonatomic,readonly) long long challengeType;                          //@synthesize challengeType=_challengeType - In the implementation block
@property (assign,nonatomic) long long challengeAttributes;                      //@synthesize challengeAttributes=_challengeAttributes - In the implementation block
@property (assign,nonatomic) long long throttleSeconds;                          //@synthesize throttleSeconds=_throttleSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeToEnterOnDevice;              //@synthesize codeToEnterOnDevice=_codeToEnterOnDevice - In the implementation block
+(id)_challengeWithCodeToEnterOnDevice:(id)arg1 cancellationHandler:(/*^block*/id)arg2 ;
+(id)_challengeWithCodeToEnterLocally:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)_init;
-(void)userEnteredCodeLocally:(id)arg1 ;
-(long long)challengeType;
-(long long)challengeAttributes;
-(void)setChallengeAttributes:(long long)arg1 ;
-(long long)throttleSeconds;
-(void)setThrottleSeconds:(long long)arg1 ;
-(NSString *)codeToEnterOnDevice;
@end
