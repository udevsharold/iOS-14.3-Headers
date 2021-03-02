/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@interface AMSCardEnrollmentVerificationTask : AMSTask
+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1 ;
+(id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 ;
+(id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 ;
+(void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
