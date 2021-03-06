/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCEmulatedPacket : NSObject {

	unsigned _packetID;
	unsigned _size;
	unsigned _sequenceNumber;
	double _arrivalTime;
	double _networkServiceTime;
	double _departureTime;
	BOOL _isLost;
	unsigned char _datagram[1500];
	void* _metaData;
	long long _type;

}

@property (nonatomic,readonly) unsigned packetID;                    //@synthesize packetID=_packetID - In the implementation block
@property (assign,nonatomic) unsigned size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) double arrivalTime;                     //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (assign,nonatomic) double networkServiceTime;              //@synthesize networkServiceTime=_networkServiceTime - In the implementation block
@property (assign,nonatomic) double departureTime;                   //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL isLost;                            //@synthesize isLost=_isLost - In the implementation block
@property (assign,nonatomic) void* metaData;                         //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(double)arrivalTime;
-(void)setArrivalTime:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setMetaData:(void*)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(BOOL)isLost;
-(unsigned)size;
-(void*)metaData;
-(long long)type;
-(double)departureTime;
-(void)setDepartureTime:(double)arg1 ;
-(double)networkServiceTime;
-(unsigned)packetID;
-(id)initWithPacketID:(unsigned)arg1 ;
-(id)initWithPacketID:(unsigned)arg1 datagram:(char*)arg2 datagramSize:(unsigned)arg3 ;
-(void)setNetworkServiceTime:(double)arg1 ;
-(void)setIsLost:(BOOL)arg1 ;
@end

