/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, HKSPObserverSet, HKSPDiagnostics, NSString;

@interface HDSPDiagnostics : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _providers;
	HKSPDiagnostics* _diagnostics;

}

@property (nonatomic,readonly) HKSPObserverSet * providers;                       //@synthesize providers=_providers - In the implementation block
@property (nonatomic,readonly) HKSPDiagnostics * diagnostics;                     //@synthesize diagnostics=_diagnostics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(HKSPObserverSet *)providers;
-(void)addProvider:(id)arg1 ;
-(HKSPDiagnostics *)diagnostics;
-(void)removeProvider:(id)arg1 ;
-(void)_logDiagnostics:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPEnvironment *)environment;
@end
