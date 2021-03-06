/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFVariableSuggesterDelegate, WFVariableProvider;
@class NSArray;

@interface WFVariableSuggester : NSObject {

	id<WFVariableSuggesterDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	NSArray* _suggestedVariables;
	NSArray* _currentVariables;
	NSArray* _userDefinedVariableNames;
	NSArray* _outputActions;
	unsigned long long _maxSuggestionsCount;
	unsigned long long _minSuggestionsCount;

}

@property (nonatomic,retain) NSArray * suggestedVariables;                                 //@synthesize suggestedVariables=_suggestedVariables - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableSuggesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;               //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,copy) NSArray * currentVariables;                                     //@synthesize currentVariables=_currentVariables - In the implementation block
@property (nonatomic,copy) NSArray * userDefinedVariableNames;                             //@synthesize userDefinedVariableNames=_userDefinedVariableNames - In the implementation block
@property (nonatomic,copy) NSArray * outputActions;                                        //@synthesize outputActions=_outputActions - In the implementation block
@property (assign,nonatomic) unsigned long long maxSuggestionsCount;                       //@synthesize maxSuggestionsCount=_maxSuggestionsCount - In the implementation block
@property (assign,nonatomic) unsigned long long minSuggestionsCount;                       //@synthesize minSuggestionsCount=_minSuggestionsCount - In the implementation block
-(id)init;
-(unsigned long long)maxSuggestionsCount;
-(void)setMaxSuggestionsCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<WFVariableSuggesterDelegate>)arg1 ;
-(id<WFVariableSuggesterDelegate>)delegate;
-(id<WFVariableProvider>)variableProvider;
-(void)setSuggestedVariables:(NSArray *)arg1 ;
-(void)setCurrentVariables:(NSArray *)arg1 ;
-(void)setUserDefinedVariableNames:(NSArray *)arg1 ;
-(void)setOutputActions:(NSArray *)arg1 ;
-(void)setMinSuggestionsCount:(unsigned long long)arg1 ;
-(void)availableVariablesDidChange;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(NSArray *)suggestedVariables;
-(NSArray *)currentVariables;
-(NSArray *)userDefinedVariableNames;
-(NSArray *)outputActions;
-(unsigned long long)minSuggestionsCount;
@end

