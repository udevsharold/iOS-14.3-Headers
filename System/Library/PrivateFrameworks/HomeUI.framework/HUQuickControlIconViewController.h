/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HUQuickControlIconView, HFDictionaryValueControlItem, HUQuickControlIconViewProfile;

@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController {

	HUQuickControlIconView* _quickControlIconView;

}

@property (nonatomic,readonly) HFDictionaryValueControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlIconViewProfile * viewProfile; 
@property (nonatomic,retain) HUQuickControlIconView * quickControlIconView;              //@synthesize quickControlIconView=_quickControlIconView - In the implementation block
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)setQuickControlIconView:(HUQuickControlIconView *)arg1 ;
-(HUQuickControlIconView *)quickControlIconView;
@end

