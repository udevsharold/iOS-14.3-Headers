/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLMemoryAssetFlag, NSString, NSData;

@interface CPLMemoryAsset : PBCodable <NSCopying> {

	CPLMemoryAssetFlag* _assetFlag;
	NSString* _assetIdentifier;
	NSData* _assetMovieData;
	NSString* _masterFingerprint;

}

@property (nonatomic,readonly) BOOL hasAssetIdentifier; 
@property (nonatomic,retain) NSString * assetIdentifier;                  //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFlag; 
@property (nonatomic,retain) CPLMemoryAssetFlag * assetFlag;              //@synthesize assetFlag=_assetFlag - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetMovieData; 
@property (nonatomic,retain) NSData * assetMovieData;                     //@synthesize assetMovieData=_assetMovieData - In the implementation block
@property (nonatomic,readonly) BOOL hasMasterFingerprint; 
@property (nonatomic,retain) NSString * masterFingerprint;                //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAssetFlag:(CPLMemoryAssetFlag *)arg1 ;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setAssetMovieData:(NSData *)arg1 ;
-(NSData *)assetMovieData;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CPLMemoryAssetFlag *)assetFlag;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAssetIdentifier;
-(BOOL)hasAssetFlag;
-(BOOL)hasAssetMovieData;
-(BOOL)hasMasterFingerprint;
-(NSString *)masterFingerprint;
@end

