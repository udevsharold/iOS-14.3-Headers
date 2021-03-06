/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming> {

	id<FCFeedTransforming> _innerFilter;

}

@property (nonatomic,retain) id<FCFeedTransforming> innerFilter;              //@synthesize innerFilter=_innerFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(/*^block*/id)arg5 dateOfArticleIDConsumptionProvider:(/*^block*/id)arg6 maxVersionConsumedProvider:(/*^block*/id)arg7 dateOfMaxVersionConsumptionProvider:(/*^block*/id)arg8 ;
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedTransforming>)innerFilter;
-(void)setInnerFilter:(id<FCFeedTransforming>)arg1 ;
@end

