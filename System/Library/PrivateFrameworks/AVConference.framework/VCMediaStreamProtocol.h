/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMediaStreamProtocol <NSObject>
@optional
-(void)setRtpTimeOutEnabled:(BOOL)arg1;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1;
-(void)setRtcpEnabled:(BOOL)arg1;
-(void)setRtcpSendInterval:(double)arg1;
-(void)setRtpTimeOutInterval:(double)arg1;
-(void)setRtcpTimeOutInterval:(double)arg1;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3;
-(void)setStreamDirection:(long long)arg1;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2;
-(id)setupRTPWithSocketDictionary:(id)arg1 error:(id*)arg2;
-(long long)streamDirection;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg1;
-(void)setDecryptionTimeOutInterval:(double)arg1;

@required
-(void)setPause:(BOOL)arg1;
-(void)start;
-(void)stop;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2;

@end

