/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSDate;

@interface TRIPBTimestamp : TRIPBMessage

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeIntervalSince1970; 
@property (assign,nonatomic) long long seconds; 
@property (assign,nonatomic) int nanos; 
+(id)descriptor;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(NSDate *)date;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(double)timeIntervalSince1970;
@end

