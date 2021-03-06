/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <SearchUI/SearchUIKeyboardableNavigationProtocol.h>

@protocol SearchUIFeedbackDelegateInternal;
@class SearchUIRowModel, UIView, SearchUIDragSource, NSArray, NSString;

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol> {

	BOOL _isExpanded;
	int _sfSeparatorStyle;
	SearchUIRowModel* _rowModel;
	UIView* _platterView;
	id<SearchUIFeedbackDelegateInternal> _delegate;
	UIView* _sizingContainer;
	SearchUIDragSource* _dragSource;
	UIView* _leadingView;
	UIView* _leadingTextView;

}

@property (nonatomic,retain) SearchUIRowModel * rowModel;                                       //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                              //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                   //@synthesize isExpanded=_isExpanded - In the implementation block
@property (readonly) BOOL shouldDrawBackgroundColor; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegateInternal> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * sizingContainer;                                          //@synthesize sizingContainer=_sizingContainer - In the implementation block
@property (nonatomic,retain) SearchUIDragSource * dragSource;                                   //@synthesize dragSource=_dragSource - In the implementation block
@property (readonly) NSArray * visibleResults; 
@property (nonatomic,readonly) UIView * leadingView;                                            //@synthesize leadingView=_leadingView - In the implementation block
@property (nonatomic,readonly) UIView * leadingTextView;                                        //@synthesize leadingTextView=_leadingTextView - In the implementation block
@property (assign,nonatomic) int sfSeparatorStyle;                                              //@synthesize sfSeparatorStyle=_sfSeparatorStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifierForResult:(id)arg1 ;
+(BOOL)canCellExpandWithResults:(id)arg1 forView:(id)arg2 ;
+(double)distanceToTopOfAppIconsForMultiResultCell;
+(id)cellViewForRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)canSetupKeyboardHandler;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(BOOL)navigateKeyboardRight;
-(CGSize)intrinsicContentSize;
-(BOOL)navigateKeyboardUp;
-(id)init;
-(UIView *)platterView;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(void)setupKeyboardHandler;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(SearchUIDragSource *)dragSource;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(NSArray *)visibleResults;
-(void)updateWithRowModel:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(SearchUIRowModel *)rowModel;
-(UIView *)leadingTextView;
-(void)returnKeyPressed;
-(void)layoutSubviews;
-(BOOL)isExpandable;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(BOOL)shouldDrawBackgroundColor;
-(int)sfSeparatorStyle;
-(UIView *)sizingContainer;
-(void)tabKeyPressed;
-(id)keyboardCardSectionForFocus;
-(void)updateWithResults:(id)arg1 ;
-(BOOL)supportsRecycling;
-(void)setSizingContainer:(UIView *)arg1 ;
-(BOOL)navigateKeyboardDown;
-(void)didMoveToWindow;
-(void)setDelegate:(id<SearchUIFeedbackDelegateInternal>)arg1 ;
-(void)setRowModel:(SearchUIRowModel *)arg1 ;
-(id)keyboardResultForFocus;
-(BOOL)navigateKeyboardLeft;
-(void)setDragSource:(SearchUIDragSource *)arg1 ;
-(void)removeKeyboardHandler;
-(UIView *)leadingView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SearchUIFeedbackDelegateInternal>)delegate;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)setSfSeparatorStyle:(int)arg1 ;
@end

