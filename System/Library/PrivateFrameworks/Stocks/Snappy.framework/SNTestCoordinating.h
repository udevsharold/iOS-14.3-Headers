/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNTestCoordinating <NSObject>
@required
-(void)recapScrollTestWithTestName:(id)arg1 scrollView:(id)arg2 numberOfScreens:(id)arg3 direction:(unsigned long long)arg4;
-(void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 numberOfScreens:(long long)arg5 direction:(unsigned long long)arg6;
-(void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;
-(void)startedTestWithTestName:(id)arg1;
-(void)finishedTestWithTestName:(id)arg1 waitForCommit:(BOOL)arg2;
-(void)rotateToOrientation:(long long)arg1 beforeRotation:(/*^block*/id)arg2 afterRotation:(/*^block*/id)arg3;
-(BOOL)requiresRotationForOrientation:(long long)arg1;
-(void)failedTestWithTestName:(id)arg1 failureMessage:(id)arg2;

@end

