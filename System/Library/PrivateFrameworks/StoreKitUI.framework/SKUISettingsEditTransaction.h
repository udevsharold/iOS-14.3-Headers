/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUISettingsEditTransactionDelegate;
@class NSSet, NSLock, NSMutableSet;

@interface SKUISettingsEditTransaction : NSObject {

	NSSet* _all;
	/*^block*/id _commitBlock;
	NSLock* _lock;
	NSMutableSet* _pending;
	BOOL _success;
	id<SKUISettingsEditTransactionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsEditTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)beginTransaction;
-(void)rollbackTransaction;
-(BOOL)isValid;
-(void)commitTransaction;
-(void)setDelegate:(id<SKUISettingsEditTransactionDelegate>)arg1 ;
-(id<SKUISettingsEditTransactionDelegate>)delegate;
-(BOOL)isCommiting;
-(void)cancelTransaction;
-(id)initWithSettingDescriptions:(id)arg1 ;
-(void)_delegateWillBeginTransaction;
-(void)_delegateDidFailTransaction;
-(void)_delegateWillCommitTransaction;
-(void)_settingDescription:(id)arg1 completedWithSuccess:(BOOL)arg2 ;
-(void)_delegateDidCompleteTransaction;
-(void)_finalizeCommit;
@end

