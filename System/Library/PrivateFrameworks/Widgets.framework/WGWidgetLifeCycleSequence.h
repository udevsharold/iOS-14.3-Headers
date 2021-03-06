/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WGWidgetLifeCycleSequence : NSObject {

	long long _currentState;
	NSString* _sequenceIdentifier;
	WGWidgetLifeCycleSequence* _previousSequence;

}

@property (assign,setter=_setCurrentState:,nonatomic) long long currentState;                                                                 //@synthesize currentState=_currentState - In the implementation block
@property (setter=_setPreviousSequence:,getter=_previousSequence,nonatomic,retain) WGWidgetLifeCycleSequence * previousSequence;              //@synthesize previousSequence=_previousSequence - In the implementation block
@property (nonatomic,copy,readonly) NSString * sequenceIdentifier;                                                                            //@synthesize sequenceIdentifier=_sequenceIdentifier - In the implementation block
-(id)transitionToState:(long long)arg1 ;
-(void)_setCurrentState:(long long)arg1 ;
-(long long)currentState;
-(id)sequenceWithIdentifier:(id)arg1 ;
-(BOOL)isCurrentStateAtLeast:(long long)arg1 ;
-(id)description;
-(id)initWithSequenceIdentifier:(id)arg1 ;
-(BOOL)isCurrentState:(long long)arg1 ;
-(/*^block*/id)beginTransitionToState:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_isValidTransitionToState:(long long)arg1 ;
-(void)_setPreviousSequence:(id)arg1 ;
-(BOOL)isCurrentStateNotYet:(long long)arg1 ;
-(BOOL)isCurrentStateAtMost:(long long)arg1 ;
-(id)_previousSequence;
-(NSString *)sequenceIdentifier;
@end

