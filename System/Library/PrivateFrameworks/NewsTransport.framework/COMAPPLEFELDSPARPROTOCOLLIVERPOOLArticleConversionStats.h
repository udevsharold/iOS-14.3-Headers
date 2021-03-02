/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _channelConversionStats;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _globalConversionStats;
	NSMutableArray* _topicConversionStats;

}

@property (nonatomic,retain) NSMutableArray * topicConversionStats;                                                  //@synthesize topicConversionStats=_topicConversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * channelConversionStats;              //@synthesize channelConversionStats=_channelConversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats;               //@synthesize globalConversionStats=_globalConversionStats - In the implementation block
+(Class)topicConversionStatsType;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGlobalConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(void)setChannelConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)channelConversionStats;
-(NSMutableArray *)topicConversionStats;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addTopicConversionStats:(id)arg1 ;
-(unsigned long long)topicConversionStatsCount;
-(void)clearTopicConversionStats;
-(id)topicConversionStatsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChannelConversionStats;
-(BOOL)hasGlobalConversionStats;
-(void)setTopicConversionStats:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
