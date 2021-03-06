/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIView, CFXLiveCaptureViewController;

@interface CFXNonTransformedLiveCaptureContainerViewController : UIViewController {

	UIView* _liveCaptureContainer;
	UIView* _liveCaptureContainerContainer;
	CFXLiveCaptureViewController* _liveCaptureViewController;

}

@property (nonatomic,retain) UIView * liveCaptureContainer;                                           //@synthesize liveCaptureContainer=_liveCaptureContainer - In the implementation block
@property (nonatomic,retain) UIView * liveCaptureContainerContainer;                                  //@synthesize liveCaptureContainerContainer=_liveCaptureContainerContainer - In the implementation block
@property (nonatomic,readonly) CFXLiveCaptureViewController * liveCaptureViewController;              //@synthesize liveCaptureViewController=_liveCaptureViewController - In the implementation block
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)viewDidLoad;
-(CFXLiveCaptureViewController *)liveCaptureViewController;
-(UIView *)liveCaptureContainer;
-(UIView *)liveCaptureContainerContainer;
-(void)setLiveCaptureContainer:(UIView *)arg1 ;
-(void)setLiveCaptureContainerContainer:(UIView *)arg1 ;
@end

