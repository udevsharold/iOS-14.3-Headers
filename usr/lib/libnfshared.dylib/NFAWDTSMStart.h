/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCTSMStartEvent, NSString;

@interface NFAWDTSMStart : NSObject <NFAWDEventProtocol> {

	unsigned _memoryTransientDeselect;
	unsigned _memoryTransientReset;
	unsigned _memoryPersistent;
	unsigned _memoryIndexTable;
	AWDNFCTSMStartEvent* _metric;

}

@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) unsigned memoryTransientDeselect;              //@synthesize memoryTransientDeselect=_memoryTransientDeselect - In the implementation block
@property (assign,nonatomic) unsigned memoryTransientReset;                 //@synthesize memoryTransientReset=_memoryTransientReset - In the implementation block
@property (assign,nonatomic) unsigned memoryPersistent;                     //@synthesize memoryPersistent=_memoryPersistent - In the implementation block
@property (assign,nonatomic) unsigned memoryIndexTable;                     //@synthesize memoryIndexTable=_memoryIndexTable - In the implementation block
@property (nonatomic,retain) AWDNFCTSMStartEvent * metric;                  //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMetric:(AWDNFCTSMStartEvent *)arg1 ;
-(id)getMetric;
-(void)setUrl:(NSString *)arg1 ;
-(AWDNFCTSMStartEvent *)metric;
-(unsigned)getMetricId;
-(NSString *)url;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(void)setMemoryTransientDeselect:(unsigned)arg1 ;
-(void)setMemoryTransientReset:(unsigned)arg1 ;
-(void)setMemoryPersistent:(unsigned)arg1 ;
-(void)setMemoryIndexTable:(unsigned)arg1 ;
-(unsigned)memoryTransientDeselect;
-(unsigned)memoryTransientReset;
-(unsigned)memoryPersistent;
-(unsigned)memoryIndexTable;
@end

