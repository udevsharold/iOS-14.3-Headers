/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIWindow.h>

@class BKUIIndicatorViewController;

@interface BKUIIndicatorWindow : UIWindow {

	BOOL _shouldShow;
	BKUIIndicatorViewController* _indicatorController;

}

@property (nonatomic,retain) BKUIIndicatorViewController * indicatorController;              //@synthesize indicatorController=_indicatorController - In the implementation block
@property (assign,nonatomic) BOOL shouldShow;                                                //@synthesize shouldShow=_shouldShow - In the implementation block
+(id)instanceWithWindowScene:(id)arg1 ;
-(BOOL)shouldShow;
-(id)backgroundColor;
-(BKUIIndicatorViewController *)indicatorController;
-(void)setShouldShow:(BOOL)arg1 ;
-(void)setIndicatorController:(BKUIIndicatorViewController *)arg1 ;
@end
