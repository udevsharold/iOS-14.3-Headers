/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSMonotonicReferenceTime : NSObject {

	double _startTimeStamp;

}

@property (nonatomic,readonly) double timeIntervalSinceNow; 
@property (nonatomic,readonly) double timeIntervalToNow; 
+(id)distantFuture;
+(id)referenceTimeWithTimeIntervalSinceNow:(double)arg1 ;
+(id)now;
+(id)distantPast;
+(id)referenceTimeForDate:(id)arg1 ;
-(double)timeIntervalSinceReferenceTime:(id)arg1 ;
-(double)timeIntervalSinceNow;
-(id)date;
-(double)timeIntervalToNow;
@end
