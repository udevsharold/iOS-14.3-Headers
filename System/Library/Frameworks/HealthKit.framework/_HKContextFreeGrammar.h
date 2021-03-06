/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSCharacterSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject {

	NSMutableSet* _nonTerminals;
	NSMutableSet* _terminals;
	NSCharacterSet* _terminalCharacters;
	_HKCFGNonTerminal* _rootNonTerminal;
	/*^block*/id _emptyStringEvaluator;

}

@property (nonatomic,readonly) _HKCFGNonTerminal * rootNonTerminal;              //@synthesize rootNonTerminal=_rootNonTerminal - In the implementation block
@property (nonatomic,copy,readonly) id emptyStringEvaluator;                     //@synthesize emptyStringEvaluator=_emptyStringEvaluator - In the implementation block
+(id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
+(id)grammarWithRootNonTerminal:(id)arg1 ;
-(void)_gatherExpressions;
-(id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(/*^block*/id)arg2 ;
-(void)_gatherExpressionsStartingAt:(id)arg1 ;
-(_HKCFGNonTerminal *)rootNonTerminal;
-(id)parseTreeForString:(id)arg1 ;
-(id)emptyStringEvaluator;
-(void)invalidate;
@end

