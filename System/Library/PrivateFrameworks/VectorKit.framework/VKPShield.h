/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VKPGenericShieldStyleInfo, NSString, NSMutableArray;

@interface VKPShield : PBCodable <NSCopying> {

	VKPGenericShieldStyleInfo* _genericShieldStyleInfo;
	NSString* _identifier;
	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variants;                                       //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericShieldStyleInfo; 
@property (nonatomic,retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;              //@synthesize genericShieldStyleInfo=_genericShieldStyleInfo - In the implementation block
-(NSMutableArray *)variants;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(void)setGenericShieldStyleInfo:(VKPGenericShieldStyleInfo *)arg1 ;
-(void)addVariants:(id)arg1 ;
-(unsigned long long)variantsCount;
-(void)clearVariants;
-(id)variantsAtIndex:(unsigned long long)arg1 ;
-(VKPGenericShieldStyleInfo *)genericShieldStyleInfo;
-(BOOL)hasGenericShieldStyleInfo;
-(void)writeTo:(id)arg1 ;
@end
