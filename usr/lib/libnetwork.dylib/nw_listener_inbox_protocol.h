/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/nw_listener_inbox.h>

@interface nw_listener_inbox_protocol : nw_listener_inbox {

	nw_listen_protocol_callbacks* _listen_callbacks;
	nw_listen_protocol* _listen_protocol;

}
-(id)description;
-(BOOL)cancel;
@end

