/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCExpressTransactionStartedEvent, NSString;

@interface NFAWDExpressTransactionStartedEvent : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	AWDNFCExpressTransactionStartedEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AWDNFCExpressTransactionStartedEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setType:(unsigned)arg1 ;
-(void)setMetric:(AWDNFCExpressTransactionStartedEvent *)arg1 ;
-(unsigned)type;
-(id)getMetric;
-(AWDNFCExpressTransactionStartedEvent *)metric;
-(unsigned)getMetricId;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

