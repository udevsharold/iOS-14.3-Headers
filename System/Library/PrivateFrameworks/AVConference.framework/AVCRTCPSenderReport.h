/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@class AVCRTCPReceiverReport;

@interface AVCRTCPSenderReport : AVCRTCPPacket {

	unsigned _NTPMostSignificantWord;
	unsigned _NTPLeastSignificantWord;
	unsigned _RTPTimestamp;
	unsigned _packetsSent;
	unsigned _octetsSent;
	AVCRTCPReceiverReport* _receiverReport;

}

@property (assign,nonatomic) unsigned NTPMostSignificantWord;                     //@synthesize NTPMostSignificantWord=_NTPMostSignificantWord - In the implementation block
@property (assign,nonatomic) unsigned NTPLeastSignificantWord;                    //@synthesize NTPLeastSignificantWord=_NTPLeastSignificantWord - In the implementation block
@property (assign,nonatomic) unsigned RTPTimestamp;                               //@synthesize RTPTimestamp=_RTPTimestamp - In the implementation block
@property (assign,nonatomic) unsigned packetsSent;                                //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) unsigned octetsSent;                                 //@synthesize octetsSent=_octetsSent - In the implementation block
@property (nonatomic,retain) AVCRTCPReceiverReport * receiverReport;              //@synthesize receiverReport=_receiverReport - In the implementation block
-(unsigned)packetsSent;
-(void)dealloc;
-(id)description;
-(unsigned)NTPMostSignificantWord;
-(unsigned)NTPLeastSignificantWord;
-(unsigned)RTPTimestamp;
-(unsigned)octetsSent;
-(AVCRTCPReceiverReport *)receiverReport;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(void)setNTPMostSignificantWord:(unsigned)arg1 ;
-(void)setNTPLeastSignificantWord:(unsigned)arg1 ;
-(void)setRTPTimestamp:(unsigned)arg1 ;
-(void)setPacketsSent:(unsigned)arg1 ;
-(void)setOctetsSent:(unsigned)arg1 ;
-(void)setReceiverReport:(AVCRTCPReceiverReport *)arg1 ;
@end

