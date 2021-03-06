/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUWiFiTrafficPeer : NSObject {

	BOOL _active;
	unsigned _trafficFlags;
	NSString* _sessionID;
	SCD_Union_CU22 _peerIP;

}

@property (assign,nonatomic) BOOL active;                                   //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* peerIP;              //@synthesize peerIP=_peerIP - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                         //@synthesize trafficFlags=_trafficFlags - In the implementation block
-(NSString *)sessionID;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(/*function pointer*/void*)peerIP;
-(void)setPeerIP:(/*function pointer*/void*)arg1 ;
-(unsigned)trafficFlags;
-(id)peerMACAddressData;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
@end

