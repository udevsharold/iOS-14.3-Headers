/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying> {

	int _exposureIneligibleLocationType;
	NSString* _exposureIneligibleLocationTypeId;
	int _exposureIneligibleReason;
	int _feedType;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasExposureIneligibleLocationType; 
@property (assign,nonatomic) int exposureIneligibleLocationType;                       //@synthesize exposureIneligibleLocationType=_exposureIneligibleLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                             //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasExposureIneligibleLocationTypeId; 
@property (nonatomic,retain) NSString * exposureIneligibleLocationTypeId;              //@synthesize exposureIneligibleLocationTypeId=_exposureIneligibleLocationTypeId - In the implementation block
@property (assign,nonatomic) BOOL hasExposureIneligibleReason; 
@property (assign,nonatomic) int exposureIneligibleReason;                             //@synthesize exposureIneligibleReason=_exposureIneligibleReason - In the implementation block
-(int)feedType;
-(BOOL)hasFeedType;
-(void)setHasFeedType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(int)exposureIneligibleReason;
-(void)setExposureIneligibleLocationTypeId:(NSString *)arg1 ;
-(int)exposureIneligibleLocationType;
-(void)setExposureIneligibleLocationType:(int)arg1 ;
-(void)setHasExposureIneligibleLocationType:(BOOL)arg1 ;
-(BOOL)hasExposureIneligibleLocationType;
-(BOOL)hasExposureIneligibleLocationTypeId;
-(void)setExposureIneligibleReason:(int)arg1 ;
-(void)setHasExposureIneligibleReason:(BOOL)arg1 ;
-(BOOL)hasExposureIneligibleReason;
-(NSString *)exposureIneligibleLocationTypeId;
-(id)description;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

