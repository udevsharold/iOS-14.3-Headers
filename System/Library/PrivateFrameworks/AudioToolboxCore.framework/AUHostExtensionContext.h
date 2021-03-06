/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@class NSExtension, AUHostDelegate, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext {

	NSExtension* _extension;
	AUHostDelegate* _delegate;

}

@property (nonatomic,retain) NSExtension * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) AUHostDelegate * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * xpcConnection; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NSExtension *)extension;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)dealloc;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setDelegate:(AUHostDelegate *)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(AUHostDelegate *)delegate;
@end

