/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIAppIconsRowView, NSArray, TLKAuxilliaryTextView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {

	SearchUIAppIconsRowView* _topRow;
	SearchUIAppIconsRowView* _bottomRow;
	NSArray* _results;
	long long _indexOfSelectedKeyboardIcon;
	TLKAuxilliaryTextView* _folderLabelView;

}

@property (nonatomic,retain) SearchUIAppIconsRowView * topRow;                     //@synthesize topRow=_topRow - In the implementation block
@property (nonatomic,retain) SearchUIAppIconsRowView * bottomRow;                  //@synthesize bottomRow=_bottomRow - In the implementation block
@property (nonatomic,retain) NSArray * results;                                    //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long indexOfSelectedKeyboardIcon;                //@synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon - In the implementation block
@property (nonatomic,retain) TLKAuxilliaryTextView * folderLabelView;              //@synthesize folderLabelView=_folderLabelView - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
-(BOOL)canSetupKeyboardHandler;
-(BOOL)navigateKeyboardRight;
-(BOOL)navigateKeyboardUp;
-(NSArray *)results;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setBottomRow:(SearchUIAppIconsRowView *)arg1 ;
-(void)setTopRow:(SearchUIAppIconsRowView *)arg1 ;
-(void)setupKeyboardHandler;
-(double)appRowVerticalSpacingForTopRowSize:(CGSize)arg1 ;
-(void)setIndexOfSelectedKeyboardIcon:(long long)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(id)visibleResults;
-(void)updateWithRowModel:(id)arg1 ;
-(SearchUIAppIconsRowView *)topRow;
-(TLKAuxilliaryTextView *)folderLabelView;
-(long long)indexOfSelectedKeyboardIcon;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)returnKeyPressed;
-(void)layoutSubviews;
-(BOOL)isExpandable;
-(unsigned long long)numberOfVisibleResults;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(BOOL)navigateKeyboardDown;
-(id)keyboardResultForFocus;
-(BOOL)navigateKeyboardLeft;
-(void)removeHighlightedIconState;
-(void)removeKeyboardHandler;
-(void)setFolderLabelView:(TLKAuxilliaryTextView *)arg1 ;
-(SearchUIAppIconsRowView *)bottomRow;
-(id)viewForHighlightedIndex:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateExpanded:(BOOL)arg1 ;
@end

