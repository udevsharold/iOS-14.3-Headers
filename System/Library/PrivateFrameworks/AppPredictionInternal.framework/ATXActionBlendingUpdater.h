/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXActionBlendingUpdater : NSObject
+(void)updateBlendingLayerWithBehavioralPredictions:(id)arg1 feedbackMetadata:(id)arg2 consumerSubType:(unsigned char)arg3 ;
+(void)updateBlendingLayerWithRecentShortcuts:(id)arg1 ;
+(double)generateScoreForFallbackActionKey:(id)arg1 fallbackAction:(id)arg2 penalizedFallbackActions:(id)arg3 ;
+(void)updateBlendingLayerWithFallbackActions;
+(id)clientModelIdForConsumerSubType:(unsigned char)arg1 ;
+(void)updateBlendingLayerWithHeuristicPredictions:(id)arg1 ;
@end

