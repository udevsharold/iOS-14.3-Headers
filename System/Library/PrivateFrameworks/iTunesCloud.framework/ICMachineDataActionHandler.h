/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface ICMachineDataActionHandler : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;

}
+(id)sharedHandler;
-(id)init;
-(void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
@end
