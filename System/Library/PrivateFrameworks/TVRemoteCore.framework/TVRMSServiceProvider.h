/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<TVRMSServiceProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(void)beginDiscovery;
-(void)endDiscovery;
-(id<TVRMSServiceProviderDelegate>)delegate;

@end

