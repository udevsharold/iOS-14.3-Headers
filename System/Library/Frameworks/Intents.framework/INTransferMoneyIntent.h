/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INTransferMoneyIntentExport.h>

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString;

@interface INTransferMoneyIntent : INIntent <INTransferMoneyIntentExport>

@property (nonatomic,copy,readonly) INPaymentAccount * fromAccount; 
@property (nonatomic,copy,readonly) INPaymentAccount * toAccount; 
@property (nonatomic,copy,readonly) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy,readonly) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy,readonly) NSString * transactionNote; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(INPaymentAccount *)toAccount;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(INPaymentAccount *)arg1 ;
-(void)setToAccount:(INPaymentAccount *)arg1 ;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(INPaymentAmount *)arg1 ;
-(NSString *)transactionNote;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(INDateComponentsRange *)arg1 ;
-(void)setTransactionNote:(NSString *)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(id)initWithFromAccount:(id)arg1 toAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 ;
@end

