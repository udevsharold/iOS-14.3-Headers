/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying> {

	NSMutableArray* _failures;
	NSMutableArray* _successes;

}

@property (nonatomic,retain) NSMutableArray * successes;              //@synthesize successes=_successes - In the implementation block
@property (nonatomic,retain) NSMutableArray * failures;               //@synthesize failures=_failures - In the implementation block
+(Class)failuresType;
+(Class)successesType;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(unsigned long long)failuresCount;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)failures;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)successes;
-(void)writeTo:(id)arg1 ;
@end
