/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSAttributedString, CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSAttributedString * formattedAddressString; 
@property (nonatomic,readonly) CNContact * shippingAddress; 
@property (nonatomic,readonly) NSString * shippingType; 
@property (nonatomic,readonly) BOOL isShippingEditable; 
+(long long)dataType;
-(NSString *)shippingType;
-(BOOL)isShippingEditable;
-(BOOL)isValidWithError:(id*)arg1 ;
-(CNContact *)shippingAddress;
-(id)paymentContactFormatErrors;
-(id)_shippingName;
-(NSAttributedString *)formattedAddressString;
-(id)errors;
@end
