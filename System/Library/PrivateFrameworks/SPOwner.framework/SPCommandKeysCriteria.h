/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval, NSArray;

@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _sequence;
	NSDateInterval* _dateInterval;
	NSArray* _indices;
	NSNumber* _index;
	NSNumber* _hint;

}

@property (nonatomic,copy) NSNumber * sequence;                        //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy) NSArray * indices;                          //@synthesize indices=_indices - In the implementation block
@property (nonatomic,copy) NSNumber * index;                           //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSNumber * hint;                            //@synthesize hint=_hint - In the implementation block
+(id)matchSequence:(unsigned char)arg1 index:(unsigned)arg2 hint:(unsigned char)arg3 ;
+(id)matchPrimaryIndices:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)driftModeledCriteria;
+(id)matchSecondaryIndex:(unsigned long long)arg1 hint:(unsigned char)arg2 ;
+(id)matchDateInterval:(id)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSArray *)indices;
-(NSNumber *)hint;
-(void)setIndex:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSequence:(NSNumber *)arg1 ;
-(NSDateInterval *)dateInterval;
-(NSNumber *)index;
-(NSNumber *)sequence;
-(id)initWithCoder:(id)arg1 ;
-(void)setHint:(NSNumber *)arg1 ;
-(id)initWithDateInterval:(id)arg1 sequence:(id)arg2 indices:(id)arg3 index:(id)arg4 hint:(id)arg5 ;
-(void)setIndices:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

