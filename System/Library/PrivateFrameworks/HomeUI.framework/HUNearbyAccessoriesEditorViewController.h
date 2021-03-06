/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUInstructionsTableViewController.h>

@class HMAccessory, HFAccessoryProfileItem, HUNearbyAccessoriesEditorServiceGridViewController;

@interface HUNearbyAccessoriesEditorViewController : HUInstructionsTableViewController {

	HMAccessory* _primaryAccessory;
	HFAccessoryProfileItem* _accessoryProfileItem;
	HUNearbyAccessoriesEditorServiceGridViewController* _servicesViewController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HMAccessory * primaryAccessory;                                                           //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,__weak,readonly) HFAccessoryProfileItem * accessoryProfileItem;                                   //@synthesize accessoryProfileItem=_accessoryProfileItem - In the implementation block
@property (nonatomic,retain) HUNearbyAccessoriesEditorServiceGridViewController * servicesViewController;              //@synthesize servicesViewController=_servicesViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(id)hu_preloadContent;
-(void)_displayProgressIndicatorWhileLoading;
-(void)dismissEditor:(id)arg1 ;
-(void)cancelEditing:(id)arg1 ;
-(HUNearbyAccessoriesEditorServiceGridViewController *)servicesViewController;
-(HMAccessory *)primaryAccessory;
-(HFAccessoryProfileItem *)accessoryProfileItem;
-(id)initWithAccessoryProfileSourceItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrimaryAccessory:(HMAccessory *)arg1 ;
-(void)setServicesViewController:(HUNearbyAccessoriesEditorServiceGridViewController *)arg1 ;
@end

