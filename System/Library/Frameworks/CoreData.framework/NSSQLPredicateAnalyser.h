/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {

	BOOL _compoundPredicate;
	NSMutableArray* _keys;
	NSMutableArray* _allModifierPredicates;
	NSMutableArray* _setExpressions;
	NSMutableArray* _subqueries;

}
-(void)visitPredicateExpression:(id)arg1 ;
-(id)allModifierPredicates;
-(id)init;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)dealloc;
-(id)setExpressions;
-(id)subqueries;
-(void)visitPredicate:(id)arg1 ;
-(id)keypaths;
@end
