/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BCSRemoteFetch.h>
#import <libobjc.A.dylib/BCSItemRemoteFetching.h>

@class NSString;

@interface BCSItemRemoteFetch : BCSRemoteFetch <BCSItemRemoteFetching>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchItemsWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 forClientBundleID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fetchItemRequestWithStartIndex:(long long)arg1 endIndex:(long long)arg2 timeout:(double)arg3 type:(long long)arg4 ;
@end

