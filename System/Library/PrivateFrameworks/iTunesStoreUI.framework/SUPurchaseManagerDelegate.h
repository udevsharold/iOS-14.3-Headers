/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUPurchaseManagerDelegate <NSObject>
@optional
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
-(void)purchaseManagerDidEndUpdates:(id)arg1;
-(void)purchaseManagerWillBeginUpdates:(id)arg1;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;

@end

