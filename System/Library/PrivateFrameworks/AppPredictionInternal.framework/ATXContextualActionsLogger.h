/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXPETEventTracker2Protocol;
@class BPSPublisher;

@interface ATXContextualActionsLogger : NSObject {

	id<ATXPETEventTracker2Protocol> _tracker;
	BPSPublisher* _publisher;

}

@property (nonatomic,retain) id<ATXPETEventTracker2Protocol> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,retain) BPSPublisher * publisher;                             //@synthesize publisher=_publisher - In the implementation block
-(BPSPublisher *)publisher;
-(id)init;
-(id<ATXPETEventTracker2Protocol>)tracker;
-(void)setPublisher:(BPSPublisher *)arg1 ;
-(void)setTracker:(id<ATXPETEventTracker2Protocol>)arg1 ;
-(id)initWithDefaultTrackerAndPublisher;
-(void)logDailyContextualActions;
-(id)initWithTracker:(id)arg1 andPublisher:(id)arg2 ;
-(id)populateContextualActionEventFromBiomeEvent:(id)arg1 withTimeStamp:(double)arg2 ;
-(void)sendEvent:(id)arg1 usingPetTracker:(id)arg2 ;
@end

