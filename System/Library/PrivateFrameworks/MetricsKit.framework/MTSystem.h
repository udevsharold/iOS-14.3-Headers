/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventFilter;
@class MTEnvironment, MTEventRecorder;

@interface MTSystem : MTObject {

	MTEnvironment* _environment;
	MTEventRecorder* _eventRecorder;
	id<MTEventFilter> _eventFilter;
	id<MTEventFilter> _treatmentFilter;

}

@property (nonatomic,retain) MTEnvironment * environment;                    //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) MTEventRecorder * eventRecorder;                //@synthesize eventRecorder=_eventRecorder - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> eventFilter;                  //@synthesize eventFilter=_eventFilter - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> treatmentFilter;              //@synthesize treatmentFilter=_treatmentFilter - In the implementation block
-(id<MTEventFilter>)eventFilter;
-(void)setEventFilter:(id<MTEventFilter>)arg1 ;
-(MTEnvironment *)environment;
-(void)setEnvironment:(MTEnvironment *)arg1 ;
-(MTEventRecorder *)eventRecorder;
-(id)initWithMetricsKit:(id)arg1 ;
-(id<MTEventFilter>)treatmentFilter;
-(void)setEventRecorder:(MTEventRecorder *)arg1 ;
-(void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
-(void)setTreatmentFilter:(id<MTEventFilter>)arg1 ;
@end
