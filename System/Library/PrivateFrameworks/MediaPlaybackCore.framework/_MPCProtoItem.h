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

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying> {

	_MPCProtoItemIdentifierSet* _identifierSet;
	int _mediaType;
	BOOL _excludeFromShuffle;
	SCD_Struct_MP24 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoItemIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeFromShuffle; 
@property (assign,nonatomic) BOOL excludeFromShuffle;                                 //@synthesize excludeFromShuffle=_excludeFromShuffle - In the implementation block
-(void)setMediaType:(int)arg1 ;
-(int)mediaType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setExcludeFromShuffle:(BOOL)arg1 ;
-(void)setHasExcludeFromShuffle:(BOOL)arg1 ;
-(BOOL)hasExcludeFromShuffle;
-(BOOL)excludeFromShuffle;
-(_MPCProtoItemIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoItemIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
@end
