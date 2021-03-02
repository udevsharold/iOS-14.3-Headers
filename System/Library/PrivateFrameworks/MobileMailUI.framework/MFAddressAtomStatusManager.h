/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFAddressBookClient.h>

@protocol MFAddressAtomProvider;
@class MFMessageLoadingContext, EMAccount, MailAccount, EMSecurityInformation, NSError, NSString;

@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient> {

	id<MFAddressAtomProvider> _atomProvider;
	MFMessageLoadingContext* _context;
	EMAccount* _account;
	MailAccount* _legacyAccount;
	EMSecurityInformation* _securityInformation;
	NSError* _smimeError;

}

@property (assign,nonatomic,__weak) MFMessageLoadingContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) EMAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MailAccount * legacyAccount;                                //@synthesize legacyAccount=_legacyAccount - In the implementation block
@property (nonatomic,retain) EMSecurityInformation * securityInformation;                //@synthesize securityInformation=_securityInformation - In the implementation block
@property (setter=setSMIMEError:,nonatomic,retain) NSError * smimeError;                 //@synthesize smimeError=_smimeError - In the implementation block
@property (assign,nonatomic,__weak) id<MFAddressAtomProvider> atomProvider;              //@synthesize atomProvider=_atomProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccount:(EMAccount *)arg1 ;
-(void)_commonInit;
-(EMAccount *)account;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
-(void)setSecurityInformation:(EMSecurityInformation *)arg1 ;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(MFMessageLoadingContext *)context;
-(NSError *)smimeError;
-(id)otherSigners;
-(EMSecurityInformation *)securityInformation;
-(void)_trustDidChange:(id)arg1 ;
-(void)_legacyAccountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)updateTrustForDisplayedAtoms;
-(void)_invalidateAtoms;
-(id<MFAddressAtomProvider>)atomProvider;
-(void)setSMIMEError:(id)arg1 ;
-(void)_updateAtomsInList:(id)arg1 ;
-(int)actionForTrustInformation:(id)arg1 ;
-(void)_updateOtherSignersList:(id)arg1 ;
-(BOOL)_atomContainsVIPSender:(id)arg1 ;
-(MailAccount *)legacyAccount;
-(void)setLegacyAccount:(MailAccount *)arg1 ;
-(void)_updateVIPStatus;
-(void)setAtomProvider:(id<MFAddressAtomProvider>)arg1 ;
-(void)updateWithSecurityInformation:(id)arg1 ;
@end
