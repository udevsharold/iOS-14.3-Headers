/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTExpressionNode, TSCECalculationEngine, TSTTableInfo, NSString, TSCEFormulaObject;

@interface TSTFormula : NSObject <NSCopying> {

	TSTExpressionNode* _expressionTree;
	TSCECalculationEngine* _calculationEngine;
	TSTTableInfo* _hostInfo;
	NSString* _initialWhitespace;
	TSUModelCellCoord _hostCell;
	BOOL _syntaxError;
	BOOL _fixupFormulas;
	BOOL _formulaWasFixable;
	BOOL _formulaFixupsShouldStick;
	BOOL _empty;

}

@property (assign,nonatomic,__weak) TSCECalculationEngine * calculationEngine;              //@synthesize calculationEngine=_calculationEngine - In the implementation block
@property (assign,getter=isSyntaxError,nonatomic) BOOL syntaxError;                         //@synthesize syntaxError=_syntaxError - In the implementation block
@property (nonatomic,copy) NSString * initialWhitespace;                                    //@synthesize initialWhitespace=_initialWhitespace - In the implementation block
@property (nonatomic,readonly) TSCEFormulaObject * formula; 
@property (nonatomic,readonly) TSCEFormulaObject * geometricFormula; 
@property (assign,nonatomic) BOOL fixupFormulas;                                            //@synthesize fixupFormulas=_fixupFormulas - In the implementation block
@property (nonatomic,readonly) BOOL formulaWasFixable;                                      //@synthesize formulaWasFixable=_formulaWasFixable - In the implementation block
@property (nonatomic,readonly) BOOL formulaFixupsShouldStick;                               //@synthesize formulaFixupsShouldStick=_formulaFixupsShouldStick - In the implementation block
@property (nonatomic,retain) TSTExpressionNode * expressionTree;                            //@synthesize expressionTree=_expressionTree - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                     //@synthesize empty=_empty - In the implementation block
+(id)formulaForCell:(id)arg1 atCellID:(TSUViewCellCoord)arg2 inTable:(id)arg3 ;
+(BOOL)storageExceedsMaxFormulaLength:(id)arg1 ;
+(id)singleQuoteCharacters;
+(id)doubleQuoteCharacters;
+(int)quoteContextAtCharIndex:(unsigned long long)arg1 previousContext:(int)arg2 inStorage:(id)arg3 ;
+(unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 unmatchedParenCount:(unsigned long long)arg2 quoteContext:(int)arg3 inStorage:(id)arg4 ;
+(id)leftParenCharacters;
+(id)rightParenCharacters;
+(id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+(id)leadingSingleQuoteEscapeCharacters;
+(BOOL)isFormulaEqualsCharacter:(unsigned short)arg1 ;
+(int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2 ;
+(unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2 ;
-(BOOL)isEmpty;
-(void)setEmpty:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)description;
-(TSCEFormulaObject *)formula;
-(TSCECalculationEngine *)calculationEngine;
-(id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 baseHostCell:(TSUModelCellCoord)arg3 hostTable:(id)arg4 ;
-(TSTExpressionNode *)expressionTree;
-(TSCEFormulaObject *)geometricFormula;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseHostCell:(TSUModelCellCoord)arg3 formula:(id)arg4 ownerUID:(const UUIDData<TSP::UUIDData>*)arg5 ;
-(void)setCalculationEngine:(TSCECalculationEngine *)arg1 ;
-(BOOL)isSyntaxError;
-(id)formulaPlainText;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewHostCell:(TSUViewCellCoord)arg3 formula:(id)arg4 ownerUID:(const UUIDData<TSP::UUIDData>*)arg5 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 baseHostCell:(TSUModelCellCoord)arg3 formula:(id)arg4 ownerUID:(const UUIDData<TSP::UUIDData>*)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 viewHostCell:(TSUViewCellCoord)arg3 formula:(id)arg4 ownerUID:(const UUIDData<TSP::UUIDData>*)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6 ;
-(id)initWithCalculationEngine:(id)arg1 baseHostCell:(TSUModelCellCoord)arg2 hostTable:(id)arg3 ;
-(void)setExpressionTree:(TSTExpressionNode *)arg1 ;
-(void)setInitialWhitespace:(NSString *)arg1 ;
-(void)setSyntaxError:(BOOL)arg1 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 adjustExpressionTree:(/*^block*/id)arg2 ;
-(id)p_fixFormula:(id)arg1 ;
-(void)fixPreserveFlagsForCategoryRefInNode:(id)arg1 ;
-(id)p_formulaAsTextReturningTokenValues:(BOOL)arg1 ;
-(id)initWithCalculationEngine:(id)arg1 viewHostCell:(TSUViewCellCoord)arg2 hostTable:(id)arg3 ;
-(BOOL)hasBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 ;
-(id)formulaDetokenizedText;
-(BOOL)canSimplify;
-(id)simplify;
-(BOOL)fixupFormulas;
-(void)setFixupFormulas:(BOOL)arg1 ;
-(BOOL)formulaWasFixable;
-(BOOL)formulaFixupsShouldStick;
-(NSString *)initialWhitespace;
@end
