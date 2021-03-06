/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaControls/MediaControlsEndpointsManagerDelegate.h>
#import <libobjc.A.dylib/MRUEndpointMetadataControllerObserver.h>
#import <libobjc.A.dylib/MRURoutingViewControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@protocol MRUViewServiceRoutingViewControllerDelegate;
@class MPMediaControlsConfiguration, MRUVisualStylingProvider, MediaControlsEndpointsManager, MRURoutingViewController, MPAVOutputDeviceRoutingDataSource, UITableViewDiffableDataSource, NSMutableDictionary, MRUEndpointMetadataController, UIViewController, MRUViewServiceRoutingView, NSString;

@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate> {

	BOOL _onScreen;
	BOOL _canShowRemoteDevices;
	MPMediaControlsConfiguration* _configuration;
	MRUVisualStylingProvider* _stylingProvider;
	id<MRUViewServiceRoutingViewControllerDelegate> _delegate;
	MediaControlsEndpointsManager* _endpointsManager;
	MRURoutingViewController* _routingViewController;
	MPAVOutputDeviceRoutingDataSource* _outputDeviceRoutingDataSource;
	UITableViewDiffableDataSource* _dataSource;
	NSMutableDictionary* _controllers;
	MRUEndpointMetadataController* _selectedController;
	/*^block*/id _replaceRoutes;
	UIViewController* _alertViewController;

}

@property (nonatomic,retain) MRUViewServiceRoutingView * view; 
@property (nonatomic,retain) MRUViewServiceRoutingView * viewIfLoaded; 
@property (nonatomic,retain) MediaControlsEndpointsManager * endpointsManager;                               //@synthesize endpointsManager=_endpointsManager - In the implementation block
@property (nonatomic,retain) MRURoutingViewController * routingViewController;                               //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoutingDataSource * outputDeviceRoutingDataSource;              //@synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource - In the implementation block
@property (nonatomic,retain) UITableViewDiffableDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * controllers;                                              //@synthesize controllers=_controllers - In the implementation block
@property (nonatomic,retain) MRUEndpointMetadataController * selectedController;                             //@synthesize selectedController=_selectedController - In the implementation block
@property (nonatomic,copy) id replaceRoutes;                                                                 //@synthesize replaceRoutes=_replaceRoutes - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                                //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) BOOL canShowRemoteDevices;                                                      //@synthesize canShowRemoteDevices=_canShowRemoteDevices - In the implementation block
@property (nonatomic,retain) UIViewController * alertViewController;                                         //@synthesize alertViewController=_alertViewController - In the implementation block
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                                     //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MRUViewServiceRoutingViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isOnScreen;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)updateHeader;
-(id)init;
-(void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setDataSource:(UITableViewDiffableDataSource *)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setRoutingViewController:(MRURoutingViewController *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(void)endpointsManager:(id)arg1 defersRoutesReplacement:(/*^block*/id)arg2 ;
-(void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2 ;
-(UITableViewDiffableDataSource *)dataSource;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(void)setDelegate:(id<MRUViewServiceRoutingViewControllerDelegate>)arg1 ;
-(MediaControlsEndpointsManager *)endpointsManager;
-(void)setEndpointsManager:(MediaControlsEndpointsManager *)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(id<MRUViewServiceRoutingViewControllerDelegate>)delegate;
-(MRURoutingViewController *)routingViewController;
-(void)setState:(long long)arg1 ;
-(NSMutableDictionary *)controllers;
-(void)viewDidLoad;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(id)selectedIdentifier;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)didSelectListState:(id)arg1 ;
-(void)updateCell:(id)arg1 forIdentifier:(id)arg2 ;
-(void)updateDiscoveryMode;
-(UIViewController *)alertViewController;
-(void)setAlertViewController:(UIViewController *)arg1 ;
-(void)updateCellForIdentifier:(id)arg1 ;
-(void)updateMoreButtonVisibility;
-(void)didSelectQuickActionButton:(id)arg1 ;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1 ;
-(void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)metadataController:(id)arg1 didUpdateApplicationIcon:(id)arg2 ;
-(void)metadataControllerDidChangeState:(id)arg1 ;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg1 ;
-(void)metadataControllerRouteDidUpdate:(id)arg1 ;
-(id)replaceRoutes;
-(void)setReplaceRoutes:(id)arg1 ;
-(void)updateControllers;
-(void)updateRoutingViewController;
-(void)updateRoutingViewControllerContentEdgeInsets;
-(void)updateSelectedViewController;
-(BOOL)canShowMoreButton;
-(void)setSelectedController:(MRUEndpointMetadataController *)arg1 ;
-(void)routingViewControllerDidUpdateItems:(id)arg1 ;
-(MPAVOutputDeviceRoutingDataSource *)outputDeviceRoutingDataSource;
-(void)setOutputDeviceRoutingDataSource:(MPAVOutputDeviceRoutingDataSource *)arg1 ;
-(void)setControllers:(NSMutableDictionary *)arg1 ;
-(MRUEndpointMetadataController *)selectedController;
-(BOOL)canShowRemoteDevices;
-(void)setCanShowRemoteDevices:(BOOL)arg1 ;
@end

