/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface VCIDRSchedulerItem : NSObject {

	unsigned _framePosition;
	unsigned _budgetInCaptureFrames;
	unsigned _weightFactor;
	NSMutableArray* _streams;

}

@property (assign,nonatomic) unsigned framePosition;                      //@synthesize framePosition=_framePosition - In the implementation block
@property (assign,nonatomic) unsigned weightFactor;                       //@synthesize weightFactor=_weightFactor - In the implementation block
@property (assign,nonatomic) unsigned budgetInCaptureFrames;              //@synthesize budgetInCaptureFrames=_budgetInCaptureFrames - In the implementation block
@property (nonatomic,readonly) NSArray * streams;                         //@synthesize streams=_streams - In the implementation block
-(id)init;
-(unsigned)framePosition;
-(void)setFramePosition:(unsigned)arg1 ;
-(void)dealloc;
-(NSArray *)streams;
-(id)description;
-(unsigned)weightFactor;
-(unsigned)budgetInCaptureFrames;
-(void)addStream:(id)arg1 ;
-(long long)compareBudget:(id)arg1 ;
-(void)setBudgetInCaptureFrames:(unsigned)arg1 ;
-(void)setWeightFactor:(unsigned)arg1 ;
@end

