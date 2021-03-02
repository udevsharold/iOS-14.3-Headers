/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPassUpgradeRequest;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPassUpgradeRequest* _request;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassUpgradeRequest * request;              //@synthesize request=_request - In the implementation block
-(PKPassUpgradeRequest *)request;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2 ;
-(PKPaymentPass *)pass;
@end
