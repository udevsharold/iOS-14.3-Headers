/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;
@class NSXPCConnection;

@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostAuthorizationControllerDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)show;
-(void)didFinishWithError:(id)arg1 ;
-(id)init;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setDelegate:(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)arg1 ;
-(void)connectionDidInvalidate;
-(void)invalidate;
-(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)delegate;
-(void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2 ;
-(void)connectionDidInterrupt;
-(void)_remoteObjectProxyWithCompletion:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

