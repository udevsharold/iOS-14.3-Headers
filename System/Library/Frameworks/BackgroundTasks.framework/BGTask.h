/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BackgroundTasks/BackgroundTasks-Structs.h>
@class NSString, _DASActivity, NSObject;

@interface BGTask : NSObject {

	BOOL __completed;
	os_unfair_lock_s __lock;
	NSString* _identifier;
	/*^block*/id _expirationHandler;
	_DASActivity* __activity;
	NSObject*<OS_dispatch_queue> __handlerQueue;
	/*^block*/id __completionHandler;

}

@property (setter=_setActivity:,nonatomic,retain) _DASActivity * _activity;                                    //@synthesize _activity=__activity - In the implementation block
@property (assign,setter=_setCompleted:,nonatomic) BOOL _completed;                                            //@synthesize _completed=__completed - In the implementation block
@property (assign,setter=_setLock:,nonatomic) os_unfair_lock_s _lock;                                          //@synthesize _lock=__lock - In the implementation block
@property (setter=_setHandlerQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _handlerQueue;              //@synthesize _handlerQueue=__handlerQueue - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (copy,readonly) NSString * identifier;                                                               //@synthesize identifier=_identifier - In the implementation block
@property (copy) id expirationHandler;                                                                         //@synthesize expirationHandler=_expirationHandler - In the implementation block
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_completed;
-(void)_setLock:(os_unfair_lock_s)arg1 ;
-(_DASActivity *)_activity;
-(void)dealloc;
-(id)_completionHandler;
-(NSObject*<OS_dispatch_queue>)_handlerQueue;
-(NSString *)identifier;
-(void)_setActivity:(id)arg1 ;
-(os_unfair_lock_s)_lock;
-(void)_setCompleted:(BOOL)arg1 ;
-(void)setExpirationHandler:(id)arg1 ;
-(id)expirationHandler;
-(void)_setHandlerQueue:(id)arg1 ;
-(void)_setTaskCompletedWithSuccess:(BOOL)arg1 actionsIfNotAlreadyCompleted:(/*^block*/id)arg2 ;
-(/*^block*/id)_unsafe_setTaskCompletedWithSuccess:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)setTaskCompletedWithSuccess:(BOOL)arg1 ;
-(id)_initWithIdentifier:(id)arg1 activity:(id)arg2 ;
-(void)_callExpirationHandler;
@end

