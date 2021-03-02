/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol NAScheduler, OS_dispatch_queue;
@class NSObject, MTObserverStore, NSString;

@interface MTTimeListener : NSObject <MTAgentNotificationListener> {

	id<NAScheduler> _serializer;
	NSObject*<OS_dispatch_queue> _queue;
	MTObserverStore* _observers;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                     //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerObserver:(id)arg1 ;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(id)init;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTObserverStore *)observers;
-(id<NAScheduler>)serializer;
-(double)assertionTimeOutForNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
@end
