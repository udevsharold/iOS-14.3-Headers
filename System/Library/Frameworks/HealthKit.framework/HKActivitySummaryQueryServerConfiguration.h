/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _shouldIncludeActivitySummaryPrivateProperties;
	BOOL _shouldIncludeActivitySummaryStatistics;
	BOOL _orderByDateAscending;
	unsigned long long _limit;

}

@property (assign,nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;              //@synthesize shouldIncludeActivitySummaryPrivateProperties=_shouldIncludeActivitySummaryPrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeActivitySummaryStatistics;                     //@synthesize shouldIncludeActivitySummaryStatistics=_shouldIncludeActivitySummaryStatistics - In the implementation block
@property (assign,nonatomic) BOOL orderByDateAscending;                                       //@synthesize orderByDateAscending=_orderByDateAscending - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                        //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)limit;
-(id)initWithCoder:(id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldIncludeActivitySummaryPrivateProperties;
-(BOOL)orderByDateAscending;
-(void)setOrderByDateAscending:(BOOL)arg1 ;
-(void)setShouldIncludeActivitySummaryPrivateProperties:(BOOL)arg1 ;
-(BOOL)shouldIncludeActivitySummaryStatistics;
-(void)setShouldIncludeActivitySummaryStatistics:(BOOL)arg1 ;
@end
