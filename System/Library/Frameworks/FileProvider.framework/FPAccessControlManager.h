/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FPAccessControlManager : NSObject
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1 ;
-(void)_killBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)collectionForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)revokeAccessToAllBundles;
-(void)revokeAccessToAllBundlesCompletionHandler:(/*^block*/id)arg1 ;
@end

