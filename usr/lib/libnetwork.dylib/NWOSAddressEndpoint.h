/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {

	sockaddr_storage address;
	ether_addr ethernet_address;
	char* hostname;
	int original_fd;
	unsigned short priority;
	unsigned calculated_hostname : 1;

}
-(const char*)hostname;
-(id)copyDictionary;
-(unsigned short)port;
-(void)setPriority:(unsigned short)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned)type;
-(unsigned long long)getHash;
-(char*)createDescription:(BOOL)arg1 ;
-(unsigned short)priority;
@end

