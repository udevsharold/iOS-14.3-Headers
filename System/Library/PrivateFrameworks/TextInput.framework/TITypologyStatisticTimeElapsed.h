/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic {

	TITypologyTimer* _timer;
	TITypologyTimer* _adjustedTimer;

}

@property (nonatomic,retain) TITypologyTimer * timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) TITypologyTimer * adjustedTimer;              //@synthesize adjustedTimer=_adjustedTimer - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double adjustedElapsedTime; 
-(double)adjustedElapsedTime;
-(void)setTimer:(TITypologyTimer *)arg1 ;
-(id)structuredReport;
-(double)elapsedTime;
-(id)aggregateReport;
-(id)init;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)setAdjustedTimer:(TITypologyTimer *)arg1 ;
-(TITypologyTimer *)adjustedTimer;
-(TITypologyTimer *)timer;
@end
