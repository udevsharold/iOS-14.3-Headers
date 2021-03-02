/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SpringBoardHome/SBIconView.h>
#import <libobjc.A.dylib/SBLeafIconDataSource.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>

@protocol SearchUIHomeScreenEngagementDelegate;
@class NSString, SFSearchResult, TLKProminenceView, NSURL;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBLeafIconDataSource, SBIconViewDelegate> {

	BOOL _addRoundedKeyboardHighlight;
	BOOL _labelNeedsUpdateOnMovingToWindow;
	id<SearchUIHomeScreenEngagementDelegate> _engagementDelegate;
	unsigned long long _variant;
	SFSearchResult* _searchResult;
	TLKProminenceView* _placeholderView;
	TLKProminenceView* _focusHighlightView;
	NSURL* _applicationBundleURL;
	NSString* _applicationShortcutWidgetBundleIdentifier;

}

@property (retain) SFSearchResult * searchResult;                                                             //@synthesize searchResult=_searchResult - In the implementation block
@property (retain) TLKProminenceView * placeholderView;                                                       //@synthesize placeholderView=_placeholderView - In the implementation block
@property (retain) TLKProminenceView * focusHighlightView;                                                    //@synthesize focusHighlightView=_focusHighlightView - In the implementation block
@property (nonatomic,copy) NSURL * applicationBundleURL;                                                      //@synthesize applicationBundleURL=_applicationBundleURL - In the implementation block
@property (nonatomic,copy) NSString * applicationShortcutWidgetBundleIdentifier;                              //@synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier - In the implementation block
@property (assign) BOOL labelNeedsUpdateOnMovingToWindow;                                                     //@synthesize labelNeedsUpdateOnMovingToWindow=_labelNeedsUpdateOnMovingToWindow - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate;              //@synthesize engagementDelegate=_engagementDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long variant;                                                      //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) BOOL addRoundedKeyboardHighlight;                                                //@synthesize addRoundedKeyboardHighlight=_addRoundedKeyboardHighlight - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationShortcutService;
+(id)cacheForVariant:(unsigned long long)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)shouldHideShortcutsForAppIcon:(id)arg1 ;
-(TLKProminenceView *)placeholderView;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2 ;
-(id)icon:(id)arg1 imageWithInfo:(SBIconImageInfo)arg2 ;
-(BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1 ;
-(void)setLabelNeedsUpdateOnMovingToWindow:(BOOL)arg1 ;
-(void)iconTapped:(id)arg1 ;
-(id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(id<SearchUIHomeScreenEngagementDelegate>)engagementDelegate;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(void)launchIcon;
-(id)init;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1 ;
-(void)setEngagementDelegate:(id<SearchUIHomeScreenEngagementDelegate>)arg1 ;
-(void)setFocusHighlightFrame;
-(void)appIconsChanged:(id)arg1 ;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setAddRoundedKeyboardHighlight:(BOOL)arg1 ;
-(TLKProminenceView *)focusHighlightView;
-(BOOL)isTimedOutForIcon:(id)arg1 ;
-(id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1 ;
-(void)setFocusHighlightView:(TLKProminenceView *)arg1 ;
-(void)setApplicationShortcutWidgetBundleIdentifier:(NSString *)arg1 ;
-(void)_updateLabel;
-(void)screenTimeChanged;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(void)resetImageWithAppIcon:(id)arg1 ;
-(void)fetchApplicationShortcutInfoForIcon:(id)arg1 ;
-(id)applicationBundleURLForShortcutsWithIconView:(id)arg1 ;
-(NSURL *)applicationBundleURL;
-(void)setApplicationBundleURL:(NSURL *)arg1 ;
-(BOOL)addRoundedKeyboardHighlight;
-(long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(unsigned long long)variant;
-(BOOL)labelNeedsUpdateOnMovingToWindow;
-(void)setVariant:(unsigned long long)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)fetchIconImageForIcon:(id)arg1 ;
-(SFSearchResult *)searchResult;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setPlaceholderView:(TLKProminenceView *)arg1 ;
@end
