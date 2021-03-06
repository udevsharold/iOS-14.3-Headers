/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBIdleTimerActivation.h>
#import <libobjc.A.dylib/SBIdleTimer.h>

@class NSHashTable, NSString;

@interface SBIdleTimerBase : NSObject <SBIdleTimerActivation, SBIdleTimer> {

	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                      //@synthesize observers=_observers - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isActivated;
-(BOOL)isDisabled;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(void)removeAllIdleTimerObservers;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSHashTable *)observers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)reset;
-(void)removeIdleTimerObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(void)_makeObserversPerformSelector:(SEL)arg1 ;
-(void)conformsToSBIdleTimerActivation;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(void)_logExpirationTimeout:(double)arg1 ;
-(void)addIdleTimerObserver:(id)arg1 ;
@end

