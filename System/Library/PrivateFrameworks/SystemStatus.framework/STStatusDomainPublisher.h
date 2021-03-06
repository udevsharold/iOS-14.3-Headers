/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STStatusDomainPublisherClientHandle.h>

@protocol STStatusDomainPublisherServerHandle;
@class NSString;

@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle> {

	id<STStatusDomainPublisherServerHandle> _serverHandle;

}

@property (nonatomic,readonly) id<STStatusDomainPublisherServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,copy) id<STStatusDomainData> data; 
@property (nonatomic,copy) id<STStatusDomainData> volatileData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)statusDomainName;
+(id)emptyData;
-(id)init;
-(id<STStatusDomainData>)data;
-(void)dealloc;
-(void)updateVolatileDataWithBlock:(/*^block*/id)arg1 ;
-(id<STStatusDomainPublisherServerHandle>)serverHandle;
-(void)updateVolatileDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setData:(id<STStatusDomainData>)arg1 ;
-(void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id)initWithServerHandle:(id)arg1 ;
-(void)updateDataWithBlock:(/*^block*/id)arg1 ;
-(void)_setData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setVolatileData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateVolatileDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id<STStatusDomainData>)volatileData;
-(void)setVolatileData:(id<STStatusDomainData>)arg1 ;
-(void)setVolatileData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

