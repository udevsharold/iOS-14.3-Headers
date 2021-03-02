/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPRecordField : PBCodable <NSCopying> {

	FCCKPRecordFieldIdentifier* _identifier;
	FCCKPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) FCCKPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
-(FCCKPRecordFieldValue *)value;
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(FCCKPRecordFieldValue *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(FCCKPRecordFieldIdentifier *)arg1 ;
-(unsigned long long)hash;
-(FCCKPRecordFieldIdentifier *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
@end
