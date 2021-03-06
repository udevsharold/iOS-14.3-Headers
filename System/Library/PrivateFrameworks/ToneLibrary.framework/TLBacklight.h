/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable;

@interface TLBacklight : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSHashTable* _observers;
	BOOL _isObservingBacklight;
	long long _backlightStatus;

}

@property (readonly) long long backlightStatus; 
+(id)sharedBacklight;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2 ;
-(void)_setObservingBacklight:(BOOL)arg1 ;
-(long long)backlightStatus;
-(void)_setBacklightStatus:(long long)arg1 ;
@end

