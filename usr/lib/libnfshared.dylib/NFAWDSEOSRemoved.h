/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEOSRemovedEvent, NSString;

@interface NFAWDSEOSRemoved : NSObject <NFAWDEventProtocol> {

	unsigned _hardwareType;
	AWDNFCSEOSRemovedEvent* _metric;

}

@property (assign,nonatomic) unsigned hardwareType;                          //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned reason; 
@property (assign,nonatomic) BOOL hasExpressTransactionStarted; 
@property (assign,nonatomic) BOOL hasCardEmulationStarted; 
@property (nonatomic,retain) AWDNFCSEOSRemovedEvent * metric;                //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)hardwareType;
-(id)init;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setMetric:(AWDNFCSEOSRemovedEvent *)arg1 ;
-(unsigned)reason;
-(id)getMetric;
-(void)setReason:(unsigned)arg1 ;
-(AWDNFCSEOSRemovedEvent *)metric;
-(unsigned)getMetricId;
-(void)setHasExpressTransactionStarted:(BOOL)arg1 ;
-(void)setHasCardEmulationStarted:(BOOL)arg1 ;
-(BOOL)hasExpressTransactionStarted;
-(BOOL)hasCardEmulationStarted;
-(void)updateExceptionUUID:(id)arg1 ;
@end

