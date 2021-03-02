/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@protocol SPUIRemoteSearchViewDelegate;
@class UIView;

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController {

	unsigned _searchHeaderContextID;
	double _revealProgress;
	unsigned long long _source;
	id<SPUIRemoteSearchViewDelegate> _delegate;
	double _distanceToTopOfIcons;
	unsigned long long _searchHeaderLayerRenderID;
	UIView* _dummyTransitionView;
	/*^block*/id _willStartPresetingSpotlightHandler;
	/*^block*/id _finishedPresentingSpotlightHandler;
	/*^block*/id _willBeginDismissingSpotlightHandler;
	/*^block*/id _didFinishDismissingSpotlightHandler;

}

@property (assign,nonatomic) double distanceToTopOfIcons;                                   //@synthesize distanceToTopOfIcons=_distanceToTopOfIcons - In the implementation block
@property (nonatomic,retain) UIView * dummyTransitionView;                                  //@synthesize dummyTransitionView=_dummyTransitionView - In the implementation block
@property (assign,nonatomic) unsigned long long searchHeaderLayerRenderID;                  //@synthesize searchHeaderLayerRenderID=_searchHeaderLayerRenderID - In the implementation block
@property (assign,nonatomic) unsigned searchHeaderContextID;                                //@synthesize searchHeaderContextID=_searchHeaderContextID - In the implementation block
@property (nonatomic,copy) id willStartPresetingSpotlightHandler;                           //@synthesize willStartPresetingSpotlightHandler=_willStartPresetingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id finishedPresentingSpotlightHandler;                           //@synthesize finishedPresentingSpotlightHandler=_finishedPresentingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id willBeginDismissingSpotlightHandler;                          //@synthesize willBeginDismissingSpotlightHandler=_willBeginDismissingSpotlightHandler - In the implementation block
@property (nonatomic,copy) id didFinishDismissingSpotlightHandler;                          //@synthesize didFinishDismissingSpotlightHandler=_didFinishDismissingSpotlightHandler - In the implementation block
@property (assign,nonatomic) double revealProgress;                                         //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIRemoteSearchViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)init;
-(BOOL)prewarmSceneInTheBackground;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)finishedPresentingSpotlightHandler;
-(id)didFinishDismissingSpotlightHandler;
-(void)finishCompletionHandlerIfNeeded;
-(unsigned)searchHeaderContextID;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDidFinishDismissingSpotlightHandler:(id)arg1 ;
-(unsigned long long)searchHeaderLayerRenderID;
-(void)setDistanceToTopOfIcons:(double)arg1 ;
-(void)didInvalidateSceneWhenForeground;
-(void)setRevealProgress:(double)arg1 ;
-(UIView *)dummyTransitionView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setWillStartPresetingSpotlightHandler:(id)arg1 ;
-(void)setDummyTransitionView:(UIView *)arg1 ;
-(id)sceneSpecification;
-(void)updateSceneSettingsWithBlock:(/*^block*/id)arg1 ;
-(double)distanceToTopOfIcons;
-(id)willBeginDismissingSpotlightHandler;
-(unsigned long long)source;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)revealProgress;
-(void)setDelegate:(id<SPUIRemoteSearchViewDelegate>)arg1 ;
-(id)willStartPresetingSpotlightHandler;
-(void)setSearchHeaderContextID:(unsigned)arg1 ;
-(void)setFinishedPresentingSpotlightHandler:(id)arg1 ;
-(void)setWillBeginDismissingSpotlightHandler:(id)arg1 ;
-(void)setSearchHeaderLayerRenderID:(unsigned long long)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(id<SPUIRemoteSearchViewDelegate>)delegate;
-(void)updateIntent:(unsigned long long)arg1 ;
@end
