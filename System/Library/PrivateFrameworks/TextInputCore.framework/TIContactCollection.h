/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TIContactCollection : NSObject {

	NSMutableArray* _contacts;
	long long _count;
	BOOL _sourceHasRelevancyScore;

}

@property (nonatomic,readonly) BOOL sourceHasRelevancyScore;              //@synthesize sourceHasRelevancyScore=_sourceHasRelevancyScore - In the implementation block
@property (nonatomic,readonly) long long count;                           //@synthesize count=_count - In the implementation block
-(void)addContact:(id)arg1 ;
-(long long)count;
-(id)initWithRelevanceScoreType:(BOOL)arg1 ;
-(void)enumerateContactsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)sourceHasRelevancyScore;
@end

