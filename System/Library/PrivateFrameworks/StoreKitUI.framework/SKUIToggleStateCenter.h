/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface SKUIToggleStateCenter : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _itemStates;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;

}
+(id)defaultCenter;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(BOOL)updateItem:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(void)clearAll;
-(void)_notifyObserversOfStateChanges:(id)arg1 ;
-(void)_accountStoreChangeNotification:(id)arg1 ;
@end
