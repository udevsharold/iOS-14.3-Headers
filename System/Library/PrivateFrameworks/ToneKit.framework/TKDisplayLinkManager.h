/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _activeObservers;
	NSMutableDictionary* _updatedObservers;
	BOOL _hasUpdatedObservers;
	BOOL _isHandlingDisplayRefresh;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(double)timestamp;
-(id)init;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(void)dealloc;
-(void)_setDisplayLink:(id)arg1 ;
-(BOOL)isPaused;
-(id)_displayLink;
-(double)duration;
-(void)removeObserverWithToken:(id)arg1 ;
-(id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_prepareUpdatedObserversForModification;
-(void)_didAddFirstObserver;
-(void)_didRemoveLastObserver;
-(BOOL)_isWarmUpModeEnabled;
-(id)addObserverWithHandler:(/*^block*/id)arg1 ;
@end
