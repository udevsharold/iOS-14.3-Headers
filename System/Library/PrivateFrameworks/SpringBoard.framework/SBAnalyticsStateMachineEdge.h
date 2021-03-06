/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBAnalyticsStateMachineEdge : NSObject <BSDescriptionProviding> {

	unsigned long long _fromState;
	/*^block*/id _transition;

}

@property (nonatomic,readonly) unsigned long long fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 andDo:(/*^block*/id)arg4 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponEvent:(unsigned long long)arg3 ;
+(id)edgeFromState:(unsigned long long)arg1 transition:(/*^block*/id)arg2 ;
+(id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithFromState:(unsigned long long)arg1 transition:(/*^block*/id)arg2 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(unsigned long long)fromState;
-(NSString *)debugDescription;
@end

