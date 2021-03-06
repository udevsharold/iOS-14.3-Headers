/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBSetNotificationsCriticalAlertRequest : PBRequest <NSCopying> {

	int _criticalAlertSetting;
	NSString* _sectionID;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasCriticalAlertSetting; 
@property (assign,nonatomic) int criticalAlertSetting;                  //@synthesize criticalAlertSetting=_criticalAlertSetting - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                      //@synthesize sectionID=_sectionID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)sectionID;
-(int)criticalAlertSetting;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setCriticalAlertSetting:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSectionID;
-(void)setHasCriticalAlertSetting:(BOOL)arg1 ;
-(BOOL)hasCriticalAlertSetting;
-(id)criticalAlertSettingAsString:(int)arg1 ;
-(int)StringAsCriticalAlertSetting:(id)arg1 ;
@end

