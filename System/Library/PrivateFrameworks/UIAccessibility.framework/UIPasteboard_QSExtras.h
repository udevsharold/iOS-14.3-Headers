/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
+(Class)safeCategoryBaseClass;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)generalPasteboard;
+(id)safeCategoryTargetClassName;
+(BOOL)_accessibilityUseQuickSpeakPasteBoard;
+(id)_accessibilityQuickSpeakPasteboard;
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg1 ;
+(id)pasteboardWithUniqueName;
-(void)setItems:(id)arg1 ;
-(void)setStrings:(id)arg1 ;
-(id)string;
-(long long)numberOfItems;
-(void)addItems:(id)arg1 ;
-(id)color;
-(id)URLs;
-(id)image;
-(id)strings;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)items;
-(id)images;
-(long long)changeCount;
-(id)colors;
-(id)URL;
-(BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
@end
