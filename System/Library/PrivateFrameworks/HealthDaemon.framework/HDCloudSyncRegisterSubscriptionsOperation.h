/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class NSDictionary, CKContainer;

@interface HDCloudSyncRegisterSubscriptionsOperation : HDCloudSyncOperation {

	NSDictionary* _subscriptions;
	CKContainer* _container;

}
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 container:(id)arg3 subscriptions:(id)arg4 ;
-(void)registerSubscriptionsWithIdentifer:(id)arg1 database:(id)arg2 ;
@end
