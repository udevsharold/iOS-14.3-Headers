/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKTransactionMapView, UIImageView, PKPaymentTransaction;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {

	UILabel* _titleLabel;
	PKTransactionMapView* _mapView;
	UIImageView* _disclosureView;
	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMapAppearance; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldShowDisclosureIndicator;
-(BOOL)usesDarkMapAppearance;
-(void)setUsesDarkMapAppearance:(BOOL)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setTitleLabelColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_disclosureView;
@end

