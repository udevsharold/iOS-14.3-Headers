/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSItemCaching.h>
#import <libobjc.A.dylib/BCSLinkItemCacheClearing.h>
#import <libobjc.A.dylib/BCSBatchable.h>

@protocol BCSUserDefaultsProviding;
@class BCSBusinessItemMemoryCache, BCSLinkItemPersistentStore, NSString;

@interface BCSItemCache : NSObject <BCSItemCaching, BCSLinkItemCacheClearing, BCSBatchable> {

	BCSBusinessItemMemoryCache* _chatSuggestItemStore;
	BCSLinkItemPersistentStore* _linkItemStore;
	id<BCSUserDefaultsProviding> _userDefaults;

}

@property (nonatomic,retain) BCSBusinessItemMemoryCache * chatSuggestItemStore;              //@synthesize chatSuggestItemStore=_chatSuggestItemStore - In the implementation block
@property (nonatomic,retain) BCSLinkItemPersistentStore * linkItemStore;                     //@synthesize linkItemStore=_linkItemStore - In the implementation block
@property (nonatomic,retain) id<BCSUserDefaultsProviding> userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BCSUserDefaultsProviding>)userDefaults;
-(void)setUserDefaults:(id<BCSUserDefaultsProviding>)arg1 ;
-(void)endBatch;
-(void)beginBatch;
-(id)itemMatching:(id)arg1 ;
-(void)deleteItemMatching:(id)arg1 ;
-(void)updateItem:(id)arg1 withItemIdentifier:(id)arg2 ;
-(void)deleteItemsOfType:(long long)arg1 ;
-(void)deleteExpiredItemsOfType:(long long)arg1 ;
-(void)deleteLinkItemsWithBundleID:(id)arg1 ;
-(BCSBusinessItemMemoryCache *)chatSuggestItemStore;
-(BCSLinkItemPersistentStore *)linkItemStore;
-(void)setChatSuggestItemStore:(BCSBusinessItemMemoryCache *)arg1 ;
-(void)setLinkItemStore:(BCSLinkItemPersistentStore *)arg1 ;
@end

