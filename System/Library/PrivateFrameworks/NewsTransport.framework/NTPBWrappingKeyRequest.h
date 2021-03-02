/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying> {

	NSMutableArray* _wrappingKeyIds;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyIds;              //@synthesize wrappingKeyIds=_wrappingKeyIds - In the implementation block
+(Class)wrappingKeyIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)addWrappingKeyIds:(id)arg1 ;
-(void)clearWrappingKeyIds;
-(unsigned long long)wrappingKeyIdsCount;
-(id)wrappingKeyIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wrappingKeyIds;
-(id)description;
-(void)setWrappingKeyIds:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end
