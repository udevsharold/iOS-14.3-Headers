/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying> {

	SCD_Struct_AS3* _styles;

}

@property (nonatomic,readonly) unsigned long long stylesCount; 
@property (nonatomic,readonly) int* styles; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(int*)styles;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)stylesCount;
-(void)clearStyles;
-(int)stylesAtIndex:(unsigned long long)arg1 ;
-(void)addStyles:(int)arg1 ;
-(void)setStyles:(int*)arg1 count:(unsigned long long)arg2 ;
@end

