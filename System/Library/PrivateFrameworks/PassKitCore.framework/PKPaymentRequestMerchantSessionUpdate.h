/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMerchantSession;

@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding> {

	long long _status;
	PKPaymentMerchantSession* _session;

}

@property (assign,nonatomic) long long status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) PKPaymentMerchantSession * session;              //@synthesize session=_session - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSession:(PKPaymentMerchantSession *)arg1 ;
-(PKPaymentMerchantSession *)session;
-(id)init;
-(id)initWithStatus:(long long)arg1 merchantSession:(id)arg2 ;
-(long long)status;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

