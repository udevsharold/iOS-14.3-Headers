/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying> {

	NSMutableArray* _assets;
	CKDPRecordFieldIdentifier* _field;

}

@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                        //@synthesize assets=_assets - In the implementation block
+(Class)assetsType;
-(CKDPRecordFieldIdentifier *)field;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)assetsCount;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)assets;
-(void)addAssets:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasField;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
@end
