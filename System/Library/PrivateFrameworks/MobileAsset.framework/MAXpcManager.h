/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MAXpcManager : NSObject
-(void)setClientName:(id)arg1 ;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2 ;
-(void)setClientConnectionHandler;
-(void)ensureConnection;
-(id)sendSync:(id)arg1 ;
-(void)clearConnection:(id)arg1 ;
-(void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)sendAsync:(id)arg1 clientHandler:(/*^block*/id)arg2 taskDescriptor:(id)arg3 ;
@end

