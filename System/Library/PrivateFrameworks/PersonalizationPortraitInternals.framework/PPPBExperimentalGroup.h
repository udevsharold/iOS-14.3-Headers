/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBExperimentalGroup : PBCodable <NSCopying> {

	NSString* _abGroupIdentifier;
	NSString* _experimentId;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                   //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroupIdentifier; 
@property (nonatomic,retain) NSString * abGroupIdentifier;              //@synthesize abGroupIdentifier=_abGroupIdentifier - In the implementation block
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)abGroupIdentifier;
-(id)description;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAbGroupIdentifier;
-(void)setAbGroupIdentifier:(NSString *)arg1 ;
@end

