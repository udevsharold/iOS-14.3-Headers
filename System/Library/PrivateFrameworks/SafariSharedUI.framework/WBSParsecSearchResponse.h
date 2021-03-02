/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSParsecSearchCompletionResultSet, NSArray;

@interface WBSParsecSearchResponse : NSObject {

	WBSParsecSearchCompletionResultSet* _bestResultSet;
	double _maxAge;
	unsigned long long _sizeInBytes;
	NSArray* _completionResultSets;

}

@property (nonatomic,readonly) double maxAge;                                                             //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes;                                            //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,readonly) NSArray * completionResultSets;                                            //@synthesize completionResultSets=_completionResultSets - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchCompletionResultSet * bestCompletionResultSet; 
@property (nonatomic,readonly) NSArray * statusCodesForCompletionResultSets; 
+(id)searchResponseSchemaWithCache:(id)arg1 ;
-(double)maxAge;
-(unsigned long long)sizeInBytes;
-(id)initWithArray:(id)arg1 responseHeaders:(id)arg2 sizeInBytes:(unsigned long long)arg3 cache:(id)arg4 ;
-(WBSParsecSearchCompletionResultSet *)bestCompletionResultSet;
-(NSArray *)statusCodesForCompletionResultSets;
-(NSArray *)completionResultSets;
@end
