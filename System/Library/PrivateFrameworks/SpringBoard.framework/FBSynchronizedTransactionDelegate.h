/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSynchronizedTransactionDelegate <NSObject>
@required
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransactionReadyToCommit:(id)arg1;

@end

