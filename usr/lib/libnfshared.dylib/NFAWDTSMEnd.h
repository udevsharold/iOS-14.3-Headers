/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTSMEndEvent, NSData, NSString;

@interface NFAWDTSMEnd : NSObject <NFAWDEventProtocol> {

	BOOL _authEnabled;
	BOOL _mfdEnabled;
	BOOL _restrictedModeExit;
	unsigned _status;
	unsigned _lifeCycleState;
	AWDNFCTSMEndEvent* _metric;

}

@property (assign,nonatomic) unsigned status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL authEnabled;                        //@synthesize authEnabled=_authEnabled - In the implementation block
@property (assign,nonatomic) BOOL mfdEnabled;                         //@synthesize mfdEnabled=_mfdEnabled - In the implementation block
@property (assign,nonatomic) unsigned lifeCycleState;                 //@synthesize lifeCycleState=_lifeCycleState - In the implementation block
@property (assign,nonatomic) BOOL restrictedModeExit;                 //@synthesize restrictedModeExit=_restrictedModeExit - In the implementation block
@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) NSData * discretionaryData; 
@property (nonatomic,retain) AWDNFCTSMEndEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)aid;
-(id)init;
-(unsigned)status;
-(void)setMetric:(AWDNFCTSMEndEvent *)arg1 ;
-(id)getMetric;
-(NSData *)discretionaryData;
-(void)setAid:(NSData *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(AWDNFCTSMEndEvent *)metric;
-(unsigned)getMetricId;
-(void)setDiscretionaryData:(NSData *)arg1 ;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(void)setAuthEnabled:(BOOL)arg1 ;
-(void)setMfdEnabled:(BOOL)arg1 ;
-(void)setLifeCycleState:(unsigned)arg1 ;
-(void)setRestrictedModeExit:(BOOL)arg1 ;
-(BOOL)authEnabled;
-(BOOL)mfdEnabled;
-(unsigned)lifeCycleState;
-(BOOL)restrictedModeExit;
@end
