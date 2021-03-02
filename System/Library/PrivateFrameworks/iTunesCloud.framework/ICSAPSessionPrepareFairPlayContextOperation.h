/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation {

	ICSAPSession* _sapSession;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) ICSAPSession * sapSession;              //@synthesize sapSession=_sapSession - In the implementation block
@property (nonatomic,copy) id responseHandler;                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)_exchangeDataWithSAPContext:(id)arg1 requestContext:(id)arg2 setupURL:(id)arg3 responseData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setSapSession:(ICSAPSession *)arg1 ;
-(ICSAPSession *)sapSession;
@end
