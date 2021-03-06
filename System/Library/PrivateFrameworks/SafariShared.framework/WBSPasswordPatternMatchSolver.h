/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSMutableDictionary;

@interface WBSPasswordPatternMatchSolver : NSObject {

	NSString* _password;
	NSSet* _patternMatches;
	NSMutableDictionary* _partialSolutions;

}
-(id)_exhaustiveSearchPatternWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 ;
-(void)_updatePartialSolutionsWithPatternMatch:(id)arg1 patternCount:(unsigned long long)arg2 ;
-(void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(unsigned long long)arg1 ;
-(id)_unwindSolution;
-(id)initWithPassword:(id)arg1 patternMatches:(id)arg2 ;
-(id)optimalEvaluation;
-(id)_partialSolutionWithEndIndex:(unsigned long long)arg1 patternCount:(unsigned long long)arg2 ;
-(void)_enumeratePartialSolutionsWithEndIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setPartialSolution:(id)arg1 withEndIndex:(unsigned long long)arg2 patternCount:(unsigned long long)arg3 ;
@end

