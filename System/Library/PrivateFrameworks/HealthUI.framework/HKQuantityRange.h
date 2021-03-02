/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity;

@interface HKQuantityRange : NSObject {

	HKQuantity* _minimum;
	HKQuantity* _maximum;

}

@property (nonatomic,readonly) HKQuantity * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) HKQuantity * maximum;              //@synthesize maximum=_maximum - In the implementation block
-(HKQuantity *)maximum;
-(HKQuantity *)minimum;
-(id)init;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 ;
-(BOOL)containsQuantityInclusive:(id)arg1 ;
@end
