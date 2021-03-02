/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCTransportSessionIDS.h>

@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS
-(int)onStart;
-(id)initWithNotificationQueue:(id)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(int)createVFD:(int*)arg1 forStreamType:(unsigned)arg2 ;
-(void)handleLinkConnectedWithInfo:(id)arg1 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg1 ;
-(int)updateTransportStream:(OpaqueVCTransportStreamRef)arg1 ;
@end
