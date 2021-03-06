/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCCardIngestionSessionStateChangeEvent, NSString;

@interface NFAWDCardIngestionSessionStateChangeEvent : NSObject <NFAWDEventProtocol> {

	unsigned _state;
	unsigned _technology;
	unsigned _spStatusCode;
	unsigned _cardValidationStatus;
	unsigned _sessionStatus;
	AWDNFCCardIngestionSessionStateChangeEvent* _metric;

}

@property (assign,nonatomic) unsigned state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned technology;                                              //@synthesize technology=_technology - In the implementation block
@property (assign,nonatomic) unsigned spStatusCode;                                            //@synthesize spStatusCode=_spStatusCode - In the implementation block
@property (assign,nonatomic) unsigned cardValidationStatus;                                    //@synthesize cardValidationStatus=_cardValidationStatus - In the implementation block
@property (assign,nonatomic) unsigned sessionStatus;                                           //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,retain) AWDNFCCardIngestionSessionStateChangeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned)technology;
-(unsigned)sessionStatus;
-(unsigned)state;
-(void)setTechnology:(unsigned)arg1 ;
-(void)setMetric:(AWDNFCCardIngestionSessionStateChangeEvent *)arg1 ;
-(id)getMetric;
-(void)setSessionStatus:(unsigned)arg1 ;
-(AWDNFCCardIngestionSessionStateChangeEvent *)metric;
-(unsigned)getMetricId;
-(void)setState:(unsigned)arg1 ;
-(void)setSpStatusCode:(unsigned)arg1 ;
-(void)setCardValidationStatus:(unsigned)arg1 ;
-(unsigned)spStatusCode;
-(unsigned)cardValidationStatus;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1 ;
@end

