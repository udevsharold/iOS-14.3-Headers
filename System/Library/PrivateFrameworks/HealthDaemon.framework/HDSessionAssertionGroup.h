/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {

	NSMutableSet* _allAssertions;
	NSMutableDictionary* _assertionsForState;
	long long _state;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
-(void)transitionToState:(long long)arg1 ;
-(id)init;
-(long long)state;
-(void)invalidate;
-(void)_transitionToNewAssertions:(id)arg1 ;
-(void)setupState:(long long)arg1 withAssertions:(id)arg2 ;
@end

