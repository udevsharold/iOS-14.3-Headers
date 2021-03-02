/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HUQuickControlValveToggleView;

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController {

	HUQuickControlValveToggleView* _controlView;

}

@property (nonatomic,readonly) HFControlItem*<HFPrimaryStateWriter> controlItem; 
@property (nonatomic,retain) HUQuickControlValveToggleView * controlView;                     //@synthesize controlView=_controlView - In the implementation block
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(HUQuickControlValveToggleView *)controlView;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)setControlView:(HUQuickControlValveToggleView *)arg1 ;
@end
