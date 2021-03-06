/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMServiceClientInterface.h>
#import <AXMediaUtilities/AXMServiceInterface.h>

@protocol OS_dispatch_queue, AXMServiceDelegate;
@class NSObject, NSXPCConnection, NSString;

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface> {

	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	id<AXMServiceDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<AXMServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_destroyXPCConnection;
-(id)init;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)prewarmVisionEngineService;
-(void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id)_serviceProxy;
-(void)setDelegate:(id<AXMServiceDelegate>)arg1 ;
-(id<AXMServiceDelegate>)delegate;
@end

