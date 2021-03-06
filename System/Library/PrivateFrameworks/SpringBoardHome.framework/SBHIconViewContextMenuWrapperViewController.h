/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHRecentsDocumentExtensionProviderDelegate.h>

@class MTMaterialView, NSArray, UIViewController, NSString;

@interface SBHIconViewContextMenuWrapperViewController : UIViewController <WGWidgetViewControllerDelegate, SBHRecentsDocumentExtensionProviderDelegate> {

	MTMaterialView* _backgroundView;
	NSArray* _layoutConstraints;
	UIViewController* _contentViewController;
	NSString* _groupNameBase;
	double _backgroundScale;
	double _continuousCornerRadius;

}

@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,copy) NSString * groupNameBase;                                //@synthesize groupNameBase=_groupNameBase - In the implementation block
@property (assign,nonatomic) double backgroundScale;                                //@synthesize backgroundScale=_backgroundScale - In the implementation block
@property (assign,nonatomic) double continuousCornerRadius;                         //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)continuousCornerRadius;
-(NSString *)groupNameBase;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(double)backgroundScale;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applyContinuousCornerRadius;
-(void)_applyPreferredContentSizeChange:(CGSize)arg1 ;
-(void)recentsDocumentExtensionViewControllerRequestsDismiss:(id)arg1 ;
-(void)setContinuousCornerRadius:(double)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setBackgroundScale:(double)arg1 ;
-(void)remoteViewControllerDidConnectForWidgetViewController:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidgetViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)setGroupNameBase:(NSString *)arg1 ;
@end

