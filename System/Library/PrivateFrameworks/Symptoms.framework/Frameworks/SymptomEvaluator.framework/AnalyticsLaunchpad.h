/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AnalyticsWorkspaceHealthDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AWDAgent, NSMutableDictionary, NSString;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_queue> launch_queue;
	NSObject*<OS_dispatch_queue> flows_queue;
	NSObject*<OS_dispatch_queue> nets_queue;
	NSObject*<OS_dispatch_queue> nois_queue;
	NSObject*<OS_dispatch_queue> service_queue;
	AWDAgent* awd;
	NSMutableDictionary* _launchParams;

}

@property (nonatomic,retain) NSMutableDictionary * launchParams;              //@synthesize launchParams=_launchParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)leaveBreadcrumbForDestroyPersistentStore;
+(void)leaveBreadcrumbForInitialWorkspaceSave;
+(void)clearInitialWorkspaceSaveBreadcrumb;
+(void)appendLaunchTime;
+(unsigned long long)integrityCheckBreadcrumbCount;
+(id)sharedInstance;
+(BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)arg1 ;
+(void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)arg1 ;
+(BOOL)launchHealthCheck:(id)arg1 ;
+(id)symptomEvaluatorDatabaseContainerPath;
+(BOOL)foundBreadcrumb:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(void)clearDestroyPersistentStoreBreadcrumb;
+(void)leaveBreadcrumbForIntegrityCheck;
+(BOOL)foundInitialWorkspaceSaveBreadcrumb;
+(void)clearIntegrityCheckBreadcrumb;
+(BOOL)foundDestroyPersistentStoreBreadcrumb;
-(id)init;
-(void)destroyPersistentStoreStarted;
-(int)configureInstance:(id)arg1 ;
-(void)destroyPersistentStoreCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)integrityCheckStarted;
-(void)launchSequence;
-(void)deleteDatabaseCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)setLaunchParams:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)launchParams;
-(void)integrityCheckCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)_launchSequence:(id)arg1 ;
@end

