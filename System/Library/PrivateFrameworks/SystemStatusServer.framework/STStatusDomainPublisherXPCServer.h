/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STStatusDomainPublisherXPCServer <NSObject>
@required
-(void)publishDiff:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)registerToPublishDomains:(id)arg1;
-(void)publishData:(id)arg1 forDomain:(unsigned long long)arg2 discardingOnExit:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)unregisterFromPublishingDomains:(id)arg1;

@end
