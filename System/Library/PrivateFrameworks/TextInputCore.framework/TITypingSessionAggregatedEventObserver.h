/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TITypingSessionAggregatedEventObserver <NSObject>
@optional
-(void)candidateEntered:(id)arg1 sessionID:(id)arg2 timeStamp:(double)arg3 action:(unsigned long long)arg4;
-(void)candidateRevised:(id)arg1 newCandidate:(id)arg2 sessionID:(id)arg3 timeStamp:(double)arg4 revisionAction:(unsigned long long)arg5;

@required
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2;

@end
