/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable <NSCopying> {

	NSMutableArray* _fetchResults;

}

@property (nonatomic,retain) NSMutableArray * fetchResults;              //@synthesize fetchResults=_fetchResults - In the implementation block
+(Class)fetchResultsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFetchResults:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)fetchResults;
-(void)writeTo:(id)arg1 ;
-(void)addFetchResults:(id)arg1 ;
-(unsigned long long)fetchResultsCount;
-(void)clearFetchResults;
-(id)fetchResultsAtIndex:(unsigned long long)arg1 ;
@end

