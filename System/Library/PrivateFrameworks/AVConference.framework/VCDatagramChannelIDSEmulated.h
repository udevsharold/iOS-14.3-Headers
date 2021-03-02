/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCDatagramChannelIDS.h>

@class VCDatagramChannelIDS, VCEmulatedNetwork;

@interface VCDatagramChannelIDSEmulated : VCDatagramChannelIDS {

	long long _mode;
	VCDatagramChannelIDS* _idsChannel;
	VCEmulatedNetwork* _network;
	tagVCMemoryPool* _datagramMetaDataPool;
	int _packetCount;
	BOOL _isStarted;

}
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(id)destination;
-(id)defaultLink;
-(void)readyToRead;
-(void)setChannelPreferences:(id)arg1 ;
-(void)osChannelInfoLog;
-(id)connectedLinks;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC86*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC86)arg3 options:(SCD_Struct_VC88*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(void)dealloc;
-(unsigned)token;
-(int)start;
-(void)invalidate;
-(id)initWithIDSDatagramChannel:(id)arg1 mode:(long long)arg2 ;
-(void)optInStreamIDs:(id)arg1 ;
-(void)optOutStreamIDs:(id)arg1 ;
-(BOOL)writeToEmulatedNetworkWithDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC86)arg3 options:(SCD_Struct_VC88*)arg4 ;
-(void)setupEmulatedNetwork;
@end
