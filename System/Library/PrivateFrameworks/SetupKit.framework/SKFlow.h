/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CULabelable.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface SKFlow : NSObject <CUActivatable, CULabelable> {

	BOOL _activateCalled;
	NSMutableArray* _activatedSteps;
	unsigned long long _currentStepIndex;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _runState;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _buildStepsHandler;

}

@property (nonatomic,copy) id buildStepsHandler;                                      //@synthesize buildStepsHandler=_buildStepsHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)description;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(NSString *)label;
-(void)invalidate;
-(id)invalidationHandler;
-(void)activateStep:(id)arg1 ;
-(void)_runSteps;
-(id)buildStepsHandler;
-(void)setBuildStepsHandler:(id)arg1 ;
@end
