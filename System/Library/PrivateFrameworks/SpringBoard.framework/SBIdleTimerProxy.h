/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIdleTimerBase.h>
#import <libobjc.A.dylib/SBIdleTimerObserving.h>

@protocol SBIdleTimer;
@class NSString;

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving> {

	id<SBIdleTimer> _sourceTimer;

}

@property (nonatomic,retain) id<SBIdleTimer> sourceTimer;              //@synthesize sourceTimer=_sourceTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)disabledIdleTimerProxy;
-(BOOL)isActivated;
-(BOOL)isDisabled;
-(void)setActivated:(BOOL)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(id<SBIdleTimer>)sourceTimer;
-(void)setSourceTimer:(id<SBIdleTimer>)arg1 ;
-(void)reset;
-(id)initWithIdleTimerSource:(id)arg1 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)_logExpirationTimeout:(double)arg1 ;
-(void)idleTimerDidResetForUserAttention:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
@end

