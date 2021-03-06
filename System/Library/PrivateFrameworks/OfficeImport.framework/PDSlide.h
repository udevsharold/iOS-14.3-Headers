/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideLayout, NSMutableArray, PDNotesSlide, OITSUNoCopyDictionary;

@interface PDSlide : PDSlideChild {

	PDSlideLayout* mSlideLayout;
	NSMutableArray* mComments;
	PDNotesSlide* mNotesSlide;
	OITSUNoCopyDictionary* mCommentParents;

}

@property (retain) OITSUNoCopyDictionary * commentParents; 
-(id)transition;
-(id)background;
-(id)description;
-(void)addComment:(id)arg1 ;
-(unsigned long long)commentCount;
-(id)defaultTheme;
-(id)slideLayout;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(void)setSlideLayout:(id)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)notesSlide;
-(void)setNotesSlide:(id)arg1 ;
-(id)commentAtIndex:(unsigned long long)arg1 ;
-(id)commentForAuthorId:(unsigned long long)arg1 authorIdx:(unsigned long long)arg2 ;
-(OITSUNoCopyDictionary *)commentParents;
-(void)setCommentParents:(OITSUNoCopyDictionary *)arg1 ;
-(void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3 ;
-(id)inheritedTextStyleForPlaceholderType:(int)arg1 ;
@end

