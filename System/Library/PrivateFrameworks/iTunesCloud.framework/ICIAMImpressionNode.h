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

@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying> {

	NSString* _impressionType;
	NSString* _recoAlgoId;

}

@property (nonatomic,readonly) BOOL hasImpressionType; 
@property (nonatomic,retain) NSString * impressionType;              //@synthesize impressionType=_impressionType - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoAlgoId; 
@property (nonatomic,retain) NSString * recoAlgoId;                  //@synthesize recoAlgoId=_recoAlgoId - In the implementation block
-(NSString *)recoAlgoId;
-(void)setImpressionType:(NSString *)arg1 ;
-(void)setRecoAlgoId:(NSString *)arg1 ;
-(BOOL)hasImpressionType;
-(BOOL)hasRecoAlgoId;
-(NSString *)impressionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end
