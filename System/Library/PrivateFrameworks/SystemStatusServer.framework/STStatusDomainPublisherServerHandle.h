/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STStatusDomainPublisherServerHandle <NSObject>
@required
-(void)registerPublisherClient:(id)arg1 forDomain:(unsigned long long)arg2;
-(id)publishedVolatileDataForDomain:(unsigned long long)arg1;
-(void)updateVolatileDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(void)updateDataForPublisherClient:(id)arg1 domain:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 fallbackDataProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(id)publishedDataForDomain:(unsigned long long)arg1;
-(void)removePublisherClient:(id)arg1 forDomain:(unsigned long long)arg2;
-(void)publishVolatileData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)publishData:(id)arg1 forPublisherClient:(id)arg2 domain:(unsigned long long)arg3 completion:(/*^block*/id)arg4;

@end

