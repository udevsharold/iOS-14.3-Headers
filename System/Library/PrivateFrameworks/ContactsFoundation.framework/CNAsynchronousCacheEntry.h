/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider;
@class NSMutableArray;

@interface CNAsynchronousCacheEntry : NSObject {

	id _currentValue;
	double _timestampOfCurrentValue;
	id<CNSchedulerProvider> _schedulerProvider;
	NSMutableArray* _delegates;

}

@property (readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (retain) id currentValue;                                          //@synthesize currentValue=_currentValue - In the implementation block
@property (readonly) NSMutableArray * delegates;                             //@synthesize delegates=_delegates - In the implementation block
@property (readonly) double timestampOfCurrentValue;                         //@synthesize timestampOfCurrentValue=_timestampOfCurrentValue - In the implementation block
-(void)addDelegate:(id)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(id)currentValue;
-(NSMutableArray *)delegates;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)description;
-(void)removeDelegates:(id)arg1 ;
-(void)updateValue:(id)arg1 ;
-(double)timestampOfCurrentValue;
@end

