/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_ws_response.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_ws_response : NSObject <OS_nw_ws_response> {

	int status;
	char* selected_subprotocol;
	NSObject*<OS_xpc_object> header_names;
	NSObject*<OS_xpc_object> header_values;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

