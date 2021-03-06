/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_TaskMetrics, NSArray, NSDateInterval;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding> {

	__CFN_TaskMetrics* __metrics;

}

@property (copy,readonly) NSArray * transactionMetrics; 
@property (copy,readonly) NSDateInterval * taskInterval; 
@property (readonly) unsigned long long redirectCount; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(unsigned long long)redirectCount;
-(id)init;
-(NSDateInterval *)taskInterval;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)transactionMetrics;
-(void)encodeWithCoder:(id)arg1 ;
@end

