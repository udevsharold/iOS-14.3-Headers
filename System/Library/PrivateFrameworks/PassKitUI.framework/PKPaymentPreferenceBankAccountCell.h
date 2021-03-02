/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentPreferenceCardCell.h>

@class UIImage, PKBankAccountInformation;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {

	UIImage* _bankIcon;
	PKBankAccountInformation* _bankAccount;

}

@property (nonatomic,retain) PKBankAccountInformation * bankAccount;              //@synthesize bankAccount=_bankAccount - In the implementation block
-(void)setBankAccount:(PKBankAccountInformation *)arg1 ;
-(PKBankAccountInformation *)bankAccount;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;
@end
