/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchBarLayoutBase.h>
#import <UIKitCore/_UISearchBarContainerSublayoutDelegate.h>

@class UIView, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarPromptContainerView, UIFont, _UISearchBarScopeContainerLayout, _UISearchBarSearchContainerLayout, UISearchBarTextField, NSString;

@interface _UISearchBarLayout : _UISearchBarLayoutBase <_UISearchBarContainerSublayoutDelegate> {

	SCD_Struct_UI20 _searchBarLayoutFlags;
	double _cachedFontValueBeforeScaling;
	double _cachedFontValueAfterScaling;
	UIView* _searchBarBackground;
	UIView* _searchBarBackdrop;
	UIView* _separator;
	_UISearchBarScopeContainerView* _scopeBarContainer;
	_UISearchBarSearchContainerView* _searchFieldContainer;
	_UISearchBarPromptContainerView* _promptContainer;
	double _backgroundExtension;
	double _searchBarReadableWidth;
	unsigned long long _numberOfScopeTitles;
	UIFont* _searchFieldFont;
	long long _representedLayoutState;
	_UISearchBarScopeContainerLayout* _scopeContainerLayout;
	_UISearchBarSearchContainerLayout* _searchContainerLayout;
	UIOffset _searchFieldBackgroundPositionAdjustment;
	CGSize _heightRange;
	CGRect _promptContainerLayoutFrame;
	CGRect _searchFieldContainerLayoutFrame;
	CGRect _scopeBarContainerLayoutFrame;
	CGRect _searchBarBackgroundLayoutFrame;
	CGRect _separatorLayoutFrame;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * scopeContainerLayout;                                //@synthesize scopeContainerLayout=_scopeContainerLayout - In the implementation block
@property (nonatomic,retain) _UISearchBarSearchContainerLayout * searchContainerLayout;                              //@synthesize searchContainerLayout=_searchContainerLayout - In the implementation block
@property (nonatomic,readonly) double naturalSearchBarHeight; 
@property (nonatomic,readonly) double naturalSearchFieldHeight; 
@property (nonatomic,readonly) double naturalScopeBarHeight; 
@property (nonatomic,readonly) UIEdgeInsets scopeContainerSpecificInsets; 
@property (nonatomic,readonly) double naturalPromptContainerHeight; 
@property (nonatomic,readonly) double naturalTotalHeight; 
@property (assign,getter=isProspective,nonatomic) BOOL prospective; 
@property (assign,getter=isHostingNavBarTransitionActive,nonatomic) BOOL hostingNavBarTransitionActive; 
@property (nonatomic,retain) UIView * searchBarBackground;                                                           //@synthesize searchBarBackground=_searchBarBackground - In the implementation block
@property (nonatomic,retain) UIView * searchBarBackdrop;                                                             //@synthesize searchBarBackdrop=_searchBarBackdrop - In the implementation block
@property (nonatomic,retain) UIView * separator;                                                                     //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) _UISearchBarScopeContainerView * scopeBarContainer;                                     //@synthesize scopeBarContainer=_scopeBarContainer - In the implementation block
@property (nonatomic,retain) _UISearchBarSearchContainerView * searchFieldContainer;                                 //@synthesize searchFieldContainer=_searchFieldContainer - In the implementation block
@property (nonatomic,retain) _UISearchBarPromptContainerView * promptContainer;                                      //@synthesize promptContainer=_promptContainer - In the implementation block
@property (nonatomic,retain) UIView * scopeBar; 
@property (nonatomic,retain) UISearchBarTextField * searchField; 
@property (nonatomic,retain) UIView * cancelButton; 
@property (nonatomic,retain) UIView * deleteButton; 
@property (nonatomic,retain) UIView * leftButton; 
@property (assign,nonatomic) BOOL hasCancelButton; 
@property (assign,nonatomic) BOOL hasDeleteButton; 
@property (assign,nonatomic) BOOL hasLeftButton; 
@property (assign,nonatomic) BOOL hasScopeBar; 
@property (assign,nonatomic) BOOL hasPromptLabel; 
@property (assign,nonatomic) BOOL hasSearchBarBackground; 
@property (assign,nonatomic) BOOL hasSearchBarBackdrop; 
@property (assign,nonatomic) BOOL hasSeparator; 
@property (assign,nonatomic) double backgroundExtension;                                                             //@synthesize backgroundExtension=_backgroundExtension - In the implementation block
@property (assign,nonatomic) BOOL allowSearchFieldShrinkage; 
@property (assign,nonatomic) BOOL searchFieldUsesCustomBackgroundImage; 
@property (assign,nonatomic) BOOL searchFieldEffectivelySupportsDynamicType; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;                                       //@synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment - In the implementation block
@property (assign,nonatomic) double searchBarReadableWidth;                                                          //@synthesize searchBarReadableWidth=_searchBarReadableWidth - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScopeTitles;                                                 //@synthesize numberOfScopeTitles=_numberOfScopeTitles - In the implementation block
@property (nonatomic,retain) UIFont * searchFieldFont;                                                               //@synthesize searchFieldFont=_searchFieldFont - In the implementation block
@property (nonatomic,readonly) CGRect searchFieldContainerLayoutFrame;                                               //@synthesize searchFieldContainerLayoutFrame=_searchFieldContainerLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect scopeBarContainerLayoutFrame;                                                  //@synthesize scopeBarContainerLayoutFrame=_scopeBarContainerLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect promptContainerLayoutFrame;                                                    //@synthesize promptContainerLayoutFrame=_promptContainerLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect searchBarBackgroundLayoutFrame;                                                //@synthesize searchBarBackgroundLayoutFrame=_searchBarBackgroundLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect separatorLayoutFrame;                                                          //@synthesize separatorLayoutFrame=_separatorLayoutFrame - In the implementation block
@property (assign,nonatomic) long long representedLayoutState;                                                       //@synthesize representedLayoutState=_representedLayoutState - In the implementation block
@property (nonatomic,readonly) CGSize heightRange;                                                                   //@synthesize heightRange=_heightRange - In the implementation block
@property (assign,nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLayout;
-(UIView *)cancelButton;
-(void)setCancelButton:(UIView *)arg1 ;
-(UISearchBarTextField *)searchField;
-(void)setHasDeleteButton:(BOOL)arg1 ;
-(void)setAdditionalPaddingForCancelButtonAtLeadingEdge:(double)arg1 ;
-(void)setSearchField:(UISearchBarTextField *)arg1 ;
-(void)setNumberOfScopeTitles:(unsigned long long)arg1 ;
-(void)applyLayout;
-(void)setScopeBar:(UIView *)arg1 ;
-(BOOL)hasScopeBar;
-(unsigned long long)numberOfScopeTitles;
-(void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(/*^block*/id)arg1 ;
-(void)setHasScopeBar:(BOOL)arg1 ;
-(UIView *)scopeBar;
-(void)prepareSearchContainerLayout;
-(long long)representedLayoutState;
-(BOOL)hasLeftButton;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
-(void)setRepresentedLayoutState:(long long)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(CGRect)separatorLayoutFrame;
-(void)setSearchBarBackdrop:(UIView *)arg1 ;
-(CGSize)heightRange;
-(CGRect)searchBarBackgroundLayoutFrame;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundExtension:(double)arg1 ;
-(void)setAllowSearchFieldShrinkage:(BOOL)arg1 ;
-(BOOL)hasSearchBarBackground;
-(void)prepareSublayouts;
-(void)setHasPromptLabel:(BOOL)arg1 ;
-(_UISearchBarSearchContainerView *)searchFieldContainer;
-(void)prepareBaseConfigurationForSublayout:(id)arg1 ;
-(void)setHasLeftButton:(BOOL)arg1 ;
-(double)searchBarReadableWidth;
-(UIEdgeInsets)scopeContainerSpecificInsets;
-(double)minimumLayoutWidth;
-(BOOL)isHostingNavBarTransitionActive;
-(double)additionalPaddingForCancelButtonAtLeadingEdge;
-(void)setSearchFieldFont:(UIFont *)arg1 ;
-(void)setHasSearchBarBackdrop:(BOOL)arg1 ;
-(void)setScopeBarContainer:(_UISearchBarScopeContainerView *)arg1 ;
-(_UISearchBarScopeContainerView *)scopeBarContainer;
-(UIView *)searchBarBackdrop;
-(double)naturalScopeBarHeight;
-(UIView *)leftButton;
-(void)setScopeContainerLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(void)setDelegateSearchFieldFrameManipulationBlock:(/*^block*/id)arg1 ;
-(void)setSearchFieldContainer:(_UISearchBarSearchContainerView *)arg1 ;
-(void)setUpScopeContainerLayout;
-(BOOL)hasSeparator;
-(_UISearchBarSearchContainerLayout *)searchContainerLayout;
-(double)naturalPromptContainerHeight;
-(BOOL)hasSearchBarBackdrop;
-(double)backgroundExtension;
-(double)naturalTotalHeight;
-(UIFont *)searchFieldFont;
-(void)containerLayoutWillUpdateLayout:(id)arg1 ;
-(BOOL)hasCancelButton;
-(double)layout:(id)arg1 fontScaledValueForValue:(double)arg2 ;
-(void)cleanUpLayout;
-(BOOL)allowSearchFieldShrinkage;
-(_UISearchBarScopeContainerLayout *)scopeContainerLayout;
-(void)applyScopeContainerSublayout;
-(void)setLeftButton:(UIView *)arg1 ;
-(BOOL)hasPromptLabel;
-(void)setSearchBarReadableWidth:(double)arg1 ;
-(BOOL)isProspective;
-(UIView *)searchBarBackground;
-(UIView *)deleteButton;
-(CGRect)scopeBarContainerLayoutFrame;
-(void)setHasSeparator:(BOOL)arg1 ;
-(void)setSearchContainerLayout:(_UISearchBarSearchContainerLayout *)arg1 ;
-(void)setDeleteButton:(UIView *)arg1 ;
-(double)naturalSearchBarHeight;
-(void)ensureCorrectContainerViewOrdering;
-(_UISearchBarPromptContainerView *)promptContainer;
-(void)setSearchFieldEffectivelySupportsDynamicType:(BOOL)arg1 ;
-(double)naturalSearchFieldHeight;
-(void)setSearchBarBackground:(UIView *)arg1 ;
-(BOOL)hasDeleteButton;
-(CGRect)promptContainerLayoutFrame;
-(void)setHasSearchBarBackground:(BOOL)arg1 ;
-(void)setHasCancelButton:(BOOL)arg1 ;
-(void)setUpSearchContainerLayout;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(void)setSearchFieldUsesCustomBackgroundImage:(BOOL)arg1 ;
-(void)prepareScopeContainerLayout;
-(void)setPromptContainer:(_UISearchBarPromptContainerView *)arg1 ;
-(BOOL)searchFieldUsesCustomBackgroundImage;
-(void)setHostingNavBarTransitionActive:(BOOL)arg1 ;
-(CGRect)searchFieldContainerLayoutFrame;
-(void)setProspective:(BOOL)arg1 ;
-(BOOL)searchFieldEffectivelySupportsDynamicType;
@end

