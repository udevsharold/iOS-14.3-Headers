/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSRentalInformationRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;

}

@property (readonly) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) NSNumber * rentalKeyIdentifier;                //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
@end

