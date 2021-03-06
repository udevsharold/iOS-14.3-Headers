/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice, PPEventStore;

@interface ATXExtraordinaryEventsDataSource : NSObject {

	ATXHeuristicDevice* _device;
	PPEventStore* _extraordinaryEventStore;

}
+(id)_endOfDayAfterDate:(id)arg1 numberOfDays:(long long)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)_fetchExtraordinaryEvents;
-(id)_ekEventForHighlight:(id)arg1 eventStore:(id)arg2 ;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

