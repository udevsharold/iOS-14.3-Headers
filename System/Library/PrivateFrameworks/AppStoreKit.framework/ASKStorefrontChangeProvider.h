/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface ASKStorefrontChangeProvider : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	ACAccountStore* _accountStore;
	ACAccount* _localAccount;
	ACAccount* _activeAccount;

}

@property (nonatomic,copy,readonly) id block;                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * localAccount;                                //@synthesize localAccount=_localAccount - In the implementation block
@property (nonatomic,retain) ACAccount * activeAccount;                               //@synthesize activeAccount=_activeAccount - In the implementation block
-(ACAccountStore *)accountStore;
-(void)setLocalAccount:(ACAccount *)arg1 ;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasStorefrontChangedFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(BOOL)hasManagedStateChangedFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(id)block;
-(void)setActiveAccount:(ACAccount *)arg1 ;
-(ACAccount *)activeAccount;
-(ACAccount *)localAccount;
-(void)accountStoreDidChange:(id)arg1 ;
@end
