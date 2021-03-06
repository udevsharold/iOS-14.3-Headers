/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {

	BOOL _ascending;
	BOOL _labelVisit;
	NSNumber* _confidence;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;

}

@property (nonatomic,readonly) BOOL ascending;                         //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL labelVisit;                        //@synthesize labelVisit=_labelVisit - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                       //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)confidence;
-(BOOL)ascending;
-(id)init;
-(BOOL)isEqualToFetchOptions:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(NSNumber *)limit;
-(BOOL)labelVisit;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(BOOL)arg4 limit:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

