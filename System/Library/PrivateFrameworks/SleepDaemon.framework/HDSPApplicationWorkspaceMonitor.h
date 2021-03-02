/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class HKSPObserverSet, NSString;

@interface HDSPApplicationWorkspaceMonitor : NSObject <LSApplicationWorkspaceObserverProtocol> {

	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(void)addObserver:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(BOOL)isApplicationInstalled:(id)arg1 ;
@end
