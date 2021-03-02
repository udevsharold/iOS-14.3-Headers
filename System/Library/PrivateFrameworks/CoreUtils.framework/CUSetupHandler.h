/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUEnvironmentable.h>

@protocol OS_dispatch_queue;
@class NSObject, CUEnvironment;

@interface CUSetupHandler : NSObject <CUActivatable, CUEnvironmentable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	CUEnvironment* _environment;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) CUEnvironment * environment;                             //@synthesize environment=_environment - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidate;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(CUEnvironment *)environment;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setEnvironment:(CUEnvironment *)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(id)invalidationHandler;
@end
