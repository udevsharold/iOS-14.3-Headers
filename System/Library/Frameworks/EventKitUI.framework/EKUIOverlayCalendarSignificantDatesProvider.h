/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CalDateRange, NSDictionary, NSObject, NSDate;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {

	CalDateRange* _cachedDateRange;
	CalDateRange* _cachedCentralYear;
	NSDictionary* _cachedFirstsOfMonths;
	NSDictionary* _cachedFirstsOfYears;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentGeneration;
	NSDate* _currentRequest;
	BOOL _loadPending;
	/*^block*/id _significantDatesChangedHandler;

}

@property (nonatomic,copy) id significantDatesChangedHandler;              //@synthesize significantDatesChangedHandler=_significantDatesChangedHandler - In the implementation block
-(void)_load;
-(id)init;
-(void)_invalidateCaches;
-(void)setSignificantDatesChangedHandler:(id)arg1 ;
-(void)_requestDate:(id)arg1 ;
-(void)dealloc;
-(id)firstOfOverlayMonthsForCalendarMonth:(id)arg1 ;
-(id)firstOfOverlayYearsForCalendarMonth:(id)arg1 ;
-(id)significantDatesChangedHandler;
@end
