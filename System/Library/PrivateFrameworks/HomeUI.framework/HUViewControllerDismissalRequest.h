/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface HUViewControllerDismissalRequest : NSObject {

	BOOL _animated;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL animated;                                    //@synthesize animated=_animated - In the implementation block
+(id)requestWithViewController:(id)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
@end
