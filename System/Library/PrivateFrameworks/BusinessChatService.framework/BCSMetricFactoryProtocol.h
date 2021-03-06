/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCSMetricFactoryProtocol <NSObject>
@property (nonatomic,readonly) id<BCSMeasurementFactoryProtocol> measurementFactory; 
@required
-(id<BCSMeasurementFactoryProtocol>)measurementFactory;
-(id)megashardPrefetchMetricForType:(long long)arg1;
-(id)configResolutionMetricForConfigType:(long long)arg1;
-(id)shardResolutionMetricForShardIdentifier:(id)arg1;
-(id)itemResolutionMetricForItemIdentifier:(id)arg1;
-(id)businessLinkRegisteredMetricForItemIdentifier:(id)arg1;
-(id)businessLinkFetchMetricForItemIdentifier:(id)arg1;
-(id)businessLinkHashFetchMetricForItemIdentifier:(id)arg1;
-(id)chatSuggestRegisteredMetricForItemIdentifier:(id)arg1;
-(id)chatSuggestFetchMetricForItemIdentifier:(id)arg1;
-(id)configPrefetchMetricForConfigType:(long long)arg1;

@end

