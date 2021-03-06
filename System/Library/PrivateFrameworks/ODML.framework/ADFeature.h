/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ODML/ODML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADFeature : PBCodable <NSCopying> {

	SCD_Struct_AD1* _doubleValues;
	NSString* _name;
	NSMutableArray* _stringValues;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long doubleValuesCount; 
@property (nonatomic,readonly) double* doubleValues; 
@property (nonatomic,retain) NSMutableArray * stringValues;                       //@synthesize stringValues=_stringValues - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
+(Class)stringValueType;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasVersion;
-(id)description;
-(BOOL)hasName;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)stringValues;
-(NSString *)version;
-(NSString *)name;
-(void)setVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)doubleValuesCount;
-(double)doubleValueAtIndex:(unsigned long long)arg1 ;
-(void)addStringValue:(id)arg1 ;
-(void)clearDoubleValues;
-(void)addDoubleValue:(double)arg1 ;
-(unsigned long long)stringValuesCount;
-(void)clearStringValues;
-(id)stringValueAtIndex:(unsigned long long)arg1 ;
-(double*)doubleValues;
-(void)setDoubleValues:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)setStringValues:(NSMutableArray *)arg1 ;
-(id)getArrayForFeature;
@end

