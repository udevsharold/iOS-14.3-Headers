/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSWPSelection.h>

@interface TSTWPFormulaSelection : TSWPSelection {

	unsigned long long mActiveTokenCharIndex;

}

@property (assign,nonatomic) unsigned long long activeTokenCharIndex; 
+(Class)archivedSelectionClass;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(int)arg1 range:(NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned long long)arg7 ;
-(id)initWithType:(int)arg1 range:(NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned long long)arg7 activeTokenCharIndex:(unsigned long long)arg8 ;
-(unsigned long long)activeTokenCharIndex;
-(void)setActiveTokenCharIndex:(unsigned long long)arg1 ;
@end
