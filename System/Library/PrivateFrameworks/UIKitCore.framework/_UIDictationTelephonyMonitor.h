/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CXCallObserver, NSString;

@interface _UIDictationTelephonyMonitor : NSObject <CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CXCallObserver* _callObserver;
	BOOL _telephonyActivity;
	/*^block*/id _activityChanged;

}

@property (nonatomic,readonly) BOOL telephonyActivity;              //@synthesize telephonyActivity=_telephonyActivity - In the implementation block
@property (copy) id activityChanged;                                //@synthesize activityChanged=_activityChanged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)_backgroundInit;
-(id)init;
-(void)_backgroundReset;
-(void)setActivityChanged:(id)arg1 ;
-(BOOL)telephonyActivity;
-(void)start;
-(id)activityChanged;
@end

