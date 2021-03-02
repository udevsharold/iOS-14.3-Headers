/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {

	unsigned long long _subfilterCount;
	unsigned long long _compoundPredicateType;
	NSArray* _subfilters;

}

@property (nonatomic,readonly) unsigned long long compoundPredicateType;              //@synthesize compoundPredicateType=_compoundPredicateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subfilters;                             //@synthesize subfilters=_subfilters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2 ;
+(id)orFilterWithSubfilters:(id)arg1 ;
+(id)andFilterWithSubfilters:(id)arg1 ;
+(id)notFilterWithSubfilter:(id)arg1 ;
-(NSArray *)subfilters;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 subfilters:(id)arg2 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)compoundPredicateType;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)acceptsActivitySummary:(id)arg1 ;
-(long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
