/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSXPCListenerEndpoint, NSObject, NSString;

@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _io_queue;
	shared_ptr<HAL::Client::Object_ID_Map>* _clientObjectMap;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                       //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) shared_ptr<HAL::Client::Object_ID_Map>* clientObjectMap;              //@synthesize clientObjectMap=_clientObjectMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> io_queue;                                //@synthesize io_queue=_io_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListener *)listener;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)io_queue;
-(id)initWithObjectMap:(shared_ptr<HAL::Client::Object_ID_Map>*)arg1 ;
-(void)handle_server_disconnected;
-(BOOL)has_endpoint;
-(void)create_endpoint;
-(void)handle_server_reconnected;
-(void)destroy_endpoint;
-(shared_ptr<HAL::Client::Object_ID_Map>*)clientObjectMap;
@end

