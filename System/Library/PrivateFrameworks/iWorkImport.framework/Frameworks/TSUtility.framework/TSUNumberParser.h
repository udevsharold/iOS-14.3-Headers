/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUNumberParser : NSObject
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double*)arg3 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(TSUDecimal*)arg3 outValueType:(int*)arg4 outCurrencyCode:(id*)arg5 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(TSUDecimal*)arg3 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double*)arg3 outValueType:(int*)arg4 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double*)arg3 outValueType:(int*)arg4 outCurrencyCode:(id*)arg5 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(TSUDecimal*)arg3 outValueType:(int*)arg4 ;
@end

