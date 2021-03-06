/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSCERefParsingProtocol.h>

@class TSCECalculationEngine, NSCharacterSet, NSString;

@interface TSTRefParser : NSObject <TSCERefParsingProtocol> {

	TSCECalculationEngine* _calcEngine;
	NSCharacterSet* _whitespaceCharSet;

}

@property (nonatomic,retain) NSCharacterSet * whitespaceCharSet;                       //@synthesize whitespaceCharSet=_whitespaceCharSet - In the implementation block
@property (nonatomic,__weak,readonly) TSCECalculationEngine * calcEngine;              //@synthesize calcEngine=_calcEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)p_chromeReferencesForMixedReferences:(id)arg1 calcEngine:(id)arg2 ;
+(RefTypeHolder<TSCERangeRef, 2>)p_chromeRangeRefForBaseRangeRef:(RefTypeHolder<TSCERangeRef, 0>)arg1 calcEngine:(id)arg2 ;
+(id)p_baseReferencesForChromeReferences:(id)arg1 calcEngine:(id)arg2 ;
+(RefTypeHolder<TSCERangeRef, 0>)p_baseRangeRefForChromeRangeRef:(RefTypeHolder<TSCERangeRef, 2>)arg1 calcEngine:(id)arg2 ;
+(id)p_baseReferenceForChromeReference:(id)arg1 calcEngine:(id)arg2 ;
+(id)p_chromeReferenceForBaseReference:(id)arg1 calcEngine:(id)arg2 ;
-(TSCECalculationEngine *)calcEngine;
-(id)initWithCalcEngine:(id)arg1 ;
-(RefTypeHolder<TSCERangeRef, 0>)parseStringAsBaseReference:(id)arg1 withParsingContext:(id)arg2 ;
-(TSCERangeRef)parseR1C1Reference:(id)arg1 containingCell:(const TSCECellRef*)arg2 preserveFlagsOut:(TSUPreserveFlags*)arg3 ;
-(TSCECategoryRef)parseStringAsCategoryRef:(id)arg1 withParsingContext:(id)arg2 ;
-(TSUChromeCellCoord)p_parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(TSCETableResolver*)arg2 outPreserveFlags:(TSUPreserveFlags*)arg3 gettingReferencesMatchingInputAsPrefix:(id*)arg4 ;
-(id)parseAsChromeRefWithParsingContext:(id)arg1 ;
-(RefTypeHolder<TSCERangeRef, 2>)p_parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(TSCETableResolver*)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(TSCETableResolver*)arg4 withParsingContext:(id)arg5 ;
-(BOOL)p_parseComponentsOfReference:(id)arg1 gettingSheetName:(id*)arg2 gettingTableName:(id*)arg3 gettingRest:(id*)arg4 ;
-(NSCharacterSet *)whitespaceCharSet;
-(RefTypeHolder<TSCERangeRef, 2>)parseStringAsChromeReference:(id)arg1 withParsingContext:(id)arg2 ;
-(TSUCellCoord)parseR1C1Coord:(id)arg1 containingCell:(const TSCECellRef*)arg2 preserveFlagsOut:(TSUPreserveFlags*)arg3 ;
-(UUIDData<TSP::UUIDData>)p_findFirstColumnNameInComponent:(id)arg1 tableName:(id)arg2 refResolver:(id)arg3 calcEngine:(id)arg4 outPreserveFlags:(TSUPreserveFlags*)arg5 usedWordCount:(unsigned long long*)arg6 ;
-(TSCECategoryRef)parseAsCategoryRefWithParsingContext:(id)arg1 ;
-(TSCECategoryRef)p_parseAsCategoryRefWithSheet:(id)arg1 tableName:(id)arg2 columnNameAndGroupValuesStartAt:(unsigned long long)arg3 withParsingContext:(id)arg4 ;
-(id)parseAsTractRefWithParsingContext:(id)arg1 ;
-(void)setWhitespaceCharSet:(NSCharacterSet *)arg1 ;
@end

