/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class ATXPCConnection, NSString, NSDictionary, NSObject;

@interface ATXPCMessage : NSObject {

	ATXPCConnection* _receivingConnection;
	NSString* _name;
	NSDictionary* _info;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_reply;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
-(void)setInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)info;
-(void)dealloc;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
-(BOOL)needsReply;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
@end
