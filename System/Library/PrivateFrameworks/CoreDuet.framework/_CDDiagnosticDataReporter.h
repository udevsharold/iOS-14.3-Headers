/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDDiagnosticDataReporter : NSObject
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearDistributionKey:(id)arg1 ;
+(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)clearScalarKey:(id)arg1 ;
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 limitingSigDigs:(unsigned long long)arg3 ;
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
@end

