/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSSet, HKQueryAnchor;

@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeChangeDetails;
	NSSet* _sampleTypes;
	HKQueryAnchor* _anchor;
	long long _changeDetailsQueryStrategy;
	long long _anchorStrategyChangeCountLimit;

}

@property (nonatomic,copy) NSSet * sampleTypes;                                     //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy) HKQueryAnchor * anchor;                                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL includeChangeDetails;                             //@synthesize includeChangeDetails=_includeChangeDetails - In the implementation block
@property (assign,nonatomic) long long changeDetailsQueryStrategy;                  //@synthesize changeDetailsQueryStrategy=_changeDetailsQueryStrategy - In the implementation block
@property (assign,nonatomic) long long anchorStrategyChangeCountLimit;              //@synthesize anchorStrategyChangeCountLimit=_anchorStrategyChangeCountLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKQueryAnchor *)anchor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(NSSet *)sampleTypes;
-(void)setSampleTypes:(NSSet *)arg1 ;
-(void)setAnchorStrategyChangeCountLimit:(long long)arg1 ;
-(void)setChangeDetailsQueryStrategy:(long long)arg1 ;
-(void)setIncludeChangeDetails:(BOOL)arg1 ;
-(BOOL)includeChangeDetails;
-(long long)changeDetailsQueryStrategy;
-(long long)anchorStrategyChangeCountLimit;
-(void)encodeWithCoder:(id)arg1 ;
@end

