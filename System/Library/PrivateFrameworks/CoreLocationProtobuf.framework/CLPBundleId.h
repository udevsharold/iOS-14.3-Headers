/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPBundleId : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _fullName;
	NSString* _shortKey;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasShortKey; 
@property (nonatomic,retain) NSString * shortKey;              //@synthesize shortKey=_shortKey - In the implementation block
@property (nonatomic,readonly) BOOL hasFullName; 
@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
-(NSString *)fullName;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasFullName;
-(BOOL)hasShortKey;
-(unsigned long long)hash;
-(void)setFullName:(NSString *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)shortKey;
-(BOOL)hasTimestamp;
-(void)setShortKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
