/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeballServiceProxyDelegate <NSObject>
@required
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)completedUpdateForHandlerID:(id)arg1;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;

@end
