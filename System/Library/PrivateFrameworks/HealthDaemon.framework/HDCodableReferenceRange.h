/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableInspectableValueCollection;

@interface HDCodableReferenceRange : PBCodable <NSCopying> {

	NSString* _identifier;
	HDCodableInspectableValueCollection* _valueRange;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValueRange; 
@property (nonatomic,retain) HDCodableInspectableValueCollection * valueRange;              //@synthesize valueRange=_valueRange - In the implementation block
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(HDCodableInspectableValueCollection *)valueRange;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setValueRange:(HDCodableInspectableValueCollection *)arg1 ;
-(BOOL)hasValueRange;
@end

