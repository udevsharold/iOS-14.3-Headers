/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class NSObject, CNContactStore, NSArray, NSCache, NSHashTable;

@interface PKPeerPaymentContactResolver : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	os_unfair_lock_s _delegatesLock;
	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	NSCache* _handleToContactCache;
	NSHashTable* _delegates;

}

@property (nonatomic,retain) NSCache * handleToContactCache;              //@synthesize handleToContactCache=_handleToContactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)invalidateCache;
-(NSHashTable *)delegates;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSArray *)keysToFetch;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)contactForHandle:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(CNContactStore *)contactStore;
-(void)_handleContactStoreDidChangeNotification:(id)arg1 ;
-(void)_accessDelegatesWithHandler:(/*^block*/id)arg1 ;
-(id)_predicateForHandle:(id)arg1 ;
-(BOOL)haveCachedResultForHandle:(id)arg1 ;
-(void)contactForHandles:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSCache *)handleToContactCache;
-(void)setHandleToContactCache:(NSCache *)arg1 ;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)contactForHandle:(id)arg1 ;
@end

