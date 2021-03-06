/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBActionUUIDMetadata : PBCodable <NSCopying> {

	long long _actionUUID;
	long long _slotHash;
	ATXAnchorModelPBLaunchHistoryMetadata* _actionUUIDLaunchHistory;
	unsigned _paramCount;
	SCD_Struct_AT7 _has;

}

@property (assign,nonatomic) BOOL hasActionUUID; 
@property (assign,nonatomic) long long actionUUID;                                                         //@synthesize actionUUID=_actionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSlotHash; 
@property (assign,nonatomic) long long slotHash;                                                           //@synthesize slotHash=_slotHash - In the implementation block
@property (assign,nonatomic) BOOL hasParamCount; 
@property (assign,nonatomic) unsigned paramCount;                                                          //@synthesize paramCount=_paramCount - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUUIDLaunchHistory; 
@property (nonatomic,retain) ATXAnchorModelPBLaunchHistoryMetadata * actionUUIDLaunchHistory;              //@synthesize actionUUIDLaunchHistory=_actionUUIDLaunchHistory - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(long long)slotHash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)paramCount;
-(long long)actionUUID;
-(void)setActionUUID:(long long)arg1 ;
-(BOOL)hasActionUUID;
-(void)writeTo:(id)arg1 ;
-(void)setSlotHash:(long long)arg1 ;
-(void)setParamCount:(unsigned)arg1 ;
-(void)setActionUUIDLaunchHistory:(ATXAnchorModelPBLaunchHistoryMetadata *)arg1 ;
-(ATXAnchorModelPBLaunchHistoryMetadata *)actionUUIDLaunchHistory;
-(void)setHasActionUUID:(BOOL)arg1 ;
-(void)setHasSlotHash:(BOOL)arg1 ;
-(BOOL)hasSlotHash;
-(void)setHasParamCount:(BOOL)arg1 ;
-(BOOL)hasParamCount;
-(BOOL)hasActionUUIDLaunchHistory;
@end

