/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {

	ACAccount* _appleAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;

}

@property (nonatomic,readonly) BOOL isUserInitiated; 
-(id)urlRequest;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)_familyGrandSlamSigner;
-(BOOL)isUserInitiated;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
@end

