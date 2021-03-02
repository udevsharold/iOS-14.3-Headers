/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AFMediaRemoteDeviceInfo : NSObject {

	NSString* _groupIdentifier;
	BOOL _lastFetchSucceeded;
	NSString* _routeIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL lastFetchSucceeded;                               //@synthesize lastFetchSucceeded=_lastFetchSucceeded - In the implementation block
@property (nonatomic,copy) NSString * routeIdentifier;                              //@synthesize routeIdentifier=_routeIdentifier - In the implementation block
+(id)currentDevice;
+(id)localDeviceInfo;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)init;
-(NSString *)routeIdentifier;
-(void)_updateDeviceInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setRouteIdentifier:(NSString *)arg1 ;
-(void)_activeDeviceInfoChanged:(id)arg1 ;
-(void)getRouteIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)lastFetchSucceeded;
-(void)getGroupIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)setLastFetchSucceeded:(BOOL)arg1 ;
@end
