/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FontServices/FontServicesWebKitSupportClientProtocol.h>
#import <FontServices/FontServicesWebKitSupportServerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCConnection, NSXPCListener, NSString;

@interface FSWebKitProcessSupportManager : NSObject <FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _hostConnection;
	NSXPCListener* _serverListener;

}

@property (nonatomic,retain) NSXPCConnection * hostConnection;              //@synthesize hostConnection=_hostConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * serverListener;                //@synthesize serverListener=_serverListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ping:(/*^block*/id)arg1 ;
-(void)checkin;
-(NSXPCListener *)serverListener;
-(NSXPCConnection *)hostConnection;
-(void)ping2:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setHostConnection:(NSXPCConnection *)arg1 ;
-(void)setServerListener:(NSXPCListener *)arg1 ;
-(void)userInstalledFontsInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithXPCEndpoint:(id)arg1 ;
@end
