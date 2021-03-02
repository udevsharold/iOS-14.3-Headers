/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@interface HKSeriesSample : HKSample {

	AI _count;
	BOOL _frozen;

}

@property (assign,setter=_setFrozen:,getter=_isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(BOOL)_isFrozen;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setCount:(unsigned long long)arg1 ;
-(id)_valueDescription;
-(id)_validateSample;
-(void)_setFrozen:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldNotifyOnInsert;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
@end
