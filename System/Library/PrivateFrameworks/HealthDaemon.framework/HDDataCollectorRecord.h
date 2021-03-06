/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDataCollector;
@class HDDataCollectorState;

@interface HDDataCollectorRecord : NSObject {

	id<HDDataCollector> _collector;
	HDDataCollectorState* _state;

}

@property (assign,nonatomic,__weak) id<HDDataCollector> collector;              //@synthesize collector=_collector - In the implementation block
@property (nonatomic,retain) HDDataCollectorState * state;                      //@synthesize state=_state - In the implementation block
-(void)setCollector:(id<HDDataCollector>)arg1 ;
-(HDDataCollectorState *)state;
-(id<HDDataCollector>)collector;
-(id)description;
-(void)setState:(HDDataCollectorState *)arg1 ;
@end

