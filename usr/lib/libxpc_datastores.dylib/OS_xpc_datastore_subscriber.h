/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libxpc_datastores.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libxpc_datastores.dylib/OS_xpc_datastore_object.h>
#import <libobjc.A.dylib/XDS_xpc_datastore_subscriber.h>

@class NSString;

@interface OS_xpc_datastore_subscriber : OS_xpc_datastore_object <XDS_xpc_datastore_subscriber> {

	unsigned recvp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyCurrentStateWithReqType:(unsigned long long)arg1 ;
@end

