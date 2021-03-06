/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, _ATXDuetHelper, NSString;

@interface ATXAppLaunchMicroLocation : NSObject {

	_PASLock* _lock;
	_ATXDuetHelper* _duetHelper;
	NSString* _path;

}
-(void)train;
-(double)popularityAtCurrentMicroLocationForActionKey:(id)arg1 ;
-(id)init;
-(id)initWithDuetHelper:(id)arg1 directory:(id)arg2 forTesting:(BOOL)arg3 ;
-(id)_getActionKeyCorrelationMatrix;
-(void)_receivedNotificationOfNewMicroLocation;
-(void)_subscribeToDKInsertionEvents;
-(double)popularityAtCurrentMicroLocationForApp:(id)arg1 ;
-(BOOL)loadCorrelationMatrices;
-(id)_getAppLaunchCorrelationMatrix;
-(void)_writeAppLaunchCorrelationMatrix:(id)arg1 actionKeyCorrelationMatrix:(id)arg2 ;
-(id)_getHistoricalData;
@end

