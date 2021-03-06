/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SBHIconViewConfigurationInteractionDelegate.h>
#import <libobjc.A.dylib/SBHWidgetSheetViewControlling.h>

@protocol SBHStackConfigurationViewControllerAppearanceDelegate, SBHStackConfigurationViewControllerDelegate, SBHWidgetSheetViewControllerPresenter;
@class UITableView, UIButton, SBHStackConfiguration, SBIconView, SBHWidgetConfigurationInteraction, CHSAvocadoDescriptorProvider, NSString;

@interface SBHStackConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SBHIconViewConfigurationInteractionDelegate, SBHWidgetSheetViewControlling> {

	UITableView* _tableView;
	UIButton* _closeButton;
	id<SBHStackConfigurationViewControllerAppearanceDelegate> _appearanceDelegate;
	id<SBHStackConfigurationViewControllerDelegate> _delegate;
	id<SBHWidgetSheetViewControllerPresenter> _presenter;
	SBHStackConfiguration* _configuration;
	SBIconView* _iconView;
	SBHWidgetConfigurationInteraction* _widgetConfigurationInteraction;
	CHSAvocadoDescriptorProvider* _descriptorProvider;

}

@property (nonatomic,retain) SBHStackConfiguration * configuration;                                                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SBIconView * iconView;                                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) SBHWidgetConfigurationInteraction * widgetConfigurationInteraction;                               //@synthesize widgetConfigurationInteraction=_widgetConfigurationInteraction - In the implementation block
@property (nonatomic,retain) CHSAvocadoDescriptorProvider * descriptorProvider;                                                //@synthesize descriptorProvider=_descriptorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBHStackConfigurationViewControllerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBHStackConfigurationViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBHWidgetSheetViewControllerPresenter> presenter;                                       //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setIconView:(SBIconView *)arg1 ;
-(SBIconView *)iconView;
-(id<SBHWidgetSheetViewControllerPresenter>)presenter;
-(void)_setupCloseButton;
-(void)didToggleSmartRotation:(id)arg1 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)setPresenter:(id<SBHWidgetSheetViewControllerPresenter>)arg1 ;
-(SBHWidgetConfigurationInteraction *)widgetConfigurationInteraction;
-(void)setWidgetConfigurationInteraction:(SBHWidgetConfigurationInteraction *)arg1 ;
-(CHSAvocadoDescriptorProvider *)descriptorProvider;
-(void)_saveConfiguration;
-(void)_presentConfigurationForDataSource:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 iconView:(id)arg2 descriptorProvider:(id)arg3 ;
-(id)sourceViewForConfigurationInteraction:(id)arg1 ;
-(void)setDescriptorProvider:(CHSAvocadoDescriptorProvider *)arg1 ;
-(void)configurationInteractionDidEnd:(id)arg1 ;
-(void)_setupTableView;
-(void)configurationInteractionDidCommit:(id)arg1 ;
-(id)sourceIconViewForConfigurationInteraction:(id)arg1 ;
-(id)containerViewControllerForConfigurationInteraction:(id)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(SBHStackConfiguration *)configuration;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setAppearanceDelegate:(id<SBHStackConfigurationViewControllerAppearanceDelegate>)arg1 ;
-(id<SBHStackConfigurationViewControllerAppearanceDelegate>)appearanceDelegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setConfiguration:(SBHStackConfiguration *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<SBHStackConfigurationViewControllerDelegate>)arg1 ;
-(void)loadView;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id<SBHStackConfigurationViewControllerDelegate>)delegate;
-(void)closeButtonTapped:(id)arg1 ;
@end

