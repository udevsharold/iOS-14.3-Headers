/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {

	unsigned _badgeCount;
	BOOL _forDevice;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) unsigned badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL hasForDevice; 
@property (assign,nonatomic) BOOL forDevice;                   //@synthesize forDevice=_forDevice - In the implementation block
+(id)options;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)badgeCount;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)forDevice;
-(void)writeTo:(id)arg1 ;
-(void)setBadgeCount:(unsigned)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(void)setForDevice:(BOOL)arg1 ;
-(void)setHasForDevice:(BOOL)arg1 ;
-(BOOL)hasForDevice;
@end
