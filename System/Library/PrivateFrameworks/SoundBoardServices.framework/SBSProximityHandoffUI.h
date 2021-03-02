/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSProximityHandoffUIDelegate, SBSProximityHandoffUIImplementer, OS_dispatch_queue;
@class NSObject;

@interface SBSProximityHandoffUI : NSObject {

	id<SBSProximityHandoffUIDelegate> _delegate;
	id<SBSProximityHandoffUIImplementer> _sbProxy;
	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _handoffQueue;

}

@property (nonatomic,retain) id<SBSProximityHandoffUIImplementer> sbProxy;                   //@synthesize sbProxy=_sbProxy - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handoffQueue;                      //@synthesize handoffQueue=_handoffQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SBSProximityHandoffUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)complete;
-(id)init;
-(unsigned long long)state;
-(id<SBSProximityHandoffUIImplementer>)sbProxy;
-(void)start;
-(void)setDelegate:(id<SBSProximityHandoffUIDelegate>)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(id<SBSProximityHandoffUIDelegate>)delegate;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSbProxy:(id<SBSProximityHandoffUIImplementer>)arg1 ;
-(BOOL)_shouldTransition;
-(void)_transition:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)handoffQueue;
-(void)_queueTransition:(unsigned long long)arg1 ;
-(id)_stateDescription:(unsigned long long)arg1 ;
-(void)updateIntensity:(float)arg1 ;
-(void)setHandoffQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
