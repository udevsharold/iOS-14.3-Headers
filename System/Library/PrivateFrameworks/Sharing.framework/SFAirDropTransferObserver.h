/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFAirDropTransferObserverProtocol.h>

@protocol SFAirDropTransferObserverDelegate;
@class NSMutableDictionary, NSString;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol> {

	id<SFAirDropTransferObserverDelegate> _delegate;
	NSMutableDictionary* _transferIdentifierToTransfer;

}

@property (retain) NSMutableDictionary * transferIdentifierToTransfer;                           //@synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer - In the implementation block
@property (assign,nonatomic,__weak) id<SFAirDropTransferObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(id)remoteObjectInterface;
-(void)activate;
-(id)init;
-(id)exportedInterface;
-(void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1 ;
-(void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1 ;
-(NSMutableDictionary *)transferIdentifierToTransfer;
-(id)machServiceName;
-(void)updateActionHandlersOnTransfer:(id)arg1 ;
-(void)removedTransfer:(id)arg1 ;
-(void)setDelegate:(id<SFAirDropTransferObserverDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)invalidate;
-(id<SFAirDropTransferObserverDelegate>)delegate;
-(void)setTransferIdentifierToTransfer:(NSMutableDictionary *)arg1 ;
-(void)updatedTransfer:(id)arg1 ;
@end

