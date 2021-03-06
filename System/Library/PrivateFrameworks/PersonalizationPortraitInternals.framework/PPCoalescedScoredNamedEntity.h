/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject {

	unsigned short _occurrencesInSource;
	PPScoredItem* _scoredNamedEntity;

}

@property (nonatomic,readonly) PPScoredItem * scoredNamedEntity;                //@synthesize scoredNamedEntity=_scoredNamedEntity - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
-(unsigned short)occurrencesInSource;
-(id)init;
-(id)initWithScoredNamedEntity:(id)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(PPScoredItem *)scoredNamedEntity;
@end

