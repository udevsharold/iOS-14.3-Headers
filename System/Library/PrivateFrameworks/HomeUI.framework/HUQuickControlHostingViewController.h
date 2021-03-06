/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveViewController.h>

@class HUQuickControlViewProfile, UIViewController, NSString;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController> {

	HUQuickControlViewProfile* _profile;
	UIViewController* _contraption;

}

@property (nonatomic,readonly) HUQuickControlViewProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) UIViewController * contraption;                           //@synthesize contraption=_contraption - In the implementation block
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HUQuickControlViewProfile *)profile;
-(void)loadView;
-(void)viewDidLoad;
-(UIViewController *)contraption;
-(id)initWithViewController:(id)arg1 profile:(id)arg2 ;
@end

