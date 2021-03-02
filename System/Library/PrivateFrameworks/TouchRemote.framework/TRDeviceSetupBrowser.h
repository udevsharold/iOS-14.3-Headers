/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTransferBrowserDelegate.h>

@protocol TRDeviceSetupBrowserDelegate;
@class TRTransferBrowser, TRDeviceSetupPeripheral, NSString;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {

	id<TRDeviceSetupBrowserDelegate> _delegate;
	TRTransferBrowser* _transferBrowser;
	TRDeviceSetupPeripheral* _peripheral;

}

@property (nonatomic,retain) TRTransferBrowser * transferBrowser;                           //@synthesize transferBrowser=_transferBrowser - In the implementation block
@property (nonatomic,retain) TRDeviceSetupPeripheral * peripheral;                          //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setPeripheral:(TRDeviceSetupPeripheral *)arg1 ;
-(long long)state;
-(void)setTransferBrowser:(TRTransferBrowser *)arg1 ;
-(TRDeviceSetupPeripheral *)peripheral;
-(void)start;
-(void)browserDidChangeState:(id)arg1 ;
-(void)setDelegate:(id<TRDeviceSetupBrowserDelegate>)arg1 ;
-(void)browserDidDisconnect:(id)arg1 ;
-(void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(TRTransferBrowser *)transferBrowser;
-(void)stop;
-(id<TRDeviceSetupBrowserDelegate>)delegate;
-(void)defer;
-(void)browser:(id)arg1 didStartTransferWithSendDataHandler:(/*^block*/id)arg2 ;
@end
