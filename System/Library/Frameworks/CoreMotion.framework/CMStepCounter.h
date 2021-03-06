/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMStepCounterProxy;

@interface CMStepCounter : NSObject {

	CMStepCounterProxy* _stepcounterProxy;

}

@property (nonatomic,readonly) CMStepCounterProxy * stepcounterProxy;              //@synthesize stepcounterProxy=_stepcounterProxy - In the implementation block
@property (assign) BOOL enabled; 
+(BOOL)isStepCountingAvailable;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(CMStepCounterProxy *)stepcounterProxy;
-(void)stopStepCountingUpdates;
-(void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getTotalCountToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)deleteHistory;
-(void)setEnabled:(BOOL)arg1 ;
@end

