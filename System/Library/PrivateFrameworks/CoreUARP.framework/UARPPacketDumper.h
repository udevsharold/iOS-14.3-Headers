/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPPacketDumper : NSObject {

	pcapRef _pcap;
	pcap_dumperRef _dumper;
	unsigned _bloodhoundPacketType;

}
-(void)dealloc;
-(id)initWithFileName:(id)arg1 ;
-(void)dump:(id)arg1 accessoryID:(id)arg2 uarpStatus:(unsigned)arg3 direction:(unsigned long long)arg4 ;
@end

