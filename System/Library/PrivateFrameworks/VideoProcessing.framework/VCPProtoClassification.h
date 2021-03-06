/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoClassification : PBCodable <NSCopying> {

	float _confidence;
	unsigned _identifier;

}

@property (assign,nonatomic) unsigned identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float confidence;                 //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)identifier;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setConfidence:(float)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

