/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKDecimalPrecisionRule.h>

@class NSString;

@interface HKTieredDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)percentageFormatter;
-(id)numberFormatter;
-(long long)maximumDecimalPrecision;
-(long long)decimalPrecisionForValue:(double)arg1 ;
-(long long)minimumDecimalPrecision;
@end

