/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DSharegroupDelayCheckerParent.h>
#import <TSCharts/TSUiOSMemoryWarningFlushable.h>

@class NSMutableArray, NSCondition, TSCH3DSharegroupDelayChecker, NSString;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable> {

	long long mSize;
	long long mNumAlive;
	long long mDisableLevel;
	NSMutableArray* mSharegroups;
	NSCondition* mCondition;
	BOOL mBusy;
	TSCH3DSharegroupDelayChecker* mChecker;
	unsigned long long mApplicationState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(id)_singletonAlloc;
-(void)enable;
-(void)applicationWillEnterForeground;
-(void)applicationWillResignActive;
-(void)applicationDidBecomeActive;
-(id)init;
-(void)disable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)willCheckCondition;
-(void)scheduleCheckCondition;
-(void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)arg1 ;
-(void)p_removeSharegroupsFromFlushingManager;
-(void)p_lockAndPerformBlock:(/*^block*/id)arg1 ;
-(BOOL)p_applicationStateAllowsObjectFlushing;
-(void)p_flushSharegroupsIfPossible;
-(BOOL)p_applicationStateAllowsOpenGLObjectCreation;
-(id)p_obtainSharegroupFromSharegroups;
-(BOOL)p_applicationStateAllowsAnimationRendering;
-(BOOL)p_canUseOpenGLWithCheck:(/*^block*/id)arg1 ;
-(BOOL)p_applicationStateAllowsOpenGLRendering;
-(id)obtainSharegroup;
-(void)releaseSharegroup:(id)arg1 ;
-(BOOL)canRenderForAnimations;
-(BOOL)canCreateOpenGLObjects;
-(BOOL)canRenderUsingOpenGL;
-(BOOL)canFlushObjects;
-(void)waitForBackgroundThreadsWithTimeout:(double)arg1 ;
@end
