/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding> {

	PKServiceProviderOrder* _serviceProviderOrder;

}

@property (nonatomic,readonly) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)availableNetworks;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(id)merchantIdentifier;
-(id)initWithServiceProviderOrder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
