/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest {

	NSString* _requestID;
	NSString* _action;

}

@property (nonatomic,copy) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSString * action;                 //@synthesize action=_action - In the implementation block
-(void)setRequestID:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)requestID;
-(NSString *)action;
@end

