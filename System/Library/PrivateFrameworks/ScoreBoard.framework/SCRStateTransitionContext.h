/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCRStateTransitionContext : NSObject {

	unsigned long long _fromState;
	unsigned long long _toState;

}

@property (nonatomic,readonly) unsigned long long fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,readonly) unsigned long long toState;                //@synthesize toState=_toState - In the implementation block
+(id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(unsigned long long)toState;
-(unsigned long long)fromState;
@end

