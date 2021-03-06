/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(void)startWorkout:(id)arg1 ;
-(void)setSuggestedStopTimeout:(double)arg1 ;
-(void)stopWorkout:(id)arg1 ;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)userDismissedWorkoutAlert;
-(void)triggerWorkoutLocationUpdateForTesting:(long long)arg1 ;
-(CMWorkoutManagerInternal *)_internal;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(id<CMWorkoutManagerDelegate>)delegate;
@end

