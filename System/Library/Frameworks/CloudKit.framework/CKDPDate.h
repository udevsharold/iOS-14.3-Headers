/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPDate : PBCodable <NSCopying> {

	double _time;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time;               //@synthesize time=_time - In the implementation block
-(void)setTime:(double)arg1 ;
-(double)time;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTime;
-(void)setHasTime:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

