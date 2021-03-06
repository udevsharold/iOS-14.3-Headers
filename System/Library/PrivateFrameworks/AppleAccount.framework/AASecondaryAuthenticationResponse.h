/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString, NSData;

@interface AASecondaryAuthenticationResponse : AAResponse {

	NSString* _secondFactorToken;
	NSData* _buddyML;

}

@property (nonatomic,readonly) NSString * secondFactorToken;              //@synthesize secondFactorToken=_secondFactorToken - In the implementation block
@property (nonatomic,readonly) NSData * buddyML;                          //@synthesize buddyML=_buddyML - In the implementation block
-(NSString *)secondFactorToken;
-(NSData *)buddyML;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

