/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController {

	UIActivityIndicatorView* _loadingSpinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingSpinner;              //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
-(void)stopSpinner;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
@end

