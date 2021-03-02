/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HRFeatureRegulatoryPanelViewController.h>

@class NSArray;

@interface HRAtrialFibrillationRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController {

	NSArray* _displayableItems;
	long long _reenableFeatureSection;

}

@property (assign,nonatomic) long long reenableFeatureSection;              //@synthesize reenableFeatureSection=_reenableFeatureSection - In the implementation block
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)displayableItems;
-(void)receivedHeartRhythmAvailabilityNotification;
-(id)_displayableItemsForFeatureName;
-(id)_displayableItemsForPhone;
-(BOOL)_shouldDisplayItemsForWatch;
-(id)_displayableItemsForWatch;
-(id)_displayableItemsForInstructionManual;
-(void)setReenableFeatureSection:(long long)arg1 ;
-(id)_displayableItemsForReenableFeature;
-(id)_displayableItemsForContactSupport;
-(long long)reenableFeatureSection;
@end
