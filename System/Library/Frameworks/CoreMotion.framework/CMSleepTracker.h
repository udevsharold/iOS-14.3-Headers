/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject {

	CMSpringTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSpringTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(BOOL)isTracking;
-(id)init;
-(void)dealloc;
-(CMSpringTrackerInternal *)_internal;
-(void)startWithHandler:(/*^block*/id)arg1 ;
-(void)stopWithHandler:(/*^block*/id)arg1 ;
-(void)querySleepDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

