/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FCCKPRequestedFields : PBCodable <NSCopying> {

	NSMutableArray* _fields;

}

@property (nonatomic,retain) NSMutableArray * fields;              //@synthesize fields=_fields - In the implementation block
+(Class)fieldsType;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)fields;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearFields;
-(void)writeTo:(id)arg1 ;
@end
