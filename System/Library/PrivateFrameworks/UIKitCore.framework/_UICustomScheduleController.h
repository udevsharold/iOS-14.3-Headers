/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable, NSTimer;

@interface _UICustomScheduleController : NSObject {

	NSMapTable* _observers;
	BOOL _inScheduleTime;
	NSTimer* _nextEventTimer;
	SCD_Struct_UI10 _schedule;

}

@property (assign,nonatomic) SCD_Struct_UI10 schedule;                                   //@synthesize schedule=_schedule - In the implementation block
@property (getter=isInScheduleTime,nonatomic,readonly) BOOL inScheduleTime; 
-(void)setSchedule:(SCD_Struct_UI10)arg1 ;
-(SCD_Struct_UI10)schedule;
-(id)init;
-(void)_updateStatus:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)_notifyChange;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(id)nextTransition:(BOOL)arg1 ;
-(void)_significantTimeChange;
-(void)_updateWithDate:(id)arg1 ;
-(void)_updateTimeMonitoring;
-(BOOL)isInScheduleTime;
-(void)_updateTimeMonitoring:(BOOL)arg1 ;
-(void)forceUpdate;
@end
