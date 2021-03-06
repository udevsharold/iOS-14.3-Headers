/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCForYouQueryUtilities : NSObject
+(void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(BOOL)arg7 qualityOfService:(long long)arg8 completionHandler:(/*^block*/id)arg9 ;
+(id)feedRequestsForTags:(id)arg1 tagBinProvider:(/*^block*/id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 purchasedTagIDs:(id)arg5 bundleSubscriptionProvider:(id)arg6 configuration:(id)arg7 maxCount:(unsigned long long)arg8 tagIDFeedRangeProvider:(/*^block*/id)arg9 isRunningPPT:(BOOL)arg10 ;
+(void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(BOOL)arg7 qualityOfService:(long long)arg8 completionHandler:(/*^block*/id)arg9 ;
+(id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2 ;
@end

