/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CPLSuggestionAssetFlag, NSString;

@interface CPLSuggestionAsset : PBCodable <NSCopying> {

	NSData* _actionData;
	CPLSuggestionAssetFlag* _assetFlag;
	NSString* _assetIdentifier;
	NSString* _masterFingerprint;

}

@property (nonatomic,readonly) BOOL hasAssetIdentifier; 
@property (nonatomic,retain) NSString * assetIdentifier;                      //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFlag; 
@property (nonatomic,retain) CPLSuggestionAssetFlag * assetFlag;              //@synthesize assetFlag=_assetFlag - In the implementation block
@property (nonatomic,readonly) BOOL hasActionData; 
@property (nonatomic,retain) NSData * actionData;                             //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,readonly) BOOL hasMasterFingerprint; 
@property (nonatomic,retain) NSString * masterFingerprint;                    //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
-(void)setActionData:(NSData *)arg1 ;
-(NSData *)actionData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAssetFlag:(CPLSuggestionAssetFlag *)arg1 ;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CPLSuggestionAssetFlag *)assetFlag;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAssetIdentifier;
-(BOOL)hasAssetFlag;
-(BOOL)hasMasterFingerprint;
-(NSString *)masterFingerprint;
-(BOOL)hasActionData;
@end

