/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNetworkUsage : PBCodable <NSCopying> {

	unsigned long long _cellIn;
	unsigned long long _cellOut;
	unsigned long long _wifiIn;
	unsigned long long _wifiOut;
	NSString* _bundleName;
	unsigned _numConnections;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                   //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasWifiIn; 
@property (assign,nonatomic) unsigned long long wifiIn;               //@synthesize wifiIn=_wifiIn - In the implementation block
@property (assign,nonatomic) BOOL hasWifiOut; 
@property (assign,nonatomic) unsigned long long wifiOut;              //@synthesize wifiOut=_wifiOut - In the implementation block
@property (assign,nonatomic) BOOL hasCellIn; 
@property (assign,nonatomic) unsigned long long cellIn;               //@synthesize cellIn=_cellIn - In the implementation block
@property (assign,nonatomic) BOOL hasCellOut; 
@property (assign,nonatomic) unsigned long long cellOut;              //@synthesize cellOut=_cellOut - In the implementation block
@property (assign,nonatomic) BOOL hasNumConnections; 
@property (assign,nonatomic) unsigned numConnections;                 //@synthesize numConnections=_numConnections - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)cellIn;
-(unsigned long long)wifiIn;
-(void)setNumConnections:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)numConnections;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)cellOut;
-(unsigned long long)wifiOut;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleName;
-(void)setBundleName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCellIn:(unsigned long long)arg1 ;
-(void)setCellOut:(unsigned long long)arg1 ;
-(void)setWifiIn:(unsigned long long)arg1 ;
-(void)setWifiOut:(unsigned long long)arg1 ;
-(BOOL)hasBundleName;
-(void)setHasWifiIn:(BOOL)arg1 ;
-(BOOL)hasWifiIn;
-(void)setHasWifiOut:(BOOL)arg1 ;
-(BOOL)hasWifiOut;
-(void)setHasCellIn:(BOOL)arg1 ;
-(BOOL)hasCellIn;
-(void)setHasCellOut:(BOOL)arg1 ;
-(BOOL)hasCellOut;
-(void)setHasNumConnections:(BOOL)arg1 ;
-(BOOL)hasNumConnections;
@end

