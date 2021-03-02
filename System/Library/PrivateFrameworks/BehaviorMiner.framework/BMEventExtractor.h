/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject {

	BOOL _shouldStop;
	BMMiningTaskConfig* _bmMiningTaskConfig;

}

@property (assign) BOOL shouldStop;                                      //@synthesize shouldStop=_shouldStop - In the implementation block
@property (retain) BMMiningTaskConfig * bmMiningTaskConfig;              //@synthesize bmMiningTaskConfig=_bmMiningTaskConfig - In the implementation block
-(id)init;
-(void)terminateEarly;
-(void)setShouldStop:(BOOL)arg1 ;
-(BOOL)shouldStop;
-(BMMiningTaskConfig *)bmMiningTaskConfig;
-(id)initWithBMMiningTaskConfig:(id)arg1 ;
-(id)extractEventsFilteredByTypes:(id)arg1 taskSpecificEventProviders:(id)arg2 error:(id*)arg3 ;
-(void)setBmMiningTaskConfig:(BMMiningTaskConfig *)arg1 ;
@end
