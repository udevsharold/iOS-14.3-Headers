/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface ATXFeedbackStateBuilder : NSObject {

	NSMutableData* _data;
	int _predictionCount;
	BOOL _finished;

}
-(id)finish;
-(id)init;
-(void)recordPrediction:(id)arg1 actionHash:(unsigned long long)arg2 totalScore:(float)arg3 scoreInputs:(const float*)arg4 isMediumConfidenceForBlendingLayer:(BOOL)arg5 isHighConfidenceForBlendingLayer:(BOOL)arg6 ;
-(id)initWithABGroup:(id)arg1 assetVersion:(long long)arg2 ;
@end
