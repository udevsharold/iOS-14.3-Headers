/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISearchController.h>

@protocol SBIconListLayoutProvider;
@class UIView;

@interface SBHWidgetSearchController : UISearchController {

	id<SBIconListLayoutProvider> _listLayoutProvider;
	UIView* _searchBarTextFieldBackgroundView;
	UIView* _searchBarBackgroundView;

}

@property (nonatomic,retain) UIView * searchBarBackgroundView;                               //@synthesize searchBarBackgroundView=_searchBarBackgroundView - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayoutProvider> listLayoutProvider;              //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,readonly) UIView * searchBarTextFieldBackgroundView;                    //@synthesize searchBarTextFieldBackgroundView=_searchBarTextFieldBackgroundView - In the implementation block
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(void)_setupSearchBar;
-(void)_setupTextField;
-(void)_setupTextFieldBackground;
-(void)_setupBarBackground;
-(id)initWithListLayoutProvider:(id)arg1 ;
-(void)updateSearchBarBackgroundForScrollDistance:(double)arg1 ;
-(UIView *)searchBarTextFieldBackgroundView;
-(UIView *)searchBarBackgroundView;
-(void)setSearchBarBackgroundView:(UIView *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
@end
