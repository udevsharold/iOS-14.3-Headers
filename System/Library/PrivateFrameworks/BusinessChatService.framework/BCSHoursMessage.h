/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BCSHoursMessage : PBCodable <NSCopying> {

	SCD_Struct_BC9* _days;
	NSMutableArray* _timeRanges;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges;                 //@synthesize timeRanges=_timeRanges - In the implementation block
+(Class)timeRangeType;
-(int*)days;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addDay:(int)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)addTimeRange:(id)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)daysCount;
-(void)clearDays;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeRangesCount;
-(void)clearTimeRanges;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)timeRanges;
@end

