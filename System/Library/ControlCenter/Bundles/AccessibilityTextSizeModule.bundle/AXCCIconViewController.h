/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol AXCCIconViewControllerDelegate;
@class UIImage, UIImageView, UITapGestureRecognizer;

@interface AXCCIconViewController : UIViewController {

	UIImage* _image;
	UIImageView* _glyphImageView;
	UITapGestureRecognizer* _tapRecognizer;
	id<AXCCIconViewControllerDelegate> _iconDelegate;

}

@property (assign,nonatomic,__weak) id<AXCCIconViewControllerDelegate> iconDelegate;              //@synthesize iconDelegate=_iconDelegate - In the implementation block
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id<AXCCIconViewControllerDelegate>)iconDelegate;
-(void)setIconDelegate:(id<AXCCIconViewControllerDelegate>)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
@end

