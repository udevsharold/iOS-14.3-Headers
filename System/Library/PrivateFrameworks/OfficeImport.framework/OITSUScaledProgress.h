/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class OITSUScaledProgressStorage, OITSUProgress, NSObject;

@interface OITSUScaledProgress : OITSUProgress {

	OITSUScaledProgressStorage* mStorage;
	OITSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) OITSUProgress * progress; 
@property (assign) double maxValue; 
-(double)value;
-(id)init;
-(void)dealloc;
-(void)setMaxValue:(double)arg1 ;
-(double)maxValue;
-(void)setProgress:(OITSUProgress *)arg1 ;
-(OITSUProgress *)progress;
-(BOOL)isIndeterminate;
-(void)removeProgressObserver:(id)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end

