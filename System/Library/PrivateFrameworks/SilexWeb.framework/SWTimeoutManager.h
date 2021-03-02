/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWTimeoutManager.h>

@protocol SWTimeoutManager <NSObject>
@required
-(void)onTimeout:(/*^block*/id)arg1;

@end


@class NSMutableArray, NFStateMachine, NSTimer, NSString;

@interface SWTimeoutManager : NSObject <SWMessageHandler, SWTimeoutManager> {

	NSMutableArray* _timeoutBlocks;
	NFStateMachine* _stateMachine;
	NSTimer* _timer;

}

@property (nonatomic,readonly) NSMutableArray * timeoutBlocks;              //@synthesize timeoutBlocks=_timeoutBlocks - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NFStateMachine *)stateMachine;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(void)onTimeout:(/*^block*/id)arg1 ;
-(id)initWithTimeout:(double)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 ;
-(NSMutableArray *)timeoutBlocks;
@end
