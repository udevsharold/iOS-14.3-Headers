/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXPETEventTracker2Protocol;
@class NSMutableArray;

@interface ATXAppClipSingleSuggestionLogger : NSObject {

	id<ATXPETEventTracker2Protocol> _tracker;
	NSMutableArray* _positiveEventBuffer;
	NSMutableArray* _negativeEventBuffer;

}

@property (nonatomic,retain) id<ATXPETEventTracker2Protocol> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,retain) NSMutableArray * positiveEventBuffer;                 //@synthesize positiveEventBuffer=_positiveEventBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * negativeEventBuffer;                 //@synthesize negativeEventBuffer=_negativeEventBuffer - In the implementation block
-(id)init;
-(id)initWithTracker:(id)arg1 ;
-(id<ATXPETEventTracker2Protocol>)tracker;
-(void)setTracker:(id<ATXPETEventTracker2Protocol>)arg1 ;
-(id)_appClipEngagementMetricWithBundleId:(id)arg1 urlHash:(id)arg2 interactionType:(int)arg3 consumerSubType:(id)arg4 ;
-(void)_logAppClipEngagementMetric:(id)arg1 ;
-(void)_flushEventBuffer:(id)arg1 numEventsToSample:(long long)arg2 isNegative:(BOOL)arg3 ;
-(void)handleSingleSuggestion:(id)arg1 ;
-(void)flushEventBuffers;
-(NSMutableArray *)positiveEventBuffer;
-(void)setPositiveEventBuffer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)negativeEventBuffer;
-(void)setNegativeEventBuffer:(NSMutableArray *)arg1 ;
@end

