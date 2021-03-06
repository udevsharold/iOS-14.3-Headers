/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountStore, ACAccount;

@interface AAQuotaDepletionAlert : NSObject {

	NSString* _dataclass;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;

}
+(BOOL)_isDisabledDataclass:(id)arg1 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(id)init;
-(void)showWithHandler:(/*^block*/id)arg1 ;
-(id)initForDataclass:(id)arg1 ;
-(BOOL)showIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(id)_primaryAccount;
@end

