/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeballServiceProxyInterface <NSObject>
@property (assign,nonatomic) id<MNTimeballServiceProxyDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<MNTimeballServiceProxyDelegate>)delegate;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
-(void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
-(void)unsubscribeFromDestination:(id)arg1;
-(void)subscribeToAllDestinations;
-(void)unsubscribeFromAllDestinations;

@end
