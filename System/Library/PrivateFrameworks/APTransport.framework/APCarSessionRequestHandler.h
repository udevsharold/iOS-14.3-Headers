/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <APTransport/APTransport-Structs.h>
#import <libobjc.A.dylib/CARSessionRequestHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, CARSessionRequestAgent, NSString;

@interface APCarSessionRequestHandler : NSObject <CARSessionRequestHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	CFSetRef _carPlayHelpers;
	CARSessionRequestAgent* _agent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)prepareForRemovingWiFiUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 ;
-(void)startSessionWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAdvertisingCarPlayControlForUSB;
-(void)cancelRequests;
-(void)addCarPlayHelper:(OpaqueAPCarPlayHelperHelperRef)arg1 ;
-(void)_startAdvertisingCarPlayControlForUSB;
-(void)_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 ;
-(void)removeCarPlayHelper:(OpaqueAPCarPlayHelperHelperRef)arg1 ;
-(void)checkCarPlayControlAdvertisingForUSB;
-(void)checkCarPlayControlAdvertisingForWiFiUUID:(id)arg1 ;
@end

