/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_outstanding_reply : NSObject {

	unsigned long long msg_id;
	/*^block*/id reply_handler;
	NSObject*<OS_dispatch_queue> reply_queue;
	OS_xpc_remote_outstanding_reply* link_stqe_next;

}
@end

