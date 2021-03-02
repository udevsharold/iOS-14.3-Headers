/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface BMRuleExtractor : NSObject {

	BOOL _shouldStop;
	NSMutableDictionary* _patterns;
	NSArray* _items;
	unsigned long long _basketCount;

}

@property (nonatomic,retain) NSMutableDictionary * patterns;                //@synthesize patterns=_patterns - In the implementation block
@property (nonatomic,retain) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long basketCount;              //@synthesize basketCount=_basketCount - In the implementation block
@property (assign) BOOL shouldStop;                                         //@synthesize shouldStop=_shouldStop - In the implementation block
-(void)setItems:(NSArray *)arg1 ;
-(void)terminateEarly;
-(void)setPatterns:(NSMutableDictionary *)arg1 ;
-(NSArray *)items;
-(NSMutableDictionary *)patterns;
-(void)setShouldStop:(BOOL)arg1 ;
-(BOOL)shouldStop;
-(id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3 ;
-(void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 currentDate:(id)arg5 datedBaskets:(id)arg6 handler:(/*^block*/id)arg7 ;
-(id)subsetsOfItemset:(id)arg1 ;
-(unsigned long long)supportOfItemSet:(id)arg1 ;
-(unsigned long long)basketCount;
-(id)itemSetForItemIndexSet:(id)arg1 ;
-(void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
@end
