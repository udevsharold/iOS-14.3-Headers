/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
-(void)netServiceWillResolve:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netServiceWillPublish:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netServiceDidStop:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netService:(id)arg1 didNotPublish:(id)arg2;

@end

