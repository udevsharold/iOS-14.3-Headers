/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PCRuntimeParameters : NSObject
+(void)clientHandlesImpressionTracking:(BOOL)arg1 ;
+(void)rateLimitRequestsInFeed:(float)arg1 inArticle:(float)arg2 betweenArticle:(float)arg3 videoInArticle:(float)arg4 nativeInFeed:(float)arg5 nativeInArticle:(float)arg6 ;
+(void)setContextPrefetchLimit:(long long)arg1 ;
+(long long)contextPrefetchLimit;
+(void)rateLimitRequests:(float)arg1 ;
@end
