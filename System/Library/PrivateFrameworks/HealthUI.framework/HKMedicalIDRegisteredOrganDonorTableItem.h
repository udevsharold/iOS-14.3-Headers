/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;
@class HKOrganDonationCallToActionTableViewCell;

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem {

	long long _organization;
	id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> _delegate;
	HKOrganDonationCallToActionTableViewCell* _notRegisteredCell;

}

@property (nonatomic,retain) HKOrganDonationCallToActionTableViewCell * notRegisteredCell;                      //@synthesize notRegisteredCell=_notRegisteredCell - In the implementation block
@property (assign,nonatomic,__weak) id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIEdgeInsets)separatorInset;
-(void)setDelegate:(id<HKMedicalIDRegisteredOrganDonorTableItemDelegate>)arg1 ;
-(id)title;
-(id<HKMedicalIDRegisteredOrganDonorTableItemDelegate>)delegate;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(id)titleForFooter;
-(void)presentDonateLifeRegistrationSequence;
-(id)initInEditMode:(BOOL)arg1 organDonationOrganization:(long long)arg2 ;
-(id)organizationLogo;
-(HKOrganDonationCallToActionTableViewCell *)notRegisteredCell;
-(void)setNotRegisteredCell:(HKOrganDonationCallToActionTableViewCell *)arg1 ;
@end
