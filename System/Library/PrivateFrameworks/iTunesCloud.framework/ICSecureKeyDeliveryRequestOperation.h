/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation {

	ICSecureKeyDeliveryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICSecureKeyDeliveryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(ICSecureKeyDeliveryRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setRequest:(ICSecureKeyDeliveryRequest *)arg1 ;
@end

