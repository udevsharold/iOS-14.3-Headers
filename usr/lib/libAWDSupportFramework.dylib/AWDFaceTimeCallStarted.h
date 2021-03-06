/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isCallUpgrade;
	unsigned _isToEmail;
	unsigned _isToPhoneNumber;
	unsigned _isVideo;
	unsigned _onLockScreen;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsToPhoneNumber; 
@property (assign,nonatomic) unsigned isToPhoneNumber;                  //@synthesize isToPhoneNumber=_isToPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsToEmail; 
@property (assign,nonatomic) unsigned isToEmail;                        //@synthesize isToEmail=_isToEmail - In the implementation block
@property (assign,nonatomic) BOOL hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                    //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                          //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                     //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)setGuid:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasGuid;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)isVideo;
-(id)description;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(NSString *)guid;
-(void)writeTo:(id)arg1 ;
-(unsigned)onLockScreen;
-(void)setIsToPhoneNumber:(unsigned)arg1 ;
-(void)setIsToEmail:(unsigned)arg1 ;
-(unsigned)isToPhoneNumber;
-(unsigned)isToEmail;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(unsigned)isCallUpgrade;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(void)setHasIsCallUpgrade:(BOOL)arg1 ;
-(BOOL)hasIsCallUpgrade;
-(void)setHasIsToPhoneNumber:(BOOL)arg1 ;
-(BOOL)hasIsToPhoneNumber;
-(void)setHasIsToEmail:(BOOL)arg1 ;
-(BOOL)hasIsToEmail;
@end

