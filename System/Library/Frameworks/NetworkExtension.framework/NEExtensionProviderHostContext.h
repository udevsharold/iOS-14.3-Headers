/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderProtocol, NEExtensionProviderHostDelegate;
@class NSString, NEUserNotification, NSXPCConnection, NSUUID, NSData;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderProtocol> _vendorContext;
	NSString* _description;
	NEUserNotification* _notification;
	BOOL _stopped;
	BOOL _isHostingSystemExtension;
	id<NEExtensionProviderHostDelegate> _delegate;
	NSXPCConnection* _vendorConnection;

}

@property (assign,nonatomic) BOOL stopped;                                      //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * vendorConnection;              //@synthesize vendorConnection=_vendorConnection - In the implementation block
@property (nonatomic,readonly) BOOL isHostingSystemExtension;                   //@synthesize isHostingSystemExtension=_isHostingSystemExtension - In the implementation block
@property (__weak) id<NEExtensionProviderHostDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int pid; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSData * auditTokenData; 
@property (readonly) int requiredEntitlement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NSData *)auditTokenData;
-(void)stopWithReason:(int)arg1 ;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wake;
-(NSXPCConnection *)vendorConnection;
-(id)copyValueForEntitlement:(id)arg1 ;
-(void)setStopped:(BOOL)arg1 ;
-(BOOL)isHostingSystemExtension;
-(BOOL)isSignedWithDeveloperID;
-(id)initWithVendorEndpoint:(id)arg1 delegate:(id)arg2 ;
-(int)pid;
-(BOOL)stopped;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)uuid;
-(NSString *)description;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<NEExtensionProviderHostDelegate>)arg1 ;
-(void)dispose;
-(void)setDescription:(NSString *)arg1 ;
-(int)requiredEntitlement;
-(id<NEExtensionProviderHostDelegate>)delegate;
-(id)vendorContext;
@end
