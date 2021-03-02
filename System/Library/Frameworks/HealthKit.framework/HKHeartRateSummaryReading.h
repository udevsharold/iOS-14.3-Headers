/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKQuantity;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding> {

	NSDate* _date;
	HKQuantity* _quantity;
	long long _context;

}

@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) HKQuantity * quantity;              //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) long long context;                  //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKQuantity *)quantity;
-(NSDate *)date;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3 ;
-(id)initWithDate:(id)arg1 quantity:(id)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)context;
-(void)encodeWithCoder:(id)arg1 ;
@end
