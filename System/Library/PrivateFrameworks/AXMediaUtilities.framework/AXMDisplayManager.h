/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol OS_dispatch_queue;
@class NSObject, AXMDisplay, FBSDisplayMonitor, NSString;

@interface AXMDisplayManager : NSObject <FBSDisplayObserving> {

	NSObject*<OS_dispatch_queue> _queue;
	AXMDisplay* _queue_CoreAnimationMainDisplay;
	AXMDisplay* _queue_FrontBoardMainDisplay;
	BOOL _initialized;
	FBSDisplayMonitor* _displayMonitor;
	double _mobileGestaltOrientation;

}

@property (nonatomic,retain) FBSDisplayMonitor * displayMonitor;                   //@synthesize displayMonitor=_displayMonitor - In the implementation block
@property (assign,nonatomic) double mobileGestaltOrientation;                      //@synthesize mobileGestaltOrientation=_mobileGestaltOrientation - In the implementation block
@property (nonatomic,readonly) AXMDisplay * frontBoardMainDisplay; 
@property (nonatomic,readonly) AXMDisplay * coreAnimationMainDisplay; 
@property (nonatomic,readonly) BOOL isInitialized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInitialized;
-(FBSDisplayMonitor *)displayMonitor;
-(id)initAndWaitForMainDisplayConfiguration;
-(void)_updateDisplay:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_updateDisplay:(id)arg1 withCADisplay:(id)arg2 ;
-(void)dealloc;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateDisplayPropertiesWithConfiguration:(id)arg1 ;
-(void)setDisplayMonitor:(FBSDisplayMonitor *)arg1 ;
-(NSString *)description;
-(double)mobileGestaltOrientation;
-(long long)_discreteOrientationForOrientation:(double)arg1 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(id)_displayPropertiesFromMobileGestalt;
-(AXMDisplay *)frontBoardMainDisplay;
-(void)setMobileGestaltOrientation:(double)arg1 ;
-(AXMDisplay *)coreAnimationMainDisplay;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
@end

