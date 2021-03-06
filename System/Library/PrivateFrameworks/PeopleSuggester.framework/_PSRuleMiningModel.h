/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class _PSContactResolver, BMBehaviorRetriever, NSDictionary, _PSRuleRankingMLModel;

@interface _PSRuleMiningModel : NSObject {

	BOOL __PSRuleMiningIsMLModelInUse;
	BOOL __PSRuleMiningIsAdaptedMLModelOK;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_PSContactResolver* _contactResolver;
	BMBehaviorRetriever* _behaviorRetriever;
	long long __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
	long long __PSRuleMiningModelRegularizingContextOverlapConstraint;
	double __PSRuleMiningModelMinRuleConfidenceForSuggestion;
	double __PSRuleMiningMLModelScoreThreshold;
	NSDictionary* _psConfigForAdaptableModel;
	_PSRuleRankingMLModel* _ruleRankingModel;

}

@property (nonatomic,readonly) BMBehaviorRetriever * behaviorRetriever;                                            //@synthesize behaviorRetriever=_behaviorRetriever - In the implementation block
@property (assign,nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;              //@synthesize _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions=__PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions - In the implementation block
@property (assign,nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint;                     //@synthesize _PSRuleMiningModelRegularizingContextOverlapConstraint=__PSRuleMiningModelRegularizingContextOverlapConstraint - In the implementation block
@property (assign,nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion;                              //@synthesize _PSRuleMiningModelMinRuleConfidenceForSuggestion=__PSRuleMiningModelMinRuleConfidenceForSuggestion - In the implementation block
@property (assign,nonatomic) double _PSRuleMiningMLModelScoreThreshold;                                            //@synthesize _PSRuleMiningMLModelScoreThreshold=__PSRuleMiningMLModelScoreThreshold - In the implementation block
@property (assign,nonatomic) BOOL _PSRuleMiningIsMLModelInUse;                                                     //@synthesize _PSRuleMiningIsMLModelInUse=__PSRuleMiningIsMLModelInUse - In the implementation block
@property (assign,nonatomic) BOOL _PSRuleMiningIsAdaptedMLModelOK;                                                 //@synthesize _PSRuleMiningIsAdaptedMLModelOK=__PSRuleMiningIsAdaptedMLModelOK - In the implementation block
@property (retain) NSDictionary * psConfigForAdaptableModel;                                                       //@synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel - In the implementation block
@property (retain) _PSRuleRankingMLModel * ruleRankingModel;                                                       //@synthesize ruleRankingModel=_ruleRankingModel - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;                                            //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _PSContactResolver * contactResolver;                                               //@synthesize contactResolver=_contactResolver - In the implementation block
-(void)updateModelProperties:(id)arg1 ;
-(long long)_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
-(_PSContactResolver *)contactResolver;
-(BOOL)_PSRuleMiningIsMLModelInUse;
-(long long)_PSRuleMiningModelRegularizingContextOverlapConstraint;
-(void)updateAdaptableModelProperties:(id)arg1 ;
-(double)_PSRuleMiningMLModelScoreThreshold;
-(BMBehaviorRetriever *)behaviorRetriever;
-(void)set_PSRuleMiningIsMLModelInUse:(BOOL)arg1 ;
-(void)set_PSRuleMiningModelRegularizingContextOverlapConstraint:(long long)arg1 ;
-(BOOL)isAdaptedModelUsed;
-(id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)shareExtensionSuggestionsFromContext:(id)arg1 ;
-(void)setRuleRankingModel:(_PSRuleRankingMLModel *)arg1 ;
-(id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2 ;
-(double)_PSRuleMiningModelMinRuleConfidenceForSuggestion;
-(id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3 ;
-(BOOL)_PSRuleMiningIsAdaptedMLModelOK;
-(void)loadMLModel;
-(void)set_PSRuleMiningIsAdaptedMLModelOK:(BOOL)arg1 ;
-(void)set_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions:(long long)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2 withConfig:(id)arg3 ;
-(id)extractAdaptedModelRecipeID;
-(id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3 ;
-(void)set_PSRuleMiningMLModelScoreThreshold:(double)arg1 ;
-(_PSRuleRankingMLModel *)ruleRankingModel;
-(void)setPsConfigForAdaptableModel:(NSDictionary *)arg1 ;
-(NSDictionary *)psConfigForAdaptableModel;
-(BOOL)isAdaptedModelCreated;
-(void)set_PSRuleMiningModelMinRuleConfidenceForSuggestion:(double)arg1 ;
@end

