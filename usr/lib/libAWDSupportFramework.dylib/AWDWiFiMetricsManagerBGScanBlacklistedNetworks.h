/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _blacklistingHistorys;
	NSString* _interfaceName;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceName; 
@property (nonatomic,retain) NSString * interfaceName;                           //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSMutableArray * blacklistingHistorys;              //@synthesize blacklistingHistorys=_blacklistingHistorys - In the implementation block
+(Class)blacklistingHistoryType;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)interfaceName;
-(void)dealloc;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasInterfaceName;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
-(void)setBlacklistingHistorys:(NSMutableArray *)arg1 ;
-(void)addBlacklistingHistory:(id)arg1 ;
-(unsigned long long)blacklistingHistorysCount;
-(void)clearBlacklistingHistorys;
-(id)blacklistingHistoryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)blacklistingHistorys;
@end
