/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDQuickLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _quickLinkItems;
	NSMutableArray* _secondaryQuickLinkItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_quickLinkItems : 1;
		unsigned read_secondaryQuickLinkItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * quickLinkItems; 
@property (nonatomic,retain) NSMutableArray * secondaryQuickLinkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)quickLinkItemType;
+(Class)secondaryQuickLinkItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addQuickLinkItem:(id)arg1 ;
-(void)addSecondaryQuickLinkItem:(id)arg1 ;
-(unsigned long long)quickLinkItemsCount;
-(void)clearQuickLinkItems;
-(id)quickLinkItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)secondaryQuickLinkItemsCount;
-(void)clearSecondaryQuickLinkItems;
-(id)secondaryQuickLinkItemAtIndex:(unsigned long long)arg1 ;
-(void)setQuickLinkItems:(NSMutableArray *)arg1 ;
-(void)setSecondaryQuickLinkItems:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)quickLinkItems;
-(NSMutableArray *)secondaryQuickLinkItems;
-(void)writeTo:(id)arg1 ;
@end
