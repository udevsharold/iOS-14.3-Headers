/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKPeriodType.h>

@class NSDate;

@interface _DKPeriod : NSObject <DKPeriodType> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
-(NSDate *)endDate;
-(BOOL)contains:(id)arg1 ;
-(id)description;
-(NSDate *)startDate;
-(double)duration;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
@end
