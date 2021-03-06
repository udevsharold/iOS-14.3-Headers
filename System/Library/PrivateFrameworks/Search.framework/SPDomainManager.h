/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPDomainManager : NSObject
+(void)initialize;
+(id)defaultManager;
-(void)notifyIndexer;
-(void)_removeAllDomainsForDisplayIdentifier:(id)arg1 ;
-(id)getBundleIdForDomainNumber:(id)arg1 ;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
-(BOOL)siriSuggestionsEnabled;
-(void)applicationWasUninstalled:(id)arg1 ;
@end

