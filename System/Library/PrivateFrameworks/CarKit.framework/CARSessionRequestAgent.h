/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, CARSessionRequestHandlerProxy, NSString;

@interface CARSessionRequestAgent : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	CARSessionRequestHandlerProxy* _handlerProxy;

}

@property (nonatomic,retain) NSXPCListener * listener;                                           //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) CARSessionRequestHandlerProxy * handlerProxy;                       //@synthesize handlerProxy=_handlerProxy - In the implementation block
@property (nonatomic,__weak,readonly) id<CARSessionRequestHandling> requestHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<CARSessionRequestHandling>)requestHandler;
-(CARSessionRequestHandlerProxy *)handlerProxy;
-(id)initWithRequestHandler:(id)arg1 ;
-(BOOL)wantsCarPlayControlAdvertisingForUSB;
-(BOOL)wantsCarPlayControlAdvertisingForWiFiUUID:(id)arg1 ;
-(void)setHandlerProxy:(CARSessionRequestHandlerProxy *)arg1 ;
@end

