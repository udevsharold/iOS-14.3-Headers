/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiNWActivityHistogramBin : PBCodable <NSCopying> {

	unsigned long long _hits;
	NSString* _bin;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasBin; 
@property (nonatomic,retain) NSString * bin;                       //@synthesize bin=_bin - In the implementation block
@property (assign,nonatomic) BOOL hasHits; 
@property (assign,nonatomic) unsigned long long hits;              //@synthesize hits=_hits - In the implementation block
-(unsigned long long)hits;
-(NSString *)bin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasBin;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBin:(NSString *)arg1 ;
-(BOOL)hasHits;
-(void)writeTo:(id)arg1 ;
-(void)setHits:(unsigned long long)arg1 ;
-(void)setHasHits:(BOOL)arg1 ;
@end

