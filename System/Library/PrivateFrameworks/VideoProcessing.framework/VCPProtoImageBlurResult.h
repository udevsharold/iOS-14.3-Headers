/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _faceSharpness;
	float _sharpness;
	SCD_Struct_VC52 _has;

}

@property (assign,nonatomic) float sharpness;                    //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) BOOL hasFaceSharpness; 
@property (assign,nonatomic) float faceSharpness;                //@synthesize faceSharpness=_faceSharpness - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(void)setHasFaceSharpness:(BOOL)arg1 ;
-(BOOL)hasFaceSharpness;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(float)faceSharpness;
-(void)setFaceSharpness:(float)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(float)sharpness;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSharpness:(float)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
