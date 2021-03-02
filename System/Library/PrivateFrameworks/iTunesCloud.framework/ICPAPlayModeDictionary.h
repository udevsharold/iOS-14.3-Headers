/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {

	int _autoPlayMode;
	int _repeatPlayMode;
	int _shufflePlayMode;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasRepeatPlayMode; 
@property (assign,nonatomic) int repeatPlayMode;                   //@synthesize repeatPlayMode=_repeatPlayMode - In the implementation block
@property (assign,nonatomic) BOOL hasShufflePlayMode; 
@property (assign,nonatomic) int shufflePlayMode;                  //@synthesize shufflePlayMode=_shufflePlayMode - In the implementation block
@property (assign,nonatomic) BOOL hasAutoPlayMode; 
@property (assign,nonatomic) int autoPlayMode;                     //@synthesize autoPlayMode=_autoPlayMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)repeatPlayMode;
-(int)shufflePlayMode;
-(int)autoPlayMode;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRepeatPlayMode:(int)arg1 ;
-(void)setHasRepeatPlayMode:(BOOL)arg1 ;
-(BOOL)hasRepeatPlayMode;
-(id)repeatPlayModeAsString:(int)arg1 ;
-(int)StringAsRepeatPlayMode:(id)arg1 ;
-(void)setShufflePlayMode:(int)arg1 ;
-(void)setHasShufflePlayMode:(BOOL)arg1 ;
-(BOOL)hasShufflePlayMode;
-(id)shufflePlayModeAsString:(int)arg1 ;
-(int)StringAsShufflePlayMode:(id)arg1 ;
-(void)setAutoPlayMode:(int)arg1 ;
-(void)setHasAutoPlayMode:(BOOL)arg1 ;
-(BOOL)hasAutoPlayMode;
-(id)autoPlayModeAsString:(int)arg1 ;
-(int)StringAsAutoPlayMode:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
