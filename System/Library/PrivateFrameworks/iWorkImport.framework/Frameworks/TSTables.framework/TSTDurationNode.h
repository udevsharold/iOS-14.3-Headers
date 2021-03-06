/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTExpressionNode.h>

@interface TSTDurationNode : TSTExpressionNode {

	BOOL _blank;
	TSTDurationWrapper _value;

}

@property (assign,nonatomic) TSTDurationWrapper value;               //@synthesize value=_value - In the implementation block
@property (assign,getter=isBlank,nonatomic) BOOL blank;              //@synthesize blank=_blank - In the implementation block
-(id)format;
-(TSTDurationWrapper)value;
-(id)string;
-(id)date;
-(void)setValue:(TSTDurationWrapper)arg1 ;
-(int)tokenType;
-(id)description;
-(BOOL)isBlank;
-(void)setBlank:(BOOL)arg1 ;
-(void)loadFromArchive:(const DurationNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(DurationNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)exportString;
-(id)initWithContext:(id)arg1 duration:(TSTDurationWrapper)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(TSTDurationWrapper)durationWrapper;
@end

