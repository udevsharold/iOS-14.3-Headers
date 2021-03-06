/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOServiceProtocol;
@class SOAuthorizationRequestParameters;

@interface SORequestQueueItem : NSObject {

	id<SOServiceProtocol> _service;
	SOAuthorizationRequestParameters* _requestParameters;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) id<SOServiceProtocol> service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) SOAuthorizationRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
-(SOAuthorizationRequestParameters *)requestParameters;
-(id)completionBlock;
-(id<SOServiceProtocol>)service;
-(id)description;
-(id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

