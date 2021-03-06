/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StudyLog/StudyLog-Structs.h>
#import <libobjc.A.dylib/SLGActivatableLogging.h>

@protocol SLGLogging;
@class NSString;

@interface SLGActivatableLogger : NSObject <SLGActivatableLogging> {

	id<SLGLogging> _logger;
	os_unfair_lock_s _lock;
	BOOL _active;
	/*^block*/id _activationHandler;
	/*^block*/id _deactivationHandler;

}

@property (nonatomic,copy) id activationHandler; 
@property (nonatomic,copy) id deactivationHandler; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(void)setActivationHandler:(id)arg1 ;
-(BOOL)isEnabled;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(id)initWithLogger:(id)arg1 ;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
-(BOOL)isActive;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)invalidate;
@end

