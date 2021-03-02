/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {

	SUGradient* _backgroundGradient;
	SUGradient* _defaultBackgroundGradient;
	BOOL _hideLoadingView;
	SULoadingView* _loadingView;
	SUGradientView* _gradientView;

}

@property (nonatomic,copy) SUGradient * backgroundGradient;                     //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy) SUGradient * defaultBackgroundGradient;              //@synthesize defaultBackgroundGradient=_defaultBackgroundGradient - In the implementation block
@property (nonatomic,readonly) SULoadingView * loadingView; 
@property (assign,nonatomic) BOOL shouldShowLoadingView; 
-(id)init;
-(void)dealloc;
-(void)setBackgroundGradient:(SUGradient *)arg1 ;
-(SULoadingView *)loadingView;
-(SUGradient *)backgroundGradient;
-(void)loadView;
-(void)setScriptProperties:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(void)setDefaultBackgroundGradient:(SUGradient *)arg1 ;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(void)parentViewControllerHierarchyDidChange;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(void)_reloadBackgroundGradient;
-(void)_reloadLoadingView;
-(id)_newURLBagBackgroundGradient;
-(id)_copyActiveGradient;
-(void)setShouldShowLoadingView:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingView;
-(SUGradient *)defaultBackgroundGradient;
@end
