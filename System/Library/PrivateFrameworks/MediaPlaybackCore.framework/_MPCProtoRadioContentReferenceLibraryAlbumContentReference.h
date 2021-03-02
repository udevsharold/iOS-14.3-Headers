/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying> {

	long long _representativeItemCloudID;
	long long _storeAdamID;
	NSString* _albumName;
	SCD_Struct_MP24 _has;

}

@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL hasRepresentativeItemCloudID; 
@property (assign,nonatomic) long long representativeItemCloudID;              //@synthesize representativeItemCloudID=_representativeItemCloudID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAlbumName;
-(unsigned long long)hash;
-(id)description;
-(void)setStoreAdamID:(long long)arg1 ;
-(long long)storeAdamID;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setRepresentativeItemCloudID:(long long)arg1 ;
-(void)setHasRepresentativeItemCloudID:(BOOL)arg1 ;
-(BOOL)hasRepresentativeItemCloudID;
-(long long)representativeItemCloudID;
@end
