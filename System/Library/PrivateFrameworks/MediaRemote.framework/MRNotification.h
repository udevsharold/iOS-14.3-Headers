/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSDictionary, NSObject;

@interface MRNotification : NSObject {

	NSString* _notification;
	NSDictionary* _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _xpcMessage;

}

@property (nonatomic,readonly) NSString * notification;                         //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;               //@synthesize xpcMessage=_xpcMessage - In the implementation block
-(NSObject*<OS_xpc_object>)xpcMessage;
-(NSString *)notification;
-(id)initWithNotification:(id)arg1 userInfo:(id)arg2 queue:(id)arg3 ;
-(NSDictionary *)userInfo;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
