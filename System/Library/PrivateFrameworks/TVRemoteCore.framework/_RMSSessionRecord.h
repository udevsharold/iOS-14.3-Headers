/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVRMSPowerAssertion, TVRMSRunAssertion;

@interface _RMSSessionRecord : NSObject {

	int _refreshCount;
	int _timeout;
	id _session;
	TVRMSPowerAssertion* _powerAssertion;
	TVRMSRunAssertion* _runAssertion;

}

@property (assign,nonatomic) int refreshCount;                                  //@synthesize refreshCount=_refreshCount - In the implementation block
@property (assign,nonatomic) int timeout;                                       //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) TVRMSPowerAssertion * powerAssertion;              //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) TVRMSRunAssertion * runAssertion;                  //@synthesize runAssertion=_runAssertion - In the implementation block
-(TVRMSPowerAssertion *)powerAssertion;
-(void)setSession:(id)arg1 ;
-(id)session;
-(void)setTimeout:(int)arg1 ;
-(int)timeout;
-(void)setPowerAssertion:(TVRMSPowerAssertion *)arg1 ;
-(int)refreshCount;
-(void)setRefreshCount:(int)arg1 ;
-(TVRMSRunAssertion *)runAssertion;
-(void)setRunAssertion:(TVRMSRunAssertion *)arg1 ;
@end

